/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/GuardrailAction.h>
#include <aws/qconnect/model/GuardrailPolicyType.h>

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
 * <p>Per-policy guardrail assessment result. Captures which policy triggered, its
 * outcome, and a policy-specific detail string.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GuardrailPolicyResult">AWS
 * API Reference</a></p>
 */
class GuardrailPolicyResult {
 public:
  AWS_QCONNECT_API GuardrailPolicyResult() = default;
  AWS_QCONNECT_API GuardrailPolicyResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API GuardrailPolicyResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of guardrail policy that was evaluated.</p>
   */
  inline GuardrailPolicyType GetPolicyType() const { return m_policyType; }
  inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
  inline void SetPolicyType(GuardrailPolicyType value) {
    m_policyTypeHasBeenSet = true;
    m_policyType = value;
  }
  inline GuardrailPolicyResult& WithPolicyType(GuardrailPolicyType value) {
    SetPolicyType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Outcome of this specific policy.</p>
   */
  inline GuardrailAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(GuardrailAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline GuardrailPolicyResult& WithAction(GuardrailAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Policy-specific detail.</p>
   */
  inline const Aws::String& GetDetails() const { return m_details; }
  inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
  template <typename DetailsT = Aws::String>
  void SetDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details = std::forward<DetailsT>(value);
  }
  template <typename DetailsT = Aws::String>
  GuardrailPolicyResult& WithDetails(DetailsT&& value) {
    SetDetails(std::forward<DetailsT>(value));
    return *this;
  }
  ///@}
 private:
  GuardrailPolicyType m_policyType{GuardrailPolicyType::NOT_SET};

  GuardrailAction m_action{GuardrailAction::NOT_SET};

  Aws::String m_details;
  bool m_policyTypeHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_detailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
