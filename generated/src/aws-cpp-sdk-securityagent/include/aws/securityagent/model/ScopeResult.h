/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ScopeDecision.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>The outcome of scoping a CI/CD pentest job's code changes, including the
 * decision and the reason for it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ScopeResult">AWS
 * API Reference</a></p>
 */
class ScopeResult {
 public:
  AWS_SECURITYAGENT_API ScopeResult() = default;
  AWS_SECURITYAGENT_API ScopeResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ScopeResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The scoping decision for the job's code changes.</p>
   */
  inline ScopeDecision GetDecision() const { return m_decision; }
  inline bool DecisionHasBeenSet() const { return m_decisionHasBeenSet; }
  inline void SetDecision(ScopeDecision value) {
    m_decisionHasBeenSet = true;
    m_decision = value;
  }
  inline ScopeResult& WithDecision(ScopeDecision value) {
    SetDecision(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable explanation of the scoping decision.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  ScopeResult& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  ScopeDecision m_decision{ScopeDecision::NOT_SET};

  Aws::String m_reason;
  bool m_decisionHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
