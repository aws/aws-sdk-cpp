/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/ModelInput.h>
#include <aws/sagemakertrainingsessionruntime/model/SamplingParams.h>

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
 * <p>The configuration for generating text samples from the model.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/SampleConfig">AWS
 * API Reference</a></p>
 */
class SampleConfig {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleConfig() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The input prompt to send to the model for text generation.</p>
   */
  inline const ModelInput& GetPrompt() const { return m_prompt; }
  inline bool PromptHasBeenSet() const { return m_promptHasBeenSet; }
  template <typename PromptT = ModelInput>
  void SetPrompt(PromptT&& value) {
    m_promptHasBeenSet = true;
    m_prompt = std::forward<PromptT>(value);
  }
  template <typename PromptT = ModelInput>
  SampleConfig& WithPrompt(PromptT&& value) {
    SetPrompt(std::forward<PromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of independent samples to generate for the prompt.</p>
   */
  inline int GetNumSamples() const { return m_numSamples; }
  inline bool NumSamplesHasBeenSet() const { return m_numSamplesHasBeenSet; }
  inline void SetNumSamples(int value) {
    m_numSamplesHasBeenSet = true;
    m_numSamples = value;
  }
  inline SampleConfig& WithNumSamples(int value) {
    SetNumSamples(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameters controlling the sampling strategy.</p>
   */
  inline const SamplingParams& GetSamplingParams() const { return m_samplingParams; }
  inline bool SamplingParamsHasBeenSet() const { return m_samplingParamsHasBeenSet; }
  template <typename SamplingParamsT = SamplingParams>
  void SetSamplingParams(SamplingParamsT&& value) {
    m_samplingParamsHasBeenSet = true;
    m_samplingParams = std::forward<SamplingParamsT>(value);
  }
  template <typename SamplingParamsT = SamplingParams>
  SampleConfig& WithSamplingParams(SamplingParamsT&& value) {
    SetSamplingParams(std::forward<SamplingParamsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to include per-token log-probabilities for the input prompt
   * in the response.</p>
   */
  inline bool GetIncludePromptLogprobs() const { return m_includePromptLogprobs; }
  inline bool IncludePromptLogprobsHasBeenSet() const { return m_includePromptLogprobsHasBeenSet; }
  inline void SetIncludePromptLogprobs(bool value) {
    m_includePromptLogprobsHasBeenSet = true;
    m_includePromptLogprobs = value;
  }
  inline SampleConfig& WithIncludePromptLogprobs(bool value) {
    SetIncludePromptLogprobs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of top-k log-probabilities to return per prompt token.</p>
   */
  inline int GetTopkPromptLogprobs() const { return m_topkPromptLogprobs; }
  inline bool TopkPromptLogprobsHasBeenSet() const { return m_topkPromptLogprobsHasBeenSet; }
  inline void SetTopkPromptLogprobs(int value) {
    m_topkPromptLogprobsHasBeenSet = true;
    m_topkPromptLogprobs = value;
  }
  inline SampleConfig& WithTopkPromptLogprobs(int value) {
    SetTopkPromptLogprobs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the model package whose checkpoint this sample should run against.
   * Must be a valid SageMaker model package ARN in the format
   * <code>arn:aws:sagemaker:REGION:ACCOUNT:model-package/PACKAGE_NAME/VERSION</code>.
   * When absent, the sample runs against the session's latest checkpoint.</p>
   */
  inline const Aws::String& GetModelPackageArn() const { return m_modelPackageArn; }
  inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }
  template <typename ModelPackageArnT = Aws::String>
  void SetModelPackageArn(ModelPackageArnT&& value) {
    m_modelPackageArnHasBeenSet = true;
    m_modelPackageArn = std::forward<ModelPackageArnT>(value);
  }
  template <typename ModelPackageArnT = Aws::String>
  SampleConfig& WithModelPackageArn(ModelPackageArnT&& value) {
    SetModelPackageArn(std::forward<ModelPackageArnT>(value));
    return *this;
  }
  ///@}
 private:
  ModelInput m_prompt;

  int m_numSamples{0};

  SamplingParams m_samplingParams;

  bool m_includePromptLogprobs{false};

  int m_topkPromptLogprobs{0};

  Aws::String m_modelPackageArn;
  bool m_promptHasBeenSet = false;
  bool m_numSamplesHasBeenSet = false;
  bool m_samplingParamsHasBeenSet = false;
  bool m_includePromptLogprobsHasBeenSet = false;
  bool m_topkPromptLogprobsHasBeenSet = false;
  bool m_modelPackageArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
