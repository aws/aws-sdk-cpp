/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

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
 * <p>Configures the AI security managed rule group to use Amazon Bedrock
 * Guardrails to inspect web requests. </p> <p>This is used in the
 * <code>BedrockGuardrails</code> setting of
 * <code>AWSManagedRulesAISecurityRuleSet</code>. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/BedrockGuardrailsRequestOnly">AWS
 * API Reference</a></p>
 */
class BedrockGuardrailsRequestOnly {
 public:
  AWS_WAFV2_API BedrockGuardrailsRequestOnly() = default;
  AWS_WAFV2_API BedrockGuardrailsRequestOnly(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API BedrockGuardrailsRequestOnly& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that WAF uses to call Amazon
   * Bedrock Guardrails for the rule group. The role must be in the same Amazon Web
   * Services account as the web ACL. </p> <p>To specify the role, you must have
   * permission to call <code>iam:PassRole</code> on it, to pass it to the WAF
   * service principal <code>wafv2.amazonaws.com</code>. </p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  BedrockGuardrailsRequestOnly& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_roleArn;
  bool m_roleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
