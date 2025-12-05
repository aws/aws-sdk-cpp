/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ProxyConfigDefaultRulePhaseActionsRequest.h>
#include <aws/network-firewall/model/ProxyConfigRuleGroup.h>
#include <aws/network-firewall/model/Tag.h>

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
 * <p>A Proxy Configuration defines the monitoring and protection behavior for a
 * Proxy. The details of the behavior are defined in the rule groups that you add
 * to your configuration. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ProxyConfiguration">AWS
 * API Reference</a></p>
 */
class ProxyConfiguration {
 public:
  AWS_NETWORKFIREWALL_API ProxyConfiguration() = default;
  AWS_NETWORKFIREWALL_API ProxyConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API ProxyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  ProxyConfiguration& WithProxyConfigurationName(ProxyConfigurationNameT&& value) {
    SetProxyConfigurationName(std::forward<ProxyConfigurationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of a proxy configuration.</p>
   */
  inline const Aws::String& GetProxyConfigurationArn() const { return m_proxyConfigurationArn; }
  inline bool ProxyConfigurationArnHasBeenSet() const { return m_proxyConfigurationArnHasBeenSet; }
  template <typename ProxyConfigurationArnT = Aws::String>
  void SetProxyConfigurationArn(ProxyConfigurationArnT&& value) {
    m_proxyConfigurationArnHasBeenSet = true;
    m_proxyConfigurationArn = std::forward<ProxyConfigurationArnT>(value);
  }
  template <typename ProxyConfigurationArnT = Aws::String>
  ProxyConfiguration& WithProxyConfigurationArn(ProxyConfigurationArnT&& value) {
    SetProxyConfigurationArn(std::forward<ProxyConfigurationArnT>(value));
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
  ProxyConfiguration& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time the Proxy Configuration was created. </p>
   */
  inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
  inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  void SetCreateTime(CreateTimeT&& value) {
    m_createTimeHasBeenSet = true;
    m_createTime = std::forward<CreateTimeT>(value);
  }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  ProxyConfiguration& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time the Proxy Configuration was deleted. </p>
   */
  inline const Aws::Utils::DateTime& GetDeleteTime() const { return m_deleteTime; }
  inline bool DeleteTimeHasBeenSet() const { return m_deleteTimeHasBeenSet; }
  template <typename DeleteTimeT = Aws::Utils::DateTime>
  void SetDeleteTime(DeleteTimeT&& value) {
    m_deleteTimeHasBeenSet = true;
    m_deleteTime = std::forward<DeleteTimeT>(value);
  }
  template <typename DeleteTimeT = Aws::Utils::DateTime>
  ProxyConfiguration& WithDeleteTime(DeleteTimeT&& value) {
    SetDeleteTime(std::forward<DeleteTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Proxy rule groups within the proxy configuration. </p>
   */
  inline const Aws::Vector<ProxyConfigRuleGroup>& GetRuleGroups() const { return m_ruleGroups; }
  inline bool RuleGroupsHasBeenSet() const { return m_ruleGroupsHasBeenSet; }
  template <typename RuleGroupsT = Aws::Vector<ProxyConfigRuleGroup>>
  void SetRuleGroups(RuleGroupsT&& value) {
    m_ruleGroupsHasBeenSet = true;
    m_ruleGroups = std::forward<RuleGroupsT>(value);
  }
  template <typename RuleGroupsT = Aws::Vector<ProxyConfigRuleGroup>>
  ProxyConfiguration& WithRuleGroups(RuleGroupsT&& value) {
    SetRuleGroups(std::forward<RuleGroupsT>(value));
    return *this;
  }
  template <typename RuleGroupsT = ProxyConfigRuleGroup>
  ProxyConfiguration& AddRuleGroups(RuleGroupsT&& value) {
    m_ruleGroupsHasBeenSet = true;
    m_ruleGroups.emplace_back(std::forward<RuleGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Evaluation points in the traffic flow where rules are applied. There are
   * three phases in a traffic where the rule match is applied. </p> <p>Pre-DNS -
   * before domain resolution.</p> <p>Pre-Request - after DNS, before request.</p>
   * <p>Post-Response - after receiving response.</p>
   */
  inline const ProxyConfigDefaultRulePhaseActionsRequest& GetDefaultRulePhaseActions() const { return m_defaultRulePhaseActions; }
  inline bool DefaultRulePhaseActionsHasBeenSet() const { return m_defaultRulePhaseActionsHasBeenSet; }
  template <typename DefaultRulePhaseActionsT = ProxyConfigDefaultRulePhaseActionsRequest>
  void SetDefaultRulePhaseActions(DefaultRulePhaseActionsT&& value) {
    m_defaultRulePhaseActionsHasBeenSet = true;
    m_defaultRulePhaseActions = std::forward<DefaultRulePhaseActionsT>(value);
  }
  template <typename DefaultRulePhaseActionsT = ProxyConfigDefaultRulePhaseActionsRequest>
  ProxyConfiguration& WithDefaultRulePhaseActions(DefaultRulePhaseActionsT&& value) {
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
  ProxyConfiguration& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  ProxyConfiguration& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyConfigurationName;

  Aws::String m_proxyConfigurationArn;

  Aws::String m_description;

  Aws::Utils::DateTime m_createTime{};

  Aws::Utils::DateTime m_deleteTime{};

  Aws::Vector<ProxyConfigRuleGroup> m_ruleGroups;

  ProxyConfigDefaultRulePhaseActionsRequest m_defaultRulePhaseActions;

  Aws::Vector<Tag> m_tags;
  bool m_proxyConfigurationNameHasBeenSet = false;
  bool m_proxyConfigurationArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createTimeHasBeenSet = false;
  bool m_deleteTimeHasBeenSet = false;
  bool m_ruleGroupsHasBeenSet = false;
  bool m_defaultRulePhaseActionsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
