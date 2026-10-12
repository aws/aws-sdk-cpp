/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/ComputeLogprobsConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/LoadWeightsForSamplingConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerTrainingSessionRuntime {
namespace Model {

/**
 * <p>The configuration for a sampling operation. Exactly one member must be set to
 * specify the operation type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/SampleOperationConfig">AWS
 * API Reference</a></p>
 */
class SampleOperationConfig {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleOperationConfig() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleOperationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleOperationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for generating text samples from the model.</p>
   */
  inline const SampleConfig& GetSample() const { return m_sample; }
  inline bool SampleHasBeenSet() const { return m_sampleHasBeenSet; }
  template <typename SampleT = SampleConfig>
  void SetSample(SampleT&& value) {
    m_sampleHasBeenSet = true;
    m_sample = std::forward<SampleT>(value);
  }
  template <typename SampleT = SampleConfig>
  SampleOperationConfig& WithSample(SampleT&& value) {
    SetSample(std::forward<SampleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for computing log-probabilities of prompt tokens without
   * generating new text.</p>
   */
  inline const ComputeLogprobsConfig& GetComputeLogprobs() const { return m_computeLogprobs; }
  inline bool ComputeLogprobsHasBeenSet() const { return m_computeLogprobsHasBeenSet; }
  template <typename ComputeLogprobsT = ComputeLogprobsConfig>
  void SetComputeLogprobs(ComputeLogprobsT&& value) {
    m_computeLogprobsHasBeenSet = true;
    m_computeLogprobs = std::forward<ComputeLogprobsT>(value);
  }
  template <typename ComputeLogprobsT = ComputeLogprobsConfig>
  SampleOperationConfig& WithComputeLogprobs(ComputeLogprobsT&& value) {
    SetComputeLogprobs(std::forward<ComputeLogprobsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for loading model weights for inference and sampling
   * without restoring optimizer state.</p>
   */
  inline const LoadWeightsForSamplingConfig& GetLoadWeightsForSampling() const { return m_loadWeightsForSampling; }
  inline bool LoadWeightsForSamplingHasBeenSet() const { return m_loadWeightsForSamplingHasBeenSet; }
  template <typename LoadWeightsForSamplingT = LoadWeightsForSamplingConfig>
  void SetLoadWeightsForSampling(LoadWeightsForSamplingT&& value) {
    m_loadWeightsForSamplingHasBeenSet = true;
    m_loadWeightsForSampling = std::forward<LoadWeightsForSamplingT>(value);
  }
  template <typename LoadWeightsForSamplingT = LoadWeightsForSamplingConfig>
  SampleOperationConfig& WithLoadWeightsForSampling(LoadWeightsForSamplingT&& value) {
    SetLoadWeightsForSampling(std::forward<LoadWeightsForSamplingT>(value));
    return *this;
  }
  ///@}
 private:
  SampleConfig m_sample;

  ComputeLogprobsConfig m_computeLogprobs;

  LoadWeightsForSamplingConfig m_loadWeightsForSampling;
  bool m_sampleHasBeenSet = false;
  bool m_computeLogprobsHasBeenSet = false;
  bool m_loadWeightsForSamplingHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
