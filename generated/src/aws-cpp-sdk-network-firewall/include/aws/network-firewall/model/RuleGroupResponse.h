/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/RuleGroupType.h>
#include <aws/network-firewall/model/ResourceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/EncryptionConfiguration.h>
#include <aws/network-firewall/model/SourceMetadata.h>
#include <aws/core/utils/DateTime.h>
#include <aws/network-firewall/model/SummaryConfiguration.h>
#include <aws/network-firewall/model/Tag.h>
#include <aws/network-firewall/model/AnalysisResult.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>The high-level properties of a rule group. This, along with the
   * <a>RuleGroup</a>, define the rule group. You can retrieve all objects for a rule
   * group by calling <a>DescribeRuleGroup</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/RuleGroupResponse">AWS
   * API Reference</a></p>
   */
  class RuleGroupResponse
  {
  public:
    AWS_NETWORKFIREWALL_API RuleGroupResponse() = default;
    AWS_NETWORKFIREWALL_API RuleGroupResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API RuleGroupResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline const Aws::String& GetRuleGroupArn() const { return m_ruleGroupArn; }
    inline bool RuleGroupArnHasBeenSet() const { return m_ruleGroupArnHasBeenSet; }
    template<typename RuleGroupArnT = Aws::String>
    void SetRuleGroupArn(RuleGroupArnT&& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = std::forward<RuleGroupArnT>(value); }
    template<typename RuleGroupArnT = Aws::String>
    RuleGroupResponse& WithRuleGroupArn(RuleGroupArnT&& value) { SetRuleGroupArn(std::forward<RuleGroupArnT>(value)); return *this;}
    ///@}

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
    RuleGroupResponse& WithRuleGroupName(RuleGroupNameT&& value) { SetRuleGroupName(std::forward<RuleGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the rule group. </p>
     */
    inline const Aws::String& GetRuleGroupId() const { return m_ruleGroupId; }
    inline bool RuleGroupIdHasBeenSet() const { return m_ruleGroupIdHasBeenSet; }
    template<typename RuleGroupIdT = Aws::String>
    void SetRuleGroupId(RuleGroupIdT&& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = std::forward<RuleGroupIdT>(value); }
    template<typename RuleGroupIdT = Aws::String>
    RuleGroupResponse& WithRuleGroupId(RuleGroupIdT&& value) { SetRuleGroupId(std::forward<RuleGroupIdT>(value)); return *this;}
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
    RuleGroupResponse& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline RuleGroupResponse& WithType(RuleGroupType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum operating resources that this rule group can use. Rule group
     * capacity is fixed at creation. When you update a rule group, you are limited to
     * this capacity. When you reference a rule group from a firewall policy, Network
     * Firewall reserves this capacity for the rule group. </p> <p>You can retrieve the
     * capacity that would be required for a rule group before you create the rule
     * group by calling <a>CreateRuleGroup</a> with <code>DryRun</code> set to
     * <code>TRUE</code>. </p>
     */
    inline int GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(int value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline RuleGroupResponse& WithCapacity(int value) { SetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the current status of a rule group. </p>
     */
    inline ResourceStatus GetRuleGroupStatus() const { return m_ruleGroupStatus; }
    inline bool RuleGroupStatusHasBeenSet() const { return m_ruleGroupStatusHasBeenSet; }
    inline void SetRuleGroupStatus(ResourceStatus value) { m_ruleGroupStatusHasBeenSet = true; m_ruleGroupStatus = value; }
    inline RuleGroupResponse& WithRuleGroupStatus(ResourceStatus value) { SetRuleGroupStatus(value); return *this;}
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
    RuleGroupResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RuleGroupResponse& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of capacity units currently consumed by the rule group rules. </p>
     */
    inline int GetConsumedCapacity() const { return m_consumedCapacity; }
    inline bool ConsumedCapacityHasBeenSet() const { return m_consumedCapacityHasBeenSet; }
    inline void SetConsumedCapacity(int value) { m_consumedCapacityHasBeenSet = true; m_consumedCapacity = value; }
    inline RuleGroupResponse& WithConsumedCapacity(int value) { SetConsumedCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of firewall policies that use this rule group.</p>
     */
    inline int GetNumberOfAssociations() const { return m_numberOfAssociations; }
    inline bool NumberOfAssociationsHasBeenSet() const { return m_numberOfAssociationsHasBeenSet; }
    inline void SetNumberOfAssociations(int value) { m_numberOfAssociationsHasBeenSet = true; m_numberOfAssociations = value; }
    inline RuleGroupResponse& WithNumberOfAssociations(int value) { SetNumberOfAssociations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your rule group.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    RuleGroupResponse& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains metadata about the rule group that your own rule
     * group is copied from. You can use the metadata to track the version updates made
     * to the originating rule group.</p>
     */
    inline const SourceMetadata& GetSourceMetadata() const { return m_sourceMetadata; }
    inline bool SourceMetadataHasBeenSet() const { return m_sourceMetadataHasBeenSet; }
    template<typename SourceMetadataT = SourceMetadata>
    void SetSourceMetadata(SourceMetadataT&& value) { m_sourceMetadataHasBeenSet = true; m_sourceMetadata = std::forward<SourceMetadataT>(value); }
    template<typename SourceMetadataT = SourceMetadata>
    RuleGroupResponse& WithSourceMetadata(SourceMetadataT&& value) { SetSourceMetadata(std::forward<SourceMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide.</a>.</p>
     */
    inline const Aws::String& GetSnsTopic() const { return m_snsTopic; }
    inline bool SnsTopicHasBeenSet() const { return m_snsTopicHasBeenSet; }
    template<typename SnsTopicT = Aws::String>
    void SetSnsTopic(SnsTopicT&& value) { m_snsTopicHasBeenSet = true; m_snsTopic = std::forward<SnsTopicT>(value); }
    template<typename SnsTopicT = Aws::String>
    RuleGroupResponse& WithSnsTopic(SnsTopicT&& value) { SetSnsTopic(std::forward<SnsTopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the rule group was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    RuleGroupResponse& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of analysis results for <code>AnalyzeRuleGroup</code>. If you set
     * <code>AnalyzeRuleGroup</code> to <code>TRUE</code> in <a>CreateRuleGroup</a>,
     * <a>UpdateRuleGroup</a>, or <a>DescribeRuleGroup</a>, Network Firewall analyzes
     * the rule group and identifies the rules that might adversely effect your
     * firewall's functionality. For example, if Network Firewall detects a rule that's
     * routing traffic asymmetrically, which impacts the service's ability to properly
     * process traffic, the service includes the rule in the list of analysis
     * results.</p>
     */
    inline const Aws::Vector<AnalysisResult>& GetAnalysisResults() const { return m_analysisResults; }
    inline bool AnalysisResultsHasBeenSet() const { return m_analysisResultsHasBeenSet; }
    template<typename AnalysisResultsT = Aws::Vector<AnalysisResult>>
    void SetAnalysisResults(AnalysisResultsT&& value) { m_analysisResultsHasBeenSet = true; m_analysisResults = std::forward<AnalysisResultsT>(value); }
    template<typename AnalysisResultsT = Aws::Vector<AnalysisResult>>
    RuleGroupResponse& WithAnalysisResults(AnalysisResultsT&& value) { SetAnalysisResults(std::forward<AnalysisResultsT>(value)); return *this;}
    template<typename AnalysisResultsT = AnalysisResult>
    RuleGroupResponse& AddAnalysisResults(AnalysisResultsT&& value) { m_analysisResultsHasBeenSet = true; m_analysisResults.emplace_back(std::forward<AnalysisResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A complex type containing the currently selected rule option fields that will
     * be displayed for rule summarization returned by
     * <a>DescribeRuleGroupSummary</a>.</p> <ul> <li> <p>The <code>RuleOptions</code>
     * specified in <a>SummaryConfiguration</a> </p> </li> <li> <p>Rule metadata
     * organization preferences</p> </li> </ul>
     */
    inline const SummaryConfiguration& GetSummaryConfiguration() const { return m_summaryConfiguration; }
    inline bool SummaryConfigurationHasBeenSet() const { return m_summaryConfigurationHasBeenSet; }
    template<typename SummaryConfigurationT = SummaryConfiguration>
    void SetSummaryConfiguration(SummaryConfigurationT&& value) { m_summaryConfigurationHasBeenSet = true; m_summaryConfiguration = std::forward<SummaryConfigurationT>(value); }
    template<typename SummaryConfigurationT = SummaryConfiguration>
    RuleGroupResponse& WithSummaryConfiguration(SummaryConfigurationT&& value) { SetSummaryConfiguration(std::forward<SummaryConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleGroupArn;
    bool m_ruleGroupArnHasBeenSet = false;

    Aws::String m_ruleGroupName;
    bool m_ruleGroupNameHasBeenSet = false;

    Aws::String m_ruleGroupId;
    bool m_ruleGroupIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RuleGroupType m_type{RuleGroupType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_capacity{0};
    bool m_capacityHasBeenSet = false;

    ResourceStatus m_ruleGroupStatus{ResourceStatus::NOT_SET};
    bool m_ruleGroupStatusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_consumedCapacity{0};
    bool m_consumedCapacityHasBeenSet = false;

    int m_numberOfAssociations{0};
    bool m_numberOfAssociationsHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    SourceMetadata m_sourceMetadata;
    bool m_sourceMetadataHasBeenSet = false;

    Aws::String m_snsTopic;
    bool m_snsTopicHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Vector<AnalysisResult> m_analysisResults;
    bool m_analysisResultsHasBeenSet = false;

    SummaryConfiguration m_summaryConfiguration;
    bool m_summaryConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
