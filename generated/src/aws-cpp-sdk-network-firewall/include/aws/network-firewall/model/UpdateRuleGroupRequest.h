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
#include <aws/network-firewall/model/EncryptionConfiguration.h>
#include <aws/network-firewall/model/SourceMetadata.h>
#include <aws/network-firewall/model/SummaryConfiguration.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class UpdateRuleGroupRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API UpdateRuleGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRuleGroup"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
    inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
    template<typename UpdateTokenT = Aws::String>
    void SetUpdateToken(UpdateTokenT&& value) { m_updateTokenHasBeenSet = true; m_updateToken = std::forward<UpdateTokenT>(value); }
    template<typename UpdateTokenT = Aws::String>
    UpdateRuleGroupRequest& WithUpdateToken(UpdateTokenT&& value) { SetUpdateToken(std::forward<UpdateTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline const Aws::String& GetRuleGroupArn() const { return m_ruleGroupArn; }
    inline bool RuleGroupArnHasBeenSet() const { return m_ruleGroupArnHasBeenSet; }
    template<typename RuleGroupArnT = Aws::String>
    void SetRuleGroupArn(RuleGroupArnT&& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = std::forward<RuleGroupArnT>(value); }
    template<typename RuleGroupArnT = Aws::String>
    UpdateRuleGroupRequest& WithRuleGroupArn(RuleGroupArnT&& value) { SetRuleGroupArn(std::forward<RuleGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline const Aws::String& GetRuleGroupName() const { return m_ruleGroupName; }
    inline bool RuleGroupNameHasBeenSet() const { return m_ruleGroupNameHasBeenSet; }
    template<typename RuleGroupNameT = Aws::String>
    void SetRuleGroupName(RuleGroupNameT&& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = std::forward<RuleGroupNameT>(value); }
    template<typename RuleGroupNameT = Aws::String>
    UpdateRuleGroupRequest& WithRuleGroupName(RuleGroupNameT&& value) { SetRuleGroupName(std::forward<RuleGroupNameT>(value)); return *this;}
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
    UpdateRuleGroupRequest& WithRuleGroup(RuleGroupT&& value) { SetRuleGroup(std::forward<RuleGroupT>(value)); return *this;}
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
    UpdateRuleGroupRequest& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline RuleGroupType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RuleGroupType value) { m_typeHasBeenSet = true; m_type = value; }
    inline UpdateRuleGroupRequest& WithType(RuleGroupType value) { SetType(value); return *this;}
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
    UpdateRuleGroupRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline UpdateRuleGroupRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
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
    UpdateRuleGroupRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
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
    UpdateRuleGroupRequest& WithSourceMetadata(SourceMetadataT&& value) { SetSourceMetadata(std::forward<SourceMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you want Network Firewall to analyze the stateless rules in
     * the rule group for rule behavior such as asymmetric routing. If set to
     * <code>TRUE</code>, Network Firewall runs the analysis and then updates the rule
     * group for you. To run the stateless rule group analyzer without updating the
     * rule group, set <code>DryRun</code> to <code>TRUE</code>. </p>
     */
    inline bool GetAnalyzeRuleGroup() const { return m_analyzeRuleGroup; }
    inline bool AnalyzeRuleGroupHasBeenSet() const { return m_analyzeRuleGroupHasBeenSet; }
    inline void SetAnalyzeRuleGroup(bool value) { m_analyzeRuleGroupHasBeenSet = true; m_analyzeRuleGroup = value; }
    inline UpdateRuleGroupRequest& WithAnalyzeRuleGroup(bool value) { SetAnalyzeRuleGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the selected summary configuration for a rule group.</p> <p>Changes
     * affect subsequent responses from <a>DescribeRuleGroupSummary</a>.</p>
     */
    inline const SummaryConfiguration& GetSummaryConfiguration() const { return m_summaryConfiguration; }
    inline bool SummaryConfigurationHasBeenSet() const { return m_summaryConfigurationHasBeenSet; }
    template<typename SummaryConfigurationT = SummaryConfiguration>
    void SetSummaryConfiguration(SummaryConfigurationT&& value) { m_summaryConfigurationHasBeenSet = true; m_summaryConfiguration = std::forward<SummaryConfigurationT>(value); }
    template<typename SummaryConfigurationT = SummaryConfiguration>
    UpdateRuleGroupRequest& WithSummaryConfiguration(SummaryConfigurationT&& value) { SetSummaryConfiguration(std::forward<SummaryConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet = false;

    Aws::String m_ruleGroupArn;
    bool m_ruleGroupArnHasBeenSet = false;

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
