/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/FirewallPolicyErrorCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>A configuration error that Network Firewall detected for a firewall
 * policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FirewallPolicyError">AWS
 * API Reference</a></p>
 */
class FirewallPolicyError {
 public:
  AWS_NETWORKFIREWALL_API FirewallPolicyError() = default;
  AWS_NETWORKFIREWALL_API FirewallPolicyError(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API FirewallPolicyError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The error code identifies the type of error. Valid values are the
   * following:</p> <ul> <li> <p> <code>DNS_FIREWALL_RULE_GROUP_UNAVAILABLE</code> –
   * The Amazon Route 53 Resolver DNS Firewall rule group that resolved IP validation
   * references is unavailable, for example, because it was deleted or is no longer
   * accessible from your account. Update the rule group ID or remove the resolved IP
   * validation configuration.</p> </li> <li> <p>
   * <code>ROUTE53_RESOLVED_IP_VALIDATION_MISSING</code> – An associated stateful
   * rule group uses the <code>aws_route_53_resolved_domain</code> keyword, but the
   * policy doesn't have resolved IP validation configured. The affected rules are
   * inactive until you add resolved IP validation to the policy or remove the
   * keyword rules.</p> </li> </ul>
   */
  inline FirewallPolicyErrorCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(FirewallPolicyErrorCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline FirewallPolicyError& WithCode(FirewallPolicyErrorCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the error and how to resolve it.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  FirewallPolicyError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the resource that the error relates to, when applicable. For
   * example, for <code>DNS_FIREWALL_RULE_GROUP_UNAVAILABLE</code> this is the Amazon
   * Route 53 Resolver DNS Firewall rule group ID.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  FirewallPolicyError& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}
 private:
  FirewallPolicyErrorCode m_code{FirewallPolicyErrorCode::NOT_SET};

  Aws::String m_message;

  Aws::String m_resourceId;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
