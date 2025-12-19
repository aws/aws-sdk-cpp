/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ProxyConfigDefaultRulePhaseActionsRequest.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class UpdateProxyConfigurationRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API UpdateProxyConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProxyConfiguration"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The descriptive name of the proxy configuration. You can't change the name of
   * a proxy configuration after you create it.</p> <p>You must specify the ARN or
   * the name, and you can specify both. </p>
   */
  inline const Aws::String& GetProxyConfigurationName() const { return m_proxyConfigurationName; }
  inline bool ProxyConfigurationNameHasBeenSet() const { return m_proxyConfigurationNameHasBeenSet; }
  template <typename ProxyConfigurationNameT = Aws::String>
  void SetProxyConfigurationName(ProxyConfigurationNameT&& value) {
    m_proxyConfigurationNameHasBeenSet = true;
    m_proxyConfigurationName = std::forward<ProxyConfigurationNameT>(value);
  }
  template <typename ProxyConfigurationNameT = Aws::String>
  UpdateProxyConfigurationRequest& WithProxyConfigurationName(ProxyConfigurationNameT&& value) {
    SetProxyConfigurationName(std::forward<ProxyConfigurationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of a proxy configuration.</p> <p>You must
   * specify the ARN or the name, and you can specify both. </p>
   */
  inline const Aws::String& GetProxyConfigurationArn() const { return m_proxyConfigurationArn; }
  inline bool ProxyConfigurationArnHasBeenSet() const { return m_proxyConfigurationArnHasBeenSet; }
  template <typename ProxyConfigurationArnT = Aws::String>
  void SetProxyConfigurationArn(ProxyConfigurationArnT&& value) {
    m_proxyConfigurationArnHasBeenSet = true;
    m_proxyConfigurationArn = std::forward<ProxyConfigurationArnT>(value);
  }
  template <typename ProxyConfigurationArnT = Aws::String>
  UpdateProxyConfigurationRequest& WithProxyConfigurationArn(ProxyConfigurationArnT&& value) {
    SetProxyConfigurationArn(std::forward<ProxyConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Evaluation points in the traffic flow where rules are applied. There are
   * three phases in a traffic where the rule match is applied. </p>
   */
  inline const ProxyConfigDefaultRulePhaseActionsRequest& GetDefaultRulePhaseActions() const { return m_defaultRulePhaseActions; }
  inline bool DefaultRulePhaseActionsHasBeenSet() const { return m_defaultRulePhaseActionsHasBeenSet; }
  template <typename DefaultRulePhaseActionsT = ProxyConfigDefaultRulePhaseActionsRequest>
  void SetDefaultRulePhaseActions(DefaultRulePhaseActionsT&& value) {
    m_defaultRulePhaseActionsHasBeenSet = true;
    m_defaultRulePhaseActions = std::forward<DefaultRulePhaseActionsT>(value);
  }
  template <typename DefaultRulePhaseActionsT = ProxyConfigDefaultRulePhaseActionsRequest>
  UpdateProxyConfigurationRequest& WithDefaultRulePhaseActions(DefaultRulePhaseActionsT&& value) {
    SetDefaultRulePhaseActions(std::forward<DefaultRulePhaseActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for optimistic locking. Network Firewall returns a token to your
   * requests that access the proxy configuration. The token marks the state of the
   * proxy configuration resource at the time of the request. </p> <p>To make changes
   * to the proxy configuration, you provide the token in your request. Network
   * Firewall uses the token to ensure that the proxy configuration hasn't changed
   * since you last retrieved it. If it has changed, the operation fails with an
   * <code>InvalidTokenException</code>. If this happens, retrieve the proxy
   * configuration again to get a current copy of it with a current token. Reapply
   * your changes as needed, then try the operation again using the new token. </p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  UpdateProxyConfigurationRequest& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyConfigurationName;

  Aws::String m_proxyConfigurationArn;

  ProxyConfigDefaultRulePhaseActionsRequest m_defaultRulePhaseActions;

  Aws::String m_updateToken;
  bool m_proxyConfigurationNameHasBeenSet = false;
  bool m_proxyConfigurationArnHasBeenSet = false;
  bool m_defaultRulePhaseActionsHasBeenSet = false;
  bool m_updateTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
