﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Stores the configuration information for how a candidate is generated
   * (optional).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLCandidateGenerationConfig">AWS
   * API Reference</a></p>
   */
  class AutoMLCandidateGenerationConfig
  {
  public:
    AWS_SAGEMAKER_API AutoMLCandidateGenerationConfig() = default;
    AWS_SAGEMAKER_API AutoMLCandidateGenerationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLCandidateGenerationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A URL to the Amazon S3 data source containing selected features from the
     * input data source to run an Autopilot job. You can input
     * <code>FeatureAttributeNames</code> (optional) in JSON format as shown below:
     * </p> <p> <code>{ "FeatureAttributeNames":["col1", "col2", ...] }</code>.</p>
     * <p>You can also specify the data type of the feature (optional) in the format
     * shown below:</p> <p> <code>{ "FeatureDataTypes":{"col1":"numeric",
     * "col2":"categorical" ... } }</code> </p>  <p>These column keys may not
     * include the target column.</p>  <p>In ensembling mode, Autopilot only
     * supports the following data types: <code>numeric</code>,
     * <code>categorical</code>, <code>text</code>, and <code>datetime</code>. In HPO
     * mode, Autopilot can support <code>numeric</code>, <code>categorical</code>,
     * <code>text</code>, <code>datetime</code>, and <code>sequence</code>.</p> <p>If
     * only <code>FeatureDataTypes</code> is provided, the column keys
     * (<code>col1</code>, <code>col2</code>,..) should be a subset of the column names
     * in the input data. </p> <p>If both <code>FeatureDataTypes</code> and
     * <code>FeatureAttributeNames</code> are provided, then the column keys should be
     * a subset of the column names provided in <code>FeatureAttributeNames</code>.
     * </p> <p>The key name <code>FeatureAttributeNames</code> is fixed. The values
     * listed in <code>["col1", "col2", ...]</code> are case sensitive and should be a
     * list of strings containing unique values that are a subset of the column names
     * in the input data. The list of columns provided must not include the target
     * column.</p>
     */
    inline const Aws::String& GetFeatureSpecificationS3Uri() const { return m_featureSpecificationS3Uri; }
    inline bool FeatureSpecificationS3UriHasBeenSet() const { return m_featureSpecificationS3UriHasBeenSet; }
    template<typename FeatureSpecificationS3UriT = Aws::String>
    void SetFeatureSpecificationS3Uri(FeatureSpecificationS3UriT&& value) { m_featureSpecificationS3UriHasBeenSet = true; m_featureSpecificationS3Uri = std::forward<FeatureSpecificationS3UriT>(value); }
    template<typename FeatureSpecificationS3UriT = Aws::String>
    AutoMLCandidateGenerationConfig& WithFeatureSpecificationS3Uri(FeatureSpecificationS3UriT&& value) { SetFeatureSpecificationS3Uri(std::forward<FeatureSpecificationS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stores the configuration information for the selection of algorithms trained
     * on tabular data.</p> <p>The list of available algorithms to choose from depends
     * on the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TabularJobConfig.html">
     * <code>TabularJobConfig.Mode</code> </a>.</p> <ul> <li> <p>
     * <code>AlgorithmsConfig</code> should not be set if the training mode is set on
     * <code>AUTO</code>.</p> </li> <li> <p>When <code>AlgorithmsConfig</code> is
     * provided, one <code>AutoMLAlgorithms</code> attribute must be set and one
     * only.</p> <p>If the list of algorithms provided as values for
     * <code>AutoMLAlgorithms</code> is empty, <code>CandidateGenerationConfig</code>
     * uses the full set of algorithms for the given training mode.</p> </li> <li>
     * <p>When <code>AlgorithmsConfig</code> is not provided,
     * <code>CandidateGenerationConfig</code> uses the full set of algorithms for the
     * given training mode.</p> </li> </ul> <p>For the list of all algorithms per
     * problem type and training mode, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLAlgorithmConfig.html">
     * AutoMLAlgorithmConfig</a>.</p> <p>For more information on each algorithm, see
     * the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-support">Algorithm
     * support</a> section in Autopilot developer guide.</p>
     */
    inline const Aws::Vector<AutoMLAlgorithmConfig>& GetAlgorithmsConfig() const { return m_algorithmsConfig; }
    inline bool AlgorithmsConfigHasBeenSet() const { return m_algorithmsConfigHasBeenSet; }
    template<typename AlgorithmsConfigT = Aws::Vector<AutoMLAlgorithmConfig>>
    void SetAlgorithmsConfig(AlgorithmsConfigT&& value) { m_algorithmsConfigHasBeenSet = true; m_algorithmsConfig = std::forward<AlgorithmsConfigT>(value); }
    template<typename AlgorithmsConfigT = Aws::Vector<AutoMLAlgorithmConfig>>
    AutoMLCandidateGenerationConfig& WithAlgorithmsConfig(AlgorithmsConfigT&& value) { SetAlgorithmsConfig(std::forward<AlgorithmsConfigT>(value)); return *this;}
    template<typename AlgorithmsConfigT = AutoMLAlgorithmConfig>
    AutoMLCandidateGenerationConfig& AddAlgorithmsConfig(AlgorithmsConfigT&& value) { m_algorithmsConfigHasBeenSet = true; m_algorithmsConfig.emplace_back(std::forward<AlgorithmsConfigT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_featureSpecificationS3Uri;
    bool m_featureSpecificationS3UriHasBeenSet = false;

    Aws::Vector<AutoMLAlgorithmConfig> m_algorithmsConfig;
    bool m_algorithmsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
