/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/BedrockGuardrailsRequestAndResponse.h>
#include <aws/wafv2/model/BedrockGuardrailsRequestOnly.h>
#include <aws/wafv2/model/DisableBedrockGuardrails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>Specifies whether the AI security managed rule group,
 * <code>AWSManagedRulesAISecurityRuleSet</code>, uses Amazon Bedrock Guardrails to
 * inspect web requests, or web requests and responses. </p> <p>Specify exactly one
 * of the following settings: <code>Disable</code>,
 * <code>ProtectRequestOnly</code>, or <code>ProtectRequestAndResponse</code>.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/BedrockGuardrails">AWS
 * API Reference</a></p>
 */
class BedrockGuardrails {
 public:
  AWS_WAFV2_API BedrockGuardrails() = default;
  AWS_WAFV2_API BedrockGuardrails(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API BedrockGuardrails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Turns off the use of Amazon Bedrock Guardrails. The rule group continues to
   * run its own inspections. </p> <p>JSON specification: <code>"Disable": {}</code>
   * </p>
   */
  inline const DisableBedrockGuardrails& GetDisable() const { return m_disable; }
  inline bool DisableHasBeenSet() const { return m_disableHasBeenSet; }
  template <typename DisableT = DisableBedrockGuardrails>
  void SetDisable(DisableT&& value) {
    m_disableHasBeenSet = true;
    m_disable = std::forward<DisableT>(value);
  }
  template <typename DisableT = DisableBedrockGuardrails>
  BedrockGuardrails& WithDisable(DisableT&& value) {
    SetDisable(std::forward<DisableT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Uses Amazon Bedrock Guardrails to inspect web requests. </p>
   */
  inline const BedrockGuardrailsRequestOnly& GetProtectRequestOnly() const { return m_protectRequestOnly; }
  inline bool ProtectRequestOnlyHasBeenSet() const { return m_protectRequestOnlyHasBeenSet; }
  template <typename ProtectRequestOnlyT = BedrockGuardrailsRequestOnly>
  void SetProtectRequestOnly(ProtectRequestOnlyT&& value) {
    m_protectRequestOnlyHasBeenSet = true;
    m_protectRequestOnly = std::forward<ProtectRequestOnlyT>(value);
  }
  template <typename ProtectRequestOnlyT = BedrockGuardrailsRequestOnly>
  BedrockGuardrails& WithProtectRequestOnly(ProtectRequestOnlyT&& value) {
    SetProtectRequestOnly(std::forward<ProtectRequestOnlyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Uses Amazon Bedrock Guardrails to inspect web requests and the responses to
   * them. </p>
   */
  inline const BedrockGuardrailsRequestAndResponse& GetProtectRequestAndResponse() const { return m_protectRequestAndResponse; }
  inline bool ProtectRequestAndResponseHasBeenSet() const { return m_protectRequestAndResponseHasBeenSet; }
  template <typename ProtectRequestAndResponseT = BedrockGuardrailsRequestAndResponse>
  void SetProtectRequestAndResponse(ProtectRequestAndResponseT&& value) {
    m_protectRequestAndResponseHasBeenSet = true;
    m_protectRequestAndResponse = std::forward<ProtectRequestAndResponseT>(value);
  }
  template <typename ProtectRequestAndResponseT = BedrockGuardrailsRequestAndResponse>
  BedrockGuardrails& WithProtectRequestAndResponse(ProtectRequestAndResponseT&& value) {
    SetProtectRequestAndResponse(std::forward<ProtectRequestAndResponseT>(value));
    return *this;
  }
  ///@}
 private:
  DisableBedrockGuardrails m_disable;

  BedrockGuardrailsRequestOnly m_protectRequestOnly;

  BedrockGuardrailsRequestAndResponse m_protectRequestAndResponse;
  bool m_disableHasBeenSet = false;
  bool m_protectRequestOnlyHasBeenSet = false;
  bool m_protectRequestAndResponseHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
