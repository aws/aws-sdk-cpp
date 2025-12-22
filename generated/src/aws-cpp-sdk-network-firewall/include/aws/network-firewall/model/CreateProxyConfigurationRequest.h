/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ProxyConfigDefaultRulePhaseActionsRequest.h>
#include <aws/network-firewall/model/Tag.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class CreateProxyConfigurationRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API CreateProxyConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateProxyConfiguration"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The descriptive name of the proxy configuration. You can't change the name of
   * a proxy configuration after you create it.</p>
   */
  inline const Aws::String& GetProxyConfigurationName() const { return m_proxyConfigurationName; }
  inline bool ProxyConfigurationNameHasBeenSet() const { return m_proxyConfigurationNameHasBeenSet; }
  template <typename ProxyConfigurationNameT = Aws::String>
  void SetProxyConfigurationName(ProxyConfigurationNameT&& value) {
    m_proxyConfigurationNameHasBeenSet = true;
    m_proxyConfigurationName = std::forward<ProxyConfigurationNameT>(value);
  }
  template <typename ProxyConfigurationNameT = Aws::String>
  CreateProxyConfigurationRequest& WithProxyConfigurationName(ProxyConfigurationNameT&& value) {
    SetProxyConfigurationName(std::forward<ProxyConfigurationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the proxy configuration. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateProxyConfigurationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The proxy rule group name(s) to attach to the proxy configuration.</p> <p>You
   * must specify the ARNs or the names, and you can specify both. </p>
   */
  inline const Aws::Vector<Aws::String>& GetRuleGroupNames() const { return m_ruleGroupNames; }
  inline bool RuleGroupNamesHasBeenSet() const { return m_ruleGroupNamesHasBeenSet; }
  template <typename RuleGroupNamesT = Aws::Vector<Aws::String>>
  void SetRuleGroupNames(RuleGroupNamesT&& value) {
    m_ruleGroupNamesHasBeenSet = true;
    m_ruleGroupNames = std::forward<RuleGroupNamesT>(value);
  }
  template <typename RuleGroupNamesT = Aws::Vector<Aws::String>>
  CreateProxyConfigurationRequest& WithRuleGroupNames(RuleGroupNamesT&& value) {
    SetRuleGroupNames(std::forward<RuleGroupNamesT>(value));
    return *this;
  }
  template <typename RuleGroupNamesT = Aws::String>
  CreateProxyConfigurationRequest& AddRuleGroupNames(RuleGroupNamesT&& value) {
    m_ruleGroupNamesHasBeenSet = true;
    m_ruleGroupNames.emplace_back(std::forward<RuleGroupNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The proxy rule group arn(s) to attach to the proxy configuration.</p> <p>You
   * must specify the ARNs or the names, and you can specify both. </p>
   */
  inline const Aws::Vector<Aws::String>& GetRuleGroupArns() const { return m_ruleGroupArns; }
  inline bool RuleGroupArnsHasBeenSet() const { return m_ruleGroupArnsHasBeenSet; }
  template <typename RuleGroupArnsT = Aws::Vector<Aws::String>>
  void SetRuleGroupArns(RuleGroupArnsT&& value) {
    m_ruleGroupArnsHasBeenSet = true;
    m_ruleGroupArns = std::forward<RuleGroupArnsT>(value);
  }
  template <typename RuleGroupArnsT = Aws::Vector<Aws::String>>
  CreateProxyConfigurationRequest& WithRuleGroupArns(RuleGroupArnsT&& value) {
    SetRuleGroupArns(std::forward<RuleGroupArnsT>(value));
    return *this;
  }
  template <typename RuleGroupArnsT = Aws::String>
  CreateProxyConfigurationRequest& AddRuleGroupArns(RuleGroupArnsT&& value) {
    m_ruleGroupArnsHasBeenSet = true;
    m_ruleGroupArns.emplace_back(std::forward<RuleGroupArnsT>(value));
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
  CreateProxyConfigurationRequest& WithDefaultRulePhaseActions(DefaultRulePhaseActionsT&& value) {
    SetDefaultRulePhaseActions(std::forward<DefaultRulePhaseActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key:value pairs to associate with the resource.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateProxyConfigurationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateProxyConfigurationRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyConfigurationName;

  Aws::String m_description;

  Aws::Vector<Aws::String> m_ruleGroupNames;

  Aws::Vector<Aws::String> m_ruleGroupArns;

  ProxyConfigDefaultRulePhaseActionsRequest m_defaultRulePhaseActions;

  Aws::Vector<Tag> m_tags;
  bool m_proxyConfigurationNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_ruleGroupNamesHasBeenSet = false;
  bool m_ruleGroupArnsHasBeenSet = false;
  bool m_defaultRulePhaseActionsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
