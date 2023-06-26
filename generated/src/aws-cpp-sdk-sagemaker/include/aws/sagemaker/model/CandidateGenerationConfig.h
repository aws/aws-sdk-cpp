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
    AWS_SAGEMAKER_API CandidateGenerationConfig();
    AWS_SAGEMAKER_API CandidateGenerationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CandidateGenerationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Stores the configuration information for the selection of algorithms used to
     * train model candidates on tabular data.</p> <p>The list of available algorithms
     * to choose from depends on the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TabularJobConfig.html">
     * <code>TabularJobConfig.Mode</code> </a>.</p> <ul> <li> <p>
     * <code>AlgorithmsConfig</code> should not be set in <code>AUTO</code> training
     * mode.</p> </li> <li> <p>When <code>AlgorithmsConfig</code> is provided, one
     * <code>AutoMLAlgorithms</code> attribute must be set and one only.</p> <p>If the
     * list of algorithms provided as values for <code>AutoMLAlgorithms</code> is
     * empty, <code>CandidateGenerationConfig</code> uses the full set of algorithms
     * for the given training mode.</p> </li> <li> <p>When
     * <code>AlgorithmsConfig</code> is not provided,
     * <code>CandidateGenerationConfig</code> uses the full set of algorithms for the
     * given training mode.</p> </li> </ul> <p>For the list of all algorithms per
     * problem type and training mode, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLAlgorithmConfig.html">
     * AutoMLAlgorithmConfig</a>.</p> <p>For more information on each algorithm, see
     * the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-support">Algorithm
     * support</a> section in Autopilot developer guide.</p>
     */
    inline const Aws::Vector<AutoMLAlgorithmConfig>& GetAlgorithmsConfig() const{ return m_algorithmsConfig; }

    /**
     * <p>Stores the configuration information for the selection of algorithms used to
     * train model candidates on tabular data.</p> <p>The list of available algorithms
     * to choose from depends on the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TabularJobConfig.html">
     * <code>TabularJobConfig.Mode</code> </a>.</p> <ul> <li> <p>
     * <code>AlgorithmsConfig</code> should not be set in <code>AUTO</code> training
     * mode.</p> </li> <li> <p>When <code>AlgorithmsConfig</code> is provided, one
     * <code>AutoMLAlgorithms</code> attribute must be set and one only.</p> <p>If the
     * list of algorithms provided as values for <code>AutoMLAlgorithms</code> is
     * empty, <code>CandidateGenerationConfig</code> uses the full set of algorithms
     * for the given training mode.</p> </li> <li> <p>When
     * <code>AlgorithmsConfig</code> is not provided,
     * <code>CandidateGenerationConfig</code> uses the full set of algorithms for the
     * given training mode.</p> </li> </ul> <p>For the list of all algorithms per
     * problem type and training mode, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLAlgorithmConfig.html">
     * AutoMLAlgorithmConfig</a>.</p> <p>For more information on each algorithm, see
     * the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-support">Algorithm
     * support</a> section in Autopilot developer guide.</p>
     */
    inline bool AlgorithmsConfigHasBeenSet() const { return m_algorithmsConfigHasBeenSet; }

    /**
     * <p>Stores the configuration information for the selection of algorithms used to
     * train model candidates on tabular data.</p> <p>The list of available algorithms
     * to choose from depends on the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TabularJobConfig.html">
     * <code>TabularJobConfig.Mode</code> </a>.</p> <ul> <li> <p>
     * <code>AlgorithmsConfig</code> should not be set in <code>AUTO</code> training
     * mode.</p> </li> <li> <p>When <code>AlgorithmsConfig</code> is provided, one
     * <code>AutoMLAlgorithms</code> attribute must be set and one only.</p> <p>If the
     * list of algorithms provided as values for <code>AutoMLAlgorithms</code> is
     * empty, <code>CandidateGenerationConfig</code> uses the full set of algorithms
     * for the given training mode.</p> </li> <li> <p>When
     * <code>AlgorithmsConfig</code> is not provided,
     * <code>CandidateGenerationConfig</code> uses the full set of algorithms for the
     * given training mode.</p> </li> </ul> <p>For the list of all algorithms per
     * problem type and training mode, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLAlgorithmConfig.html">
     * AutoMLAlgorithmConfig</a>.</p> <p>For more information on each algorithm, see
     * the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-support">Algorithm
     * support</a> section in Autopilot developer guide.</p>
     */
    inline void SetAlgorithmsConfig(const Aws::Vector<AutoMLAlgorithmConfig>& value) { m_algorithmsConfigHasBeenSet = true; m_algorithmsConfig = value; }

    /**
     * <p>Stores the configuration information for the selection of algorithms used to
     * train model candidates on tabular data.</p> <p>The list of available algorithms
     * to choose from depends on the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TabularJobConfig.html">
     * <code>TabularJobConfig.Mode</code> </a>.</p> <ul> <li> <p>
     * <code>AlgorithmsConfig</code> should not be set in <code>AUTO</code> training
     * mode.</p> </li> <li> <p>When <code>AlgorithmsConfig</code> is provided, one
     * <code>AutoMLAlgorithms</code> attribute must be set and one only.</p> <p>If the
     * list of algorithms provided as values for <code>AutoMLAlgorithms</code> is
     * empty, <code>CandidateGenerationConfig</code> uses the full set of algorithms
     * for the given training mode.</p> </li> <li> <p>When
     * <code>AlgorithmsConfig</code> is not provided,
     * <code>CandidateGenerationConfig</code> uses the full set of algorithms for the
     * given training mode.</p> </li> </ul> <p>For the list of all algorithms per
     * problem type and training mode, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLAlgorithmConfig.html">
     * AutoMLAlgorithmConfig</a>.</p> <p>For more information on each algorithm, see
     * the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-support">Algorithm
     * support</a> section in Autopilot developer guide.</p>
     */
    inline void SetAlgorithmsConfig(Aws::Vector<AutoMLAlgorithmConfig>&& value) { m_algorithmsConfigHasBeenSet = true; m_algorithmsConfig = std::move(value); }

    /**
     * <p>Stores the configuration information for the selection of algorithms used to
     * train model candidates on tabular data.</p> <p>The list of available algorithms
     * to choose from depends on the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TabularJobConfig.html">
     * <code>TabularJobConfig.Mode</code> </a>.</p> <ul> <li> <p>
     * <code>AlgorithmsConfig</code> should not be set in <code>AUTO</code> training
     * mode.</p> </li> <li> <p>When <code>AlgorithmsConfig</code> is provided, one
     * <code>AutoMLAlgorithms</code> attribute must be set and one only.</p> <p>If the
     * list of algorithms provided as values for <code>AutoMLAlgorithms</code> is
     * empty, <code>CandidateGenerationConfig</code> uses the full set of algorithms
     * for the given training mode.</p> </li> <li> <p>When
     * <code>AlgorithmsConfig</code> is not provided,
     * <code>CandidateGenerationConfig</code> uses the full set of algorithms for the
     * given training mode.</p> </li> </ul> <p>For the list of all algorithms per
     * problem type and training mode, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLAlgorithmConfig.html">
     * AutoMLAlgorithmConfig</a>.</p> <p>For more information on each algorithm, see
     * the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-support">Algorithm
     * support</a> section in Autopilot developer guide.</p>
     */
    inline CandidateGenerationConfig& WithAlgorithmsConfig(const Aws::Vector<AutoMLAlgorithmConfig>& value) { SetAlgorithmsConfig(value); return *this;}

    /**
     * <p>Stores the configuration information for the selection of algorithms used to
     * train model candidates on tabular data.</p> <p>The list of available algorithms
     * to choose from depends on the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TabularJobConfig.html">
     * <code>TabularJobConfig.Mode</code> </a>.</p> <ul> <li> <p>
     * <code>AlgorithmsConfig</code> should not be set in <code>AUTO</code> training
     * mode.</p> </li> <li> <p>When <code>AlgorithmsConfig</code> is provided, one
     * <code>AutoMLAlgorithms</code> attribute must be set and one only.</p> <p>If the
     * list of algorithms provided as values for <code>AutoMLAlgorithms</code> is
     * empty, <code>CandidateGenerationConfig</code> uses the full set of algorithms
     * for the given training mode.</p> </li> <li> <p>When
     * <code>AlgorithmsConfig</code> is not provided,
     * <code>CandidateGenerationConfig</code> uses the full set of algorithms for the
     * given training mode.</p> </li> </ul> <p>For the list of all algorithms per
     * problem type and training mode, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLAlgorithmConfig.html">
     * AutoMLAlgorithmConfig</a>.</p> <p>For more information on each algorithm, see
     * the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-support">Algorithm
     * support</a> section in Autopilot developer guide.</p>
     */
    inline CandidateGenerationConfig& WithAlgorithmsConfig(Aws::Vector<AutoMLAlgorithmConfig>&& value) { SetAlgorithmsConfig(std::move(value)); return *this;}

    /**
     * <p>Stores the configuration information for the selection of algorithms used to
     * train model candidates on tabular data.</p> <p>The list of available algorithms
     * to choose from depends on the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TabularJobConfig.html">
     * <code>TabularJobConfig.Mode</code> </a>.</p> <ul> <li> <p>
     * <code>AlgorithmsConfig</code> should not be set in <code>AUTO</code> training
     * mode.</p> </li> <li> <p>When <code>AlgorithmsConfig</code> is provided, one
     * <code>AutoMLAlgorithms</code> attribute must be set and one only.</p> <p>If the
     * list of algorithms provided as values for <code>AutoMLAlgorithms</code> is
     * empty, <code>CandidateGenerationConfig</code> uses the full set of algorithms
     * for the given training mode.</p> </li> <li> <p>When
     * <code>AlgorithmsConfig</code> is not provided,
     * <code>CandidateGenerationConfig</code> uses the full set of algorithms for the
     * given training mode.</p> </li> </ul> <p>For the list of all algorithms per
     * problem type and training mode, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLAlgorithmConfig.html">
     * AutoMLAlgorithmConfig</a>.</p> <p>For more information on each algorithm, see
     * the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-support">Algorithm
     * support</a> section in Autopilot developer guide.</p>
     */
    inline CandidateGenerationConfig& AddAlgorithmsConfig(const AutoMLAlgorithmConfig& value) { m_algorithmsConfigHasBeenSet = true; m_algorithmsConfig.push_back(value); return *this; }

    /**
     * <p>Stores the configuration information for the selection of algorithms used to
     * train model candidates on tabular data.</p> <p>The list of available algorithms
     * to choose from depends on the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TabularJobConfig.html">
     * <code>TabularJobConfig.Mode</code> </a>.</p> <ul> <li> <p>
     * <code>AlgorithmsConfig</code> should not be set in <code>AUTO</code> training
     * mode.</p> </li> <li> <p>When <code>AlgorithmsConfig</code> is provided, one
     * <code>AutoMLAlgorithms</code> attribute must be set and one only.</p> <p>If the
     * list of algorithms provided as values for <code>AutoMLAlgorithms</code> is
     * empty, <code>CandidateGenerationConfig</code> uses the full set of algorithms
     * for the given training mode.</p> </li> <li> <p>When
     * <code>AlgorithmsConfig</code> is not provided,
     * <code>CandidateGenerationConfig</code> uses the full set of algorithms for the
     * given training mode.</p> </li> </ul> <p>For the list of all algorithms per
     * problem type and training mode, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLAlgorithmConfig.html">
     * AutoMLAlgorithmConfig</a>.</p> <p>For more information on each algorithm, see
     * the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-support">Algorithm
     * support</a> section in Autopilot developer guide.</p>
     */
    inline CandidateGenerationConfig& AddAlgorithmsConfig(AutoMLAlgorithmConfig&& value) { m_algorithmsConfigHasBeenSet = true; m_algorithmsConfig.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AutoMLAlgorithmConfig> m_algorithmsConfig;
    bool m_algorithmsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
