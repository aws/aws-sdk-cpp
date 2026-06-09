/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/GuardrailAction.h>
#include <aws/qconnect/model/GuardrailPolicyResult.h>
#include <aws/qconnect/model/GuardrailSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>Result of a single guardrail assessment, covering either the input
 * (customer/user message) or the output (LLM response) of a Bedrock Converse
 * call.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SpanGuardrailAssessment">AWS
 * API Reference</a></p>
 */
class SpanGuardrailAssessment {
 public:
  AWS_QCONNECT_API SpanGuardrailAssessment() = default;
  AWS_QCONNECT_API SpanGuardrailAssessment(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API SpanGuardrailAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique AI Guardrail identifier.</p>
   */
  inline const Aws::String& GetGuardrailId() const { return m_guardrailId; }
  inline bool GuardrailIdHasBeenSet() const { return m_guardrailIdHasBeenSet; }
  template <typename GuardrailIdT = Aws::String>
  void SetGuardrailId(GuardrailIdT&& value) {
    m_guardrailIdHasBeenSet = true;
    m_guardrailId = std::forward<GuardrailIdT>(value);
  }
  template <typename GuardrailIdT = Aws::String>
  SpanGuardrailAssessment& WithGuardrailId(GuardrailIdT&& value) {
    SetGuardrailId(std::forward<GuardrailIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Customer-defined display name of the AI Guardrail resource.</p>
   */
  inline const Aws::String& GetGuardrailName() const { return m_guardrailName; }
  inline bool GuardrailNameHasBeenSet() const { return m_guardrailNameHasBeenSet; }
  template <typename GuardrailNameT = Aws::String>
  void SetGuardrailName(GuardrailNameT&& value) {
    m_guardrailNameHasBeenSet = true;
    m_guardrailName = std::forward<GuardrailNameT>(value);
  }
  template <typename GuardrailNameT = Aws::String>
  SpanGuardrailAssessment& WithGuardrailName(GuardrailNameT&& value) {
    SetGuardrailName(std::forward<GuardrailNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Content source the guardrail was evaluated against.</p>
   */
  inline GuardrailSource GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  inline void SetSource(GuardrailSource value) {
    m_sourceHasBeenSet = true;
    m_source = value;
  }
  inline SpanGuardrailAssessment& WithSource(GuardrailSource value) {
    SetSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Outcome of the guardrail assessment.</p>
   */
  inline GuardrailAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(GuardrailAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline SpanGuardrailAssessment& WithAction(GuardrailAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-policy assessment results. Absent or empty when action is NONE.</p>
   */
  inline const Aws::Vector<GuardrailPolicyResult>& GetPolicies() const { return m_policies; }
  inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
  template <typename PoliciesT = Aws::Vector<GuardrailPolicyResult>>
  void SetPolicies(PoliciesT&& value) {
    m_policiesHasBeenSet = true;
    m_policies = std::forward<PoliciesT>(value);
  }
  template <typename PoliciesT = Aws::Vector<GuardrailPolicyResult>>
  SpanGuardrailAssessment& WithPolicies(PoliciesT&& value) {
    SetPolicies(std::forward<PoliciesT>(value));
    return *this;
  }
  template <typename PoliciesT = GuardrailPolicyResult>
  SpanGuardrailAssessment& AddPolicies(PoliciesT&& value) {
    m_policiesHasBeenSet = true;
    m_policies.emplace_back(std::forward<PoliciesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_guardrailId;

  Aws::String m_guardrailName;

  GuardrailSource m_source{GuardrailSource::NOT_SET};

  GuardrailAction m_action{GuardrailAction::NOT_SET};

  Aws::Vector<GuardrailPolicyResult> m_policies;
  bool m_guardrailIdHasBeenSet = false;
  bool m_guardrailNameHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_policiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
