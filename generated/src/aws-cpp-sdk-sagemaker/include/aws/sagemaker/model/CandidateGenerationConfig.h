/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AutoMLAlgorithmConfig.h>
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
   * <p>Stores the configuration information for how model candidates are generated
   * using an AutoML job V2.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CandidateGenerationConfig">AWS
   * API Reference</a></p>
   */
  class CandidateGenerationConfig
  {
  public:
    AWS_SAGEMAKER_API CandidateGenerationConfig() = default;
    AWS_SAGEMAKER_API CandidateGenerationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CandidateGenerationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Your Autopilot job trains a default set of algorithms on your dataset. For
     * tabular and time-series data, you can customize the algorithm list by selecting
     * a subset of algorithms for your problem type.</p> <p>
     * <code>AlgorithmsConfig</code> stores the customized selection of algorithms to
     * train on your data.</p> <ul> <li> <p> <b>For the tabular problem type
     * <code>TabularJobConfig</code>,</b> the list of available algorithms to choose
     * from depends on the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLJobConfig.html">
     * <code>AutoMLJobConfig.Mode</code> </a>.</p> <ul> <li> <p>
     * <code>AlgorithmsConfig</code> should not be set when the training mode
     * <code>AutoMLJobConfig.Mode</code> is set to <code>AUTO</code>.</p> </li> <li>
     * <p>When <code>AlgorithmsConfig</code> is provided, one
     * <code>AutoMLAlgorithms</code> attribute must be set and one only.</p> <p>If the
     * list of algorithms provided as values for <code>AutoMLAlgorithms</code> is
     * empty, <code>CandidateGenerationConfig</code> uses the full set of algorithms
     * for the given training mode.</p> </li> <li> <p>When
     * <code>AlgorithmsConfig</code> is not provided,
     * <code>CandidateGenerationConfig</code> uses the full set of algorithms for the
     * given training mode.</p> </li> </ul> <p>For the list of all algorithms per
     * training mode, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLAlgorithmConfig.html">
     * AlgorithmConfig</a>.</p> <p>For more information on each algorithm, see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-support">Algorithm
     * support</a> section in the Autopilot developer guide.</p> </li> <li> <p> <b>For
     * the time-series forecasting problem type
     * <code>TimeSeriesForecastingJobConfig</code>,</b> choose your algorithms from the
     * list provided in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLAlgorithmConfig.html">
     * AlgorithmConfig</a>.</p> <p>For more information on each algorithm, see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/timeseries-forecasting-algorithms.html">Algorithms
     * support for time-series forecasting</a> section in the Autopilot developer
     * guide.</p> <ul> <li> <p>When <code>AlgorithmsConfig</code> is provided, one
     * <code>AutoMLAlgorithms</code> attribute must be set and one only.</p> <p>If the
     * list of algorithms provided as values for <code>AutoMLAlgorithms</code> is
     * empty, <code>CandidateGenerationConfig</code> uses the full set of algorithms
     * for time-series forecasting.</p> </li> <li> <p>When
     * <code>AlgorithmsConfig</code> is not provided,
     * <code>CandidateGenerationConfig</code> uses the full set of algorithms for
     * time-series forecasting.</p> </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<AutoMLAlgorithmConfig>& GetAlgorithmsConfig() const { return m_algorithmsConfig; }
    inline bool AlgorithmsConfigHasBeenSet() const { return m_algorithmsConfigHasBeenSet; }
    template<typename AlgorithmsConfigT = Aws::Vector<AutoMLAlgorithmConfig>>
    void SetAlgorithmsConfig(AlgorithmsConfigT&& value) { m_algorithmsConfigHasBeenSet = true; m_algorithmsConfig = std::forward<AlgorithmsConfigT>(value); }
    template<typename AlgorithmsConfigT = Aws::Vector<AutoMLAlgorithmConfig>>
    CandidateGenerationConfig& WithAlgorithmsConfig(AlgorithmsConfigT&& value) { SetAlgorithmsConfig(std::forward<AlgorithmsConfigT>(value)); return *this;}
    template<typename AlgorithmsConfigT = AutoMLAlgorithmConfig>
    CandidateGenerationConfig& AddAlgorithmsConfig(AlgorithmsConfigT&& value) { m_algorithmsConfigHasBeenSet = true; m_algorithmsConfig.emplace_back(std::forward<AlgorithmsConfigT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AutoMLAlgorithmConfig> m_algorithmsConfig;
    bool m_algorithmsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
