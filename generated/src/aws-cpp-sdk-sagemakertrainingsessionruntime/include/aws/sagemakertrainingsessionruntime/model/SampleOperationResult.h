/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/ComputeLogprobsResult.h>
#include <aws/sagemakertrainingsessionruntime/model/LoadWeightsForSamplingResult.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleResponse.h>

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
 * <p>The result of a completed sampling operation. Exactly one member is
 * populated, corresponding to the operation type that was submitted.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/SampleOperationResult">AWS
 * API Reference</a></p>
 */
class SampleOperationResult {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleOperationResult() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleOperationResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleOperationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The generated text samples from the model.</p>
   */
  inline const SampleResponse& GetSample() const { return m_sample; }
  inline bool SampleHasBeenSet() const { return m_sampleHasBeenSet; }
  template <typename SampleT = SampleResponse>
  void SetSample(SampleT&& value) {
    m_sampleHasBeenSet = true;
    m_sample = std::forward<SampleT>(value);
  }
  template <typename SampleT = SampleResponse>
  SampleOperationResult& WithSample(SampleT&& value) {
    SetSample(std::forward<SampleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The computed log-probabilities for the prompt tokens.</p>
   */
  inline const ComputeLogprobsResult& GetComputeLogprobs() const { return m_computeLogprobs; }
  inline bool ComputeLogprobsHasBeenSet() const { return m_computeLogprobsHasBeenSet; }
  template <typename ComputeLogprobsT = ComputeLogprobsResult>
  void SetComputeLogprobs(ComputeLogprobsT&& value) {
    m_computeLogprobsHasBeenSet = true;
    m_computeLogprobs = std::forward<ComputeLogprobsT>(value);
  }
  template <typename ComputeLogprobsT = ComputeLogprobsResult>
  SampleOperationResult& WithComputeLogprobs(ComputeLogprobsT&& value) {
    SetComputeLogprobs(std::forward<ComputeLogprobsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result from loading weights for sampling.</p>
   */
  inline const LoadWeightsForSamplingResult& GetLoadWeightsForSampling() const { return m_loadWeightsForSampling; }
  inline bool LoadWeightsForSamplingHasBeenSet() const { return m_loadWeightsForSamplingHasBeenSet; }
  template <typename LoadWeightsForSamplingT = LoadWeightsForSamplingResult>
  void SetLoadWeightsForSampling(LoadWeightsForSamplingT&& value) {
    m_loadWeightsForSamplingHasBeenSet = true;
    m_loadWeightsForSampling = std::forward<LoadWeightsForSamplingT>(value);
  }
  template <typename LoadWeightsForSamplingT = LoadWeightsForSamplingResult>
  SampleOperationResult& WithLoadWeightsForSampling(LoadWeightsForSamplingT&& value) {
    SetLoadWeightsForSampling(std::forward<LoadWeightsForSamplingT>(value));
    return *this;
  }
  ///@}
 private:
  SampleResponse m_sample;

  ComputeLogprobsResult m_computeLogprobs;

  LoadWeightsForSamplingResult m_loadWeightsForSampling;
  bool m_sampleHasBeenSet = false;
  bool m_computeLogprobsHasBeenSet = false;
  bool m_loadWeightsForSamplingHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
