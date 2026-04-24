/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ProxyRulesByRequestPhase.h>
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
 * <p>Collections of related proxy filtering rules. Rule groups help you manage and
 * reuse sets of rules across multiple proxy configurations. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ProxyRuleGroup">AWS
 * API Reference</a></p>
 */
class ProxyRuleGroup {
 public:
  AWS_NETWORKFIREWALL_API ProxyRuleGroup() = default;
  AWS_NETWORKFIREWALL_API ProxyRuleGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API ProxyRuleGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ProxyRuleGroup& WithProxyRuleGroupName(ProxyRuleGroupNameT&& value) {
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
  ProxyRuleGroup& WithProxyRuleGroupArn(ProxyRuleGroupArnT&& value) {
    SetProxyRuleGroupArn(std::forward<ProxyRuleGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time the Proxy Rule Group was created. </p>
   */
  inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
  inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  void SetCreateTime(CreateTimeT&& value) {
    m_createTimeHasBeenSet = true;
    m_createTime = std::forward<CreateTimeT>(value);
  }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  ProxyRuleGroup& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time the Proxy Rule Group was deleted. </p>
   */
  inline const Aws::Utils::DateTime& GetDeleteTime() const { return m_deleteTime; }
  inline bool DeleteTimeHasBeenSet() const { return m_deleteTimeHasBeenSet; }
  template <typename DeleteTimeT = Aws::Utils::DateTime>
  void SetDeleteTime(DeleteTimeT&& value) {
    m_deleteTimeHasBeenSet = true;
    m_deleteTime = std::forward<DeleteTimeT>(value);
  }
  template <typename DeleteTimeT = Aws::Utils::DateTime>
  ProxyRuleGroup& WithDeleteTime(DeleteTimeT&& value) {
    SetDeleteTime(std::forward<DeleteTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Individual rules that define match conditions and actions for
   * application-layer traffic. Rules specify what to inspect (domains, headers,
   * methods) and what action to take (allow, deny, alert). </p>
   */
  inline const ProxyRulesByRequestPhase& GetRules() const { return m_rules; }
  inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
  template <typename RulesT = ProxyRulesByRequestPhase>
  void SetRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules = std::forward<RulesT>(value);
  }
  template <typename RulesT = ProxyRulesByRequestPhase>
  ProxyRuleGroup& WithRules(RulesT&& value) {
    SetRules(std::forward<RulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the proxy rule group. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ProxyRuleGroup& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
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
  ProxyRuleGroup& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  ProxyRuleGroup& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyRuleGroupName;

  Aws::String m_proxyRuleGroupArn;

  Aws::Utils::DateTime m_createTime{};

  Aws::Utils::DateTime m_deleteTime{};

  ProxyRulesByRequestPhase m_rules;

  Aws::String m_description;

  Aws::Vector<Tag> m_tags;
  bool m_proxyRuleGroupNameHasBeenSet = false;
  bool m_proxyRuleGroupArnHasBeenSet = false;
  bool m_createTimeHasBeenSet = false;
  bool m_deleteTimeHasBeenSet = false;
  bool m_rulesHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
