/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>

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
 * <p>Turns off the use of Amazon Bedrock Guardrails in the AI security managed
 * rule group. The rule group continues to run its own inspections. </p> <p>This is
 * used in the <code>BedrockGuardrails</code> setting of
 * <code>AWSManagedRulesAISecurityRuleSet</code>. </p> <p>JSON specification:
 * <code>"Disable": {}</code> </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DisableBedrockGuardrails">AWS
 * API Reference</a></p>
 */
class DisableBedrockGuardrails {
 public:
  AWS_WAFV2_API DisableBedrockGuardrails() = default;
  AWS_WAFV2_API DisableBedrockGuardrails(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API DisableBedrockGuardrails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
