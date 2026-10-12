/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

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
 * <p>The result of a compute-logprobs operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/ComputeLogprobsResult">AWS
 * API Reference</a></p>
 */
class ComputeLogprobsResult {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ComputeLogprobsResult() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ComputeLogprobsResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ComputeLogprobsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The per-token log-probabilities for the input prompt.</p>
   */
  inline const Aws::Vector<double>& GetLogprobs() const { return m_logprobs; }
  inline bool LogprobsHasBeenSet() const { return m_logprobsHasBeenSet; }
  template <typename LogprobsT = Aws::Vector<double>>
  void SetLogprobs(LogprobsT&& value) {
    m_logprobsHasBeenSet = true;
    m_logprobs = std::forward<LogprobsT>(value);
  }
  template <typename LogprobsT = Aws::Vector<double>>
  ComputeLogprobsResult& WithLogprobs(LogprobsT&& value) {
    SetLogprobs(std::forward<LogprobsT>(value));
    return *this;
  }
  inline ComputeLogprobsResult& AddLogprobs(double value) {
    m_logprobsHasBeenSet = true;
    m_logprobs.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<double> m_logprobs;
  bool m_logprobsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
