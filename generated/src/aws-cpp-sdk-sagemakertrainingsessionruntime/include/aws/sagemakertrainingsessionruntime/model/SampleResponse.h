/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/SampledSequence.h>
#include <aws/sagemakertrainingsessionruntime/model/TokenLogprob.h>

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
 * <p>The response containing generated samples and optional
 * log-probabilities.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/SampleResponse">AWS
 * API Reference</a></p>
 */
class SampleResponse {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleResponse() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of generated sequences.</p>
   */
  inline const Aws::Vector<SampledSequence>& GetSequences() const { return m_sequences; }
  inline bool SequencesHasBeenSet() const { return m_sequencesHasBeenSet; }
  template <typename SequencesT = Aws::Vector<SampledSequence>>
  void SetSequences(SequencesT&& value) {
    m_sequencesHasBeenSet = true;
    m_sequences = std::forward<SequencesT>(value);
  }
  template <typename SequencesT = Aws::Vector<SampledSequence>>
  SampleResponse& WithSequences(SequencesT&& value) {
    SetSequences(std::forward<SequencesT>(value));
    return *this;
  }
  template <typename SequencesT = SampledSequence>
  SampleResponse& AddSequences(SequencesT&& value) {
    m_sequencesHasBeenSet = true;
    m_sequences.emplace_back(std::forward<SequencesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The per-token log-probabilities for the input prompt. Populated only when
   * <code>includePromptLogprobs</code> is true.</p>
   */
  inline const Aws::Vector<double>& GetPromptLogprobs() const { return m_promptLogprobs; }
  inline bool PromptLogprobsHasBeenSet() const { return m_promptLogprobsHasBeenSet; }
  template <typename PromptLogprobsT = Aws::Vector<double>>
  void SetPromptLogprobs(PromptLogprobsT&& value) {
    m_promptLogprobsHasBeenSet = true;
    m_promptLogprobs = std::forward<PromptLogprobsT>(value);
  }
  template <typename PromptLogprobsT = Aws::Vector<double>>
  SampleResponse& WithPromptLogprobs(PromptLogprobsT&& value) {
    SetPromptLogprobs(std::forward<PromptLogprobsT>(value));
    return *this;
  }
  inline SampleResponse& AddPromptLogprobs(double value) {
    m_promptLogprobsHasBeenSet = true;
    m_promptLogprobs.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The top-k log-probabilities per prompt token, as a list of lists. Populated
   * only when <code>topkPromptLogprobs</code> is greater than 0.</p>
   */
  inline const Aws::Vector<Aws::Vector<TokenLogprob>>& GetTopkPromptLogprobs() const { return m_topkPromptLogprobs; }
  inline bool TopkPromptLogprobsHasBeenSet() const { return m_topkPromptLogprobsHasBeenSet; }
  template <typename TopkPromptLogprobsT = Aws::Vector<Aws::Vector<TokenLogprob>>>
  void SetTopkPromptLogprobs(TopkPromptLogprobsT&& value) {
    m_topkPromptLogprobsHasBeenSet = true;
    m_topkPromptLogprobs = std::forward<TopkPromptLogprobsT>(value);
  }
  template <typename TopkPromptLogprobsT = Aws::Vector<Aws::Vector<TokenLogprob>>>
  SampleResponse& WithTopkPromptLogprobs(TopkPromptLogprobsT&& value) {
    SetTopkPromptLogprobs(std::forward<TopkPromptLogprobsT>(value));
    return *this;
  }
  template <typename TopkPromptLogprobsT = Aws::Vector<TokenLogprob>>
  SampleResponse& AddTopkPromptLogprobs(TopkPromptLogprobsT&& value) {
    m_topkPromptLogprobsHasBeenSet = true;
    m_topkPromptLogprobs.emplace_back(std::forward<TopkPromptLogprobsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SampledSequence> m_sequences;

  Aws::Vector<double> m_promptLogprobs;

  Aws::Vector<Aws::Vector<TokenLogprob>> m_topkPromptLogprobs;
  bool m_sequencesHasBeenSet = false;
  bool m_promptLogprobsHasBeenSet = false;
  bool m_topkPromptLogprobsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
