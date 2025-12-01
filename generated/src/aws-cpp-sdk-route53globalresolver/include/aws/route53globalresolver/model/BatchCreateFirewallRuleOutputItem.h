/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/BatchCreateFirewallRuleResult.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {

/**
 * <p>Information about the result of creating a DNS Firewall rule in a batch
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/BatchCreateFirewallRuleOutputItem">AWS
 * API Reference</a></p>
 */
class BatchCreateFirewallRuleOutputItem {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API BatchCreateFirewallRuleOutputItem() = default;
  AWS_ROUTE53GLOBALRESOLVER_API BatchCreateFirewallRuleOutputItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API BatchCreateFirewallRuleOutputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The firewall rule that was created in the batch operation.</p>
   */
  inline const BatchCreateFirewallRuleResult& GetFirewallRule() const { return m_firewallRule; }
  inline bool FirewallRuleHasBeenSet() const { return m_firewallRuleHasBeenSet; }
  template <typename FirewallRuleT = BatchCreateFirewallRuleResult>
  void SetFirewallRule(FirewallRuleT&& value) {
    m_firewallRuleHasBeenSet = true;
    m_firewallRule = std::forward<FirewallRuleT>(value);
  }
  template <typename FirewallRuleT = BatchCreateFirewallRuleResult>
  BatchCreateFirewallRuleOutputItem& WithFirewallRule(FirewallRuleT&& value) {
    SetFirewallRule(std::forward<FirewallRuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP response code for the batch operation result.</p>
   */
  inline int GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(int value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline BatchCreateFirewallRuleOutputItem& WithCode(int value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing the result of the batch operation, including error
   * details if applicable.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchCreateFirewallRuleOutputItem& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  BatchCreateFirewallRuleResult m_firewallRule;
  bool m_firewallRuleHasBeenSet = false;

  int m_code{0};
  bool m_codeHasBeenSet = false;

  Aws::String m_message;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
