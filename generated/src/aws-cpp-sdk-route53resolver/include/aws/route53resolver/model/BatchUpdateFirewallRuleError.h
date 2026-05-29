/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/UpdateFirewallRuleEntry.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53Resolver {
namespace Model {

/**
 * <p>An error that occurred while updating a firewall rule in a batch
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/BatchUpdateFirewallRuleError">AWS
 * API Reference</a></p>
 */
class BatchUpdateFirewallRuleError {
 public:
  AWS_ROUTE53RESOLVER_API BatchUpdateFirewallRuleError() = default;
  AWS_ROUTE53RESOLVER_API BatchUpdateFirewallRuleError(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API BatchUpdateFirewallRuleError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The firewall rule entry that caused the error.</p>
   */
  inline const UpdateFirewallRuleEntry& GetFirewallRule() const { return m_firewallRule; }
  inline bool FirewallRuleHasBeenSet() const { return m_firewallRuleHasBeenSet; }
  template <typename FirewallRuleT = UpdateFirewallRuleEntry>
  void SetFirewallRule(FirewallRuleT&& value) {
    m_firewallRuleHasBeenSet = true;
    m_firewallRule = std::forward<FirewallRuleT>(value);
  }
  template <typename FirewallRuleT = UpdateFirewallRuleEntry>
  BatchUpdateFirewallRuleError& WithFirewallRule(FirewallRuleT&& value) {
    SetFirewallRule(std::forward<FirewallRuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code for the failure.</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  BatchUpdateFirewallRuleError& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message that provides details about the error.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchUpdateFirewallRuleError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateFirewallRuleEntry m_firewallRule;

  Aws::String m_code;

  Aws::String m_message;
  bool m_firewallRuleHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
