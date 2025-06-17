/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/RuleGroup.h>
#include <aws/network-firewall/model/RuleGroupType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/EncryptionConfiguration.h>
#include <aws/network-firewall/model/SourceMetadata.h>
#include <aws/network-firewall/model/SummaryConfiguration.h>
#include <aws/network-firewall/model/Tag.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class CreateRuleGroupRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API CreateRuleGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRuleGroup"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline const Aws::String& GetRuleGroupName() const { return m_ruleGroupName; }
    inline bool RuleGroupNameHasBeenSet() const { return m_ruleGroupNameHasBeenSet; }
    template<typename RuleGroupNameT = Aws::String>
    void SetRuleGroupName(RuleGroupNameT&& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = std::forward<RuleGroupNameT>(value); }
    template<typename RuleGroupNameT = Aws::String>
    CreateRuleGroupRequest& WithRuleGroupName(RuleGroupNameT&& value) { SetRuleGroupName(std::forward<RuleGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines the rule group rules. </p>  <p>You must provide
     * either this rule group setting or a <code>Rules</code> setting, but not both.
     * </p> 
     */
    inline const RuleGroup& GetRuleGroup() const { return m_ruleGroup; }
    inline bool RuleGroupHasBeenSet() const { return m_ruleGroupHasBeenSet; }
    template<typename RuleGroupT = RuleGroup>
    void SetRuleGroup(RuleGroupT&& value) { m_ruleGroupHasBeenSet = true; m_ruleGroup = std::forward<RuleGroupT>(value); }
    template<typename RuleGroupT = RuleGroup>
    CreateRuleGroupRequest& WithRuleGroup(RuleGroupT&& value) { SetRuleGroup(std::forward<RuleGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing stateful rule group rules specifications in Suricata flat
     * format, with one rule per line. Use this to import your existing Suricata
     * compatible rule groups. </p>  <p>You must provide either this rules
     * setting or a populated <code>RuleGroup</code> setting, but not both. </p>
     *  <p>You can provide your rule group specification in Suricata flat format
     * through this setting when you create or update your rule group. The call
     * response returns a <a>RuleGroup</a> object that Network Firewall has populated
     * from your string. </p>
     */
    inline const Aws::String& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::String>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::String>
    CreateRuleGroupRequest& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>
     */
    inline RuleGroupType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RuleGroupType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateRuleGroupRequest& WithType(RuleGroupType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the rule group. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateRuleGroupRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum operating resources that this rule group can use. Rule group
     * capacity is fixed at creation. When you update a rule group, you are limited to
     * this capacity. When you reference a rule group from a firewall policy, Network
     * Firewall reserves this capacity for the rule group. </p> <p>You can retrieve the
     * capacity that would be required for a rule group before you create the rule
     * group by calling <a>CreateRuleGroup</a> with <code>DryRun</code> set to
     * <code>TRUE</code>. </p>  <p>You can't change or exceed this capacity when
     * you update the rule group, so leave room for your rule group to grow. </p>
     *  <p> <b>Capacity for a stateless rule group</b> </p> <p>For a stateless
     * rule group, the capacity required is the sum of the capacity requirements of the
     * individual rules that you expect to have in the rule group. </p> <p>To calculate
     * the capacity requirement of a single rule, multiply the capacity requirement
     * values of each of the rule's match settings:</p> <ul> <li> <p>A match setting
     * with no criteria specified has a value of 1. </p> </li> <li> <p>A match setting
     * with <code>Any</code> specified has a value of 1. </p> </li> <li> <p>All other
     * match settings have a value equal to the number of elements provided in the
     * setting. For example, a protocol setting ["UDP"] and a source setting
     * ["10.0.0.0/24"] each have a value of 1. A protocol setting ["UDP","TCP"] has a
     * value of 2. A source setting ["10.0.0.0/24","10.0.0.1/24","10.0.0.2/24"] has a
     * value of 3. </p> </li> </ul> <p>A rule with no criteria specified in any of its
     * match settings has a capacity requirement of 1. A rule with protocol setting
     * ["UDP","TCP"], source setting ["10.0.0.0/24","10.0.0.1/24","10.0.0.2/24"], and a
     * single specification or no specification for each of the other match settings
     * has a capacity requirement of 6. </p> <p> <b>Capacity for a stateful rule
     * group</b> </p> <p>For a stateful rule group, the minimum capacity required is
     * the number of individual rules that you expect to have in the rule group. </p>
     */
    inline int GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(int value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline CreateRuleGroupRequest& WithCapacity(int value) { SetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateRuleGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateRuleGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether you want Network Firewall to just check the validity of the
     * request, rather than run the request. </p> <p>If set to <code>TRUE</code>,
     * Network Firewall checks whether the request can run successfully, but doesn't
     * actually make the requested changes. The call returns the value that the request
     * would return if you ran it with dry run set to <code>FALSE</code>, but doesn't
     * make additions or changes to your resources. This option allows you to make sure
     * that you have the required permissions to run the request and that your request
     * parameters are valid. </p> <p>If set to <code>FALSE</code>, Network Firewall
     * makes the requested changes to your resources. </p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateRuleGroupRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains settings for encryption of your rule group
     * resources.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    CreateRuleGroupRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains metadata about the rule group that your own rule
     * group is copied from. You can use the metadata to keep track of updates made to
     * the originating rule group.</p>
     */
    inline const SourceMetadata& GetSourceMetadata() const { return m_sourceMetadata; }
    inline bool SourceMetadataHasBeenSet() const { return m_sourceMetadataHasBeenSet; }
    template<typename SourceMetadataT = SourceMetadata>
    void SetSourceMetadata(SourceMetadataT&& value) { m_sourceMetadataHasBeenSet = true; m_sourceMetadata = std::forward<SourceMetadataT>(value); }
    template<typename SourceMetadataT = SourceMetadata>
    CreateRuleGroupRequest& WithSourceMetadata(SourceMetadataT&& value) { SetSourceMetadata(std::forward<SourceMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you want Network Firewall to analyze the stateless rules in
     * the rule group for rule behavior such as asymmetric routing. If set to
     * <code>TRUE</code>, Network Firewall runs the analysis and then creates the rule
     * group for you. To run the stateless rule group analyzer without creating the
     * rule group, set <code>DryRun</code> to <code>TRUE</code>.</p>
     */
    inline bool GetAnalyzeRuleGroup() const { return m_analyzeRuleGroup; }
    inline bool AnalyzeRuleGroupHasBeenSet() const { return m_analyzeRuleGroupHasBeenSet; }
    inline void SetAnalyzeRuleGroup(bool value) { m_analyzeRuleGroupHasBeenSet = true; m_analyzeRuleGroup = value; }
    inline CreateRuleGroupRequest& WithAnalyzeRuleGroup(bool value) { SetAnalyzeRuleGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains a <code>RuleOptions</code> array of strings. You use
     * <code>RuleOptions</code> to determine which of the following <a>RuleSummary</a>
     * values are returned in response to <code>DescribeRuleGroupSummary</code>.</p>
     * <ul> <li> <p> <code>Metadata</code> - returns</p> </li> <li> <p>
     * <code>Msg</code> </p> </li> <li> <p> <code>SID</code> </p> </li> </ul>
     */
    inline const SummaryConfiguration& GetSummaryConfiguration() const { return m_summaryConfiguration; }
    inline bool SummaryConfigurationHasBeenSet() const { return m_summaryConfigurationHasBeenSet; }
    template<typename SummaryConfigurationT = SummaryConfiguration>
    void SetSummaryConfiguration(SummaryConfigurationT&& value) { m_summaryConfigurationHasBeenSet = true; m_summaryConfiguration = std::forward<SummaryConfigurationT>(value); }
    template<typename SummaryConfigurationT = SummaryConfiguration>
    CreateRuleGroupRequest& WithSummaryConfiguration(SummaryConfigurationT&& value) { SetSummaryConfiguration(std::forward<SummaryConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleGroupName;
    bool m_ruleGroupNameHasBeenSet = false;

    RuleGroup m_ruleGroup;
    bool m_ruleGroupHasBeenSet = false;

    Aws::String m_rules;
    bool m_rulesHasBeenSet = false;

    RuleGroupType m_type{RuleGroupType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_capacity{0};
    bool m_capacityHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    SourceMetadata m_sourceMetadata;
    bool m_sourceMetadataHasBeenSet = false;

    bool m_analyzeRuleGroup{false};
    bool m_analyzeRuleGroupHasBeenSet = false;

    SummaryConfiguration m_summaryConfiguration;
    bool m_summaryConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
