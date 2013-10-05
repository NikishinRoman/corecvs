/**
 * \file makePreciseParametersControlWidget.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include "makePreciseParametersControlWidget.h"
#include "ui_makePreciseParametersControlWidget.h"
#include "qSettingsGetter.h"
#include "qSettingsSetter.h"


MakePreciseParametersControlWidget::MakePreciseParametersControlWidget(QWidget *parent, bool _autoInit, QString _rootPath)
    : ParametersControlWidgetBase(parent)
    , mUi(new Ui::MakePreciseParametersControlWidget)
    , autoInit(_autoInit)
    , rootPath(_rootPath)
{
    mUi->setupUi(this);

    QObject::connect(mUi->shouldMakePreciseCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->algorithmComboBox, SIGNAL(currentIndexChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->interpolationComboBox, SIGNAL(currentIndexChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->kLTIterationsSpinBox, SIGNAL(valueChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->kLTRadiusHSpinBox, SIGNAL(valueChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->kLTRadiusWSpinBox, SIGNAL(valueChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->kLTThresholdSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
}

MakePreciseParametersControlWidget::~MakePreciseParametersControlWidget()
{

    delete mUi;
}

void MakePreciseParametersControlWidget::loadParamWidget(WidgetLoader &loader)
{
    MakePreciseParameters *params = createParameters();
    loader.loadParameters(*params, rootPath);
    setParameters(*params);
    delete params;
}

void MakePreciseParametersControlWidget::saveParamWidget(WidgetSaver  &saver)
{
    MakePreciseParameters *params = createParameters();
    saver.saveParameters(*params, rootPath);
    delete params;
}


MakePreciseParameters *MakePreciseParametersControlWidget::createParameters() const
{

    /**
     * We should think of returning parameters by value or saving them in a preallocated place
     **/


    MakePreciseParameters *result = new MakePreciseParameters(
          mUi->shouldMakePreciseCheckBox->isChecked()
        , static_cast<MakePreciseAlgorithm::MakePreciseAlgorithm>(mUi->algorithmComboBox->currentIndex())
        , static_cast<PreciseInterpolationType::PreciseInterpolationType>(mUi->interpolationComboBox->currentIndex())
        , mUi->kLTIterationsSpinBox->value()
        , mUi->kLTRadiusHSpinBox->value()
        , mUi->kLTRadiusWSpinBox->value()
        , mUi->kLTThresholdSpinBox->value()
    );
    return result;
}

void MakePreciseParametersControlWidget::setParameters(const MakePreciseParameters &input)
{
    // Block signals to send them all at once
    bool wasBlocked = blockSignals(true);
    mUi->shouldMakePreciseCheckBox->setChecked(input.shouldMakePrecise());
    mUi->algorithmComboBox->setCurrentIndex(input.algorithm());
    mUi->interpolationComboBox->setCurrentIndex(input.interpolation());
    mUi->kLTIterationsSpinBox->setValue(input.kLTIterations());
    mUi->kLTRadiusHSpinBox->setValue(input.kLTRadiusH());
    mUi->kLTRadiusWSpinBox->setValue(input.kLTRadiusW());
    mUi->kLTThresholdSpinBox->setValue(input.kLTThreshold());
    blockSignals(wasBlocked);
    emit paramsChanged();
}

void MakePreciseParametersControlWidget::setParametersVirtual(void *input)
{
    // Modify widget parameters from outside
    MakePreciseParameters *inputCasted = static_cast<MakePreciseParameters *>(input);
    setParameters(*inputCasted);
}