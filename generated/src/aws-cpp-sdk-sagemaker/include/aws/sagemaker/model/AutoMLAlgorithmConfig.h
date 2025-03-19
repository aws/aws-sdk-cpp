/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AutoMLAlgorithm.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The selection of algorithms trained on your dataset to generate the model
   * candidates for an Autopilot job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLAlgorithmConfig">AWS
   * API Reference</a></p>
   */
  class AutoMLAlgorithmConfig
  {
  public:
    AWS_SAGEMAKER_API AutoMLAlgorithmConfig() = default;
    AWS_SAGEMAKER_API AutoMLAlgorithmConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLAlgorithmConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The selection of algorithms trained on your dataset to generate the model
     * candidates for an Autopilot job.</p> <ul> <li> <p> <b>For the tabular problem
     * type <code>TabularJobConfig</code>:</b> </p>  <p>Selected algorithms must
     * belong to the list corresponding to the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLJobConfig.html#sagemaker-Type-AutoMLJobConfig-Mode">AutoMLJobConfig.Mode</a>
     * (<code>ENSEMBLING</code> or <code>HYPERPARAMETER_TUNING</code>). Choose a
     * minimum of 1 algorithm.</p>  <ul> <li> <p>In <code>ENSEMBLING</code>
     * mode:</p> <ul> <li> <p>"catboost"</p> </li> <li> <p>"extra-trees"</p> </li> <li>
     * <p>"fastai"</p> </li> <li> <p>"lightgbm"</p> </li> <li> <p>"linear-learner"</p>
     * </li> <li> <p>"nn-torch"</p> </li> <li> <p>"randomforest"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> <li> <p>In <code>HYPERPARAMETER_TUNING</code>
     * mode:</p> <ul> <li> <p>"linear-learner"</p> </li> <li> <p>"mlp"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> </ul> </li> <li> <p> <b>For the time-series
     * forecasting problem type <code>TimeSeriesForecastingJobConfig</code>:</b> </p>
     * <ul> <li> <p>Choose your algorithms from this list.</p> <ul> <li>
     * <p>"cnn-qr"</p> </li> <li> <p>"deepar"</p> </li> <li> <p>"prophet"</p> </li>
     * <li> <p>"arima"</p> </li> <li> <p>"npts"</p> </li> <li> <p>"ets"</p> </li> </ul>
     * </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<AutoMLAlgorithm>& GetAutoMLAlgorithms() const { return m_autoMLAlgorithms; }
    inline bool AutoMLAlgorithmsHasBeenSet() const { return m_autoMLAlgorithmsHasBeenSet; }
    template<typename AutoMLAlgorithmsT = Aws::Vector<AutoMLAlgorithm>>
    void SetAutoMLAlgorithms(AutoMLAlgorithmsT&& value) { m_autoMLAlgorithmsHasBeenSet = true; m_autoMLAlgorithms = std::forward<AutoMLAlgorithmsT>(value); }
    template<typename AutoMLAlgorithmsT = Aws::Vector<AutoMLAlgorithm>>
    AutoMLAlgorithmConfig& WithAutoMLAlgorithms(AutoMLAlgorithmsT&& value) { SetAutoMLAlgorithms(std::forward<AutoMLAlgorithmsT>(value)); return *this;}
    inline AutoMLAlgorithmConfig& AddAutoMLAlgorithms(AutoMLAlgorithm value) { m_autoMLAlgorithmsHasBeenSet = true; m_autoMLAlgorithms.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<AutoMLAlgorithm> m_autoMLAlgorithms;
    bool m_autoMLAlgorithmsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
