/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

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
 * <p>Proxy rule group contained within a proxy configuration. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ProxyConfigRuleGroup">AWS
 * API Reference</a></p>
 */
class ProxyConfigRuleGroup {
 public:
  AWS_NETWORKFIREWALL_API ProxyConfigRuleGroup() = default;
  AWS_NETWORKFIREWALL_API ProxyConfigRuleGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API ProxyConfigRuleGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The descriptive name of the proxy rule group. You can't change the name of a
   * proxy rule group after you create it.</p>
   */
  inline const Aws::String& GetProxyRuleGroupName() const { return m_proxyRuleGroupName; }
  inline bool ProxyRuleGroupNameHasBeenSet() const { return m_proxyRuleGroupNameHasBeenSet; }
  template <typename ProxyRuleGroupNameT = Aws::String>
  void SetProxyRuleGroupName(ProxyRuleGroupNameT&& value) {
    m_proxyRuleGroupNameHasBeenSet = true;
    m_proxyRuleGroupName = std::forward<ProxyRuleGroupNameT>(value);
  }
  template <typename ProxyRuleGroupNameT = Aws::String>
  ProxyConfigRuleGroup& WithProxyRuleGroupName(ProxyRuleGroupNameT&& value) {
    SetProxyRuleGroupName(std::forward<ProxyRuleGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of a proxy rule group.</p>
   */
  inline const Aws::String& GetProxyRuleGroupArn() const { return m_proxyRuleGroupArn; }
  inline bool ProxyRuleGroupArnHasBeenSet() const { return m_proxyRuleGroupArnHasBeenSet; }
  template <typename ProxyRuleGroupArnT = Aws::String>
  void SetProxyRuleGroupArn(ProxyRuleGroupArnT&& value) {
    m_proxyRuleGroupArnHasBeenSet = true;
    m_proxyRuleGroupArn = std::forward<ProxyRuleGroupArnT>(value);
  }
  template <typename ProxyRuleGroupArnT = Aws::String>
  ProxyConfigRuleGroup& WithProxyRuleGroupArn(ProxyRuleGroupArnT&& value) {
    SetProxyRuleGroupArn(std::forward<ProxyRuleGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Proxy rule group type. </p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  ProxyConfigRuleGroup& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Priority of the proxy rule group in the proxy configuration. </p>
   */
  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline ProxyConfigRuleGroup& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyRuleGroupName;
  bool m_proxyRuleGroupNameHasBeenSet = false;

  Aws::String m_proxyRuleGroupArn;
  bool m_proxyRuleGroupArnHasBeenSet = false;

  Aws::String m_type;
  bool m_typeHasBeenSet = false;

  int m_priority{0};
  bool m_priorityHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
