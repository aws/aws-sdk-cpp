/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleTokenUsage.h>
#include <aws/sagemakertrainingsessionruntime/model/StopReason.h>

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
 * <p>A single generated sequence from the model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/SampledSequence">AWS
 * API Reference</a></p>
 */
class SampledSequence {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampledSequence() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampledSequence(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampledSequence& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reason why generation stopped. A value of <code>stop</code> indicates a
   * stop sequence was encountered. A value of <code>length</code> indicates the
   * maximum token limit was reached.</p>
   */
  inline StopReason GetStopReason() const { return m_stopReason; }
  inline bool StopReasonHasBeenSet() const { return m_stopReasonHasBeenSet; }
  inline void SetStopReason(StopReason value) {
    m_stopReasonHasBeenSet = true;
    m_stopReason = value;
  }
  inline SampledSequence& WithStopReason(StopReason value) {
    SetStopReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token IDs of the generated sequence.</p>
   */
  inline const Aws::Vector<int>& GetTokens() const { return m_tokens; }
  inline bool TokensHasBeenSet() const { return m_tokensHasBeenSet; }
  template <typename TokensT = Aws::Vector<int>>
  void SetTokens(TokensT&& value) {
    m_tokensHasBeenSet = true;
    m_tokens = std::forward<TokensT>(value);
  }
  template <typename TokensT = Aws::Vector<int>>
  SampledSequence& WithTokens(TokensT&& value) {
    SetTokens(std::forward<TokensT>(value));
    return *this;
  }
  inline SampledSequence& AddTokens(int value) {
    m_tokensHasBeenSet = true;
    m_tokens.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The per-token log-probabilities for the generated tokens.</p>
   */
  inline const Aws::Vector<double>& GetLogprobs() const { return m_logprobs; }
  inline bool LogprobsHasBeenSet() const { return m_logprobsHasBeenSet; }
  template <typename LogprobsT = Aws::Vector<double>>
  void SetLogprobs(LogprobsT&& value) {
    m_logprobsHasBeenSet = true;
    m_logprobs = std::forward<LogprobsT>(value);
  }
  template <typename LogprobsT = Aws::Vector<double>>
  SampledSequence& WithLogprobs(LogprobsT&& value) {
    SetLogprobs(std::forward<LogprobsT>(value));
    return *this;
  }
  inline SampledSequence& AddLogprobs(double value) {
    m_logprobsHasBeenSet = true;
    m_logprobs.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token usage statistics for this individual sample.</p>
   */
  inline const SampleTokenUsage& GetTokenUsage() const { return m_tokenUsage; }
  inline bool TokenUsageHasBeenSet() const { return m_tokenUsageHasBeenSet; }
  template <typename TokenUsageT = SampleTokenUsage>
  void SetTokenUsage(TokenUsageT&& value) {
    m_tokenUsageHasBeenSet = true;
    m_tokenUsage = std::forward<TokenUsageT>(value);
  }
  template <typename TokenUsageT = SampleTokenUsage>
  SampledSequence& WithTokenUsage(TokenUsageT&& value) {
    SetTokenUsage(std::forward<TokenUsageT>(value));
    return *this;
  }
  ///@}
 private:
  StopReason m_stopReason{StopReason::NOT_SET};

  Aws::Vector<int> m_tokens;

  Aws::Vector<double> m_logprobs;

  SampleTokenUsage m_tokenUsage;
  bool m_stopReasonHasBeenSet = false;
  bool m_tokensHasBeenSet = false;
  bool m_logprobsHasBeenSet = false;
  bool m_tokenUsageHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
