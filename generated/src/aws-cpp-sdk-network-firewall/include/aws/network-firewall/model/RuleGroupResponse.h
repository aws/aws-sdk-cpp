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
#include <aws/network-firewall/model/Tag.h>
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
    AWS_NETWORKFIREWALL_API RuleGroupResponse();
    AWS_NETWORKFIREWALL_API RuleGroupResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API RuleGroupResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline const Aws::String& GetRuleGroupArn() const{ return m_ruleGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline bool RuleGroupArnHasBeenSet() const { return m_ruleGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline void SetRuleGroupArn(const Aws::String& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline void SetRuleGroupArn(Aws::String&& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline void SetRuleGroupArn(const char* value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline RuleGroupResponse& WithRuleGroupArn(const Aws::String& value) { SetRuleGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline RuleGroupResponse& WithRuleGroupArn(Aws::String&& value) { SetRuleGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline RuleGroupResponse& WithRuleGroupArn(const char* value) { SetRuleGroupArn(value); return *this;}


    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline const Aws::String& GetRuleGroupName() const{ return m_ruleGroupName; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline bool RuleGroupNameHasBeenSet() const { return m_ruleGroupNameHasBeenSet; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline void SetRuleGroupName(const Aws::String& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = value; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline void SetRuleGroupName(Aws::String&& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = std::move(value); }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline void SetRuleGroupName(const char* value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName.assign(value); }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline RuleGroupResponse& WithRuleGroupName(const Aws::String& value) { SetRuleGroupName(value); return *this;}

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline RuleGroupResponse& WithRuleGroupName(Aws::String&& value) { SetRuleGroupName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p>
     */
    inline RuleGroupResponse& WithRuleGroupName(const char* value) { SetRuleGroupName(value); return *this;}


    /**
     * <p>The unique identifier for the rule group. </p>
     */
    inline const Aws::String& GetRuleGroupId() const{ return m_ruleGroupId; }

    /**
     * <p>The unique identifier for the rule group. </p>
     */
    inline bool RuleGroupIdHasBeenSet() const { return m_ruleGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier for the rule group. </p>
     */
    inline void SetRuleGroupId(const Aws::String& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = value; }

    /**
     * <p>The unique identifier for the rule group. </p>
     */
    inline void SetRuleGroupId(Aws::String&& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = std::move(value); }

    /**
     * <p>The unique identifier for the rule group. </p>
     */
    inline void SetRuleGroupId(const char* value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId.assign(value); }

    /**
     * <p>The unique identifier for the rule group. </p>
     */
    inline RuleGroupResponse& WithRuleGroupId(const Aws::String& value) { SetRuleGroupId(value); return *this;}

    /**
     * <p>The unique identifier for the rule group. </p>
     */
    inline RuleGroupResponse& WithRuleGroupId(Aws::String&& value) { SetRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the rule group. </p>
     */
    inline RuleGroupResponse& WithRuleGroupId(const char* value) { SetRuleGroupId(value); return *this;}


    /**
     * <p>A description of the rule group. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the rule group. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the rule group. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the rule group. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the rule group. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the rule group. </p>
     */
    inline RuleGroupResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the rule group. </p>
     */
    inline RuleGroupResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the rule group. </p>
     */
    inline RuleGroupResponse& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>
     */
    inline const RuleGroupType& GetType() const{ return m_type; }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>
     */
    inline void SetType(const RuleGroupType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>
     */
    inline void SetType(RuleGroupType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>
     */
    inline RuleGroupResponse& WithType(const RuleGroupType& value) { SetType(value); return *this;}

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>
     */
    inline RuleGroupResponse& WithType(RuleGroupType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The maximum operating resources that this rule group can use. Rule group
     * capacity is fixed at creation. When you update a rule group, you are limited to
     * this capacity. When you reference a rule group from a firewall policy, Network
     * Firewall reserves this capacity for the rule group. </p> <p>You can retrieve the
     * capacity that would be required for a rule group before you create the rule
     * group by calling <a>CreateRuleGroup</a> with <code>DryRun</code> set to
     * <code>TRUE</code>. </p>
     */
    inline int GetCapacity() const{ return m_capacity; }

    /**
     * <p>The maximum operating resources that this rule group can use. Rule group
     * capacity is fixed at creation. When you update a rule group, you are limited to
     * this capacity. When you reference a rule group from a firewall policy, Network
     * Firewall reserves this capacity for the rule group. </p> <p>You can retrieve the
     * capacity that would be required for a rule group before you create the rule
     * group by calling <a>CreateRuleGroup</a> with <code>DryRun</code> set to
     * <code>TRUE</code>. </p>
     */
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }

    /**
     * <p>The maximum operating resources that this rule group can use. Rule group
     * capacity is fixed at creation. When you update a rule group, you are limited to
     * this capacity. When you reference a rule group from a firewall policy, Network
     * Firewall reserves this capacity for the rule group. </p> <p>You can retrieve the
     * capacity that would be required for a rule group before you create the rule
     * group by calling <a>CreateRuleGroup</a> with <code>DryRun</code> set to
     * <code>TRUE</code>. </p>
     */
    inline void SetCapacity(int value) { m_capacityHasBeenSet = true; m_capacity = value; }

    /**
     * <p>The maximum operating resources that this rule group can use. Rule group
     * capacity is fixed at creation. When you update a rule group, you are limited to
     * this capacity. When you reference a rule group from a firewall policy, Network
     * Firewall reserves this capacity for the rule group. </p> <p>You can retrieve the
     * capacity that would be required for a rule group before you create the rule
     * group by calling <a>CreateRuleGroup</a> with <code>DryRun</code> set to
     * <code>TRUE</code>. </p>
     */
    inline RuleGroupResponse& WithCapacity(int value) { SetCapacity(value); return *this;}


    /**
     * <p>Detailed information about the current status of a rule group. </p>
     */
    inline const ResourceStatus& GetRuleGroupStatus() const{ return m_ruleGroupStatus; }

    /**
     * <p>Detailed information about the current status of a rule group. </p>
     */
    inline bool RuleGroupStatusHasBeenSet() const { return m_ruleGroupStatusHasBeenSet; }

    /**
     * <p>Detailed information about the current status of a rule group. </p>
     */
    inline void SetRuleGroupStatus(const ResourceStatus& value) { m_ruleGroupStatusHasBeenSet = true; m_ruleGroupStatus = value; }

    /**
     * <p>Detailed information about the current status of a rule group. </p>
     */
    inline void SetRuleGroupStatus(ResourceStatus&& value) { m_ruleGroupStatusHasBeenSet = true; m_ruleGroupStatus = std::move(value); }

    /**
     * <p>Detailed information about the current status of a rule group. </p>
     */
    inline RuleGroupResponse& WithRuleGroupStatus(const ResourceStatus& value) { SetRuleGroupStatus(value); return *this;}

    /**
     * <p>Detailed information about the current status of a rule group. </p>
     */
    inline RuleGroupResponse& WithRuleGroupStatus(ResourceStatus&& value) { SetRuleGroupStatus(std::move(value)); return *this;}


    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline RuleGroupResponse& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline RuleGroupResponse& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline RuleGroupResponse& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline RuleGroupResponse& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of capacity units currently consumed by the rule group rules. </p>
     */
    inline int GetConsumedCapacity() const{ return m_consumedCapacity; }

    /**
     * <p>The number of capacity units currently consumed by the rule group rules. </p>
     */
    inline bool ConsumedCapacityHasBeenSet() const { return m_consumedCapacityHasBeenSet; }

    /**
     * <p>The number of capacity units currently consumed by the rule group rules. </p>
     */
    inline void SetConsumedCapacity(int value) { m_consumedCapacityHasBeenSet = true; m_consumedCapacity = value; }

    /**
     * <p>The number of capacity units currently consumed by the rule group rules. </p>
     */
    inline RuleGroupResponse& WithConsumedCapacity(int value) { SetConsumedCapacity(value); return *this;}


    /**
     * <p>The number of firewall policies that use this rule group.</p>
     */
    inline int GetNumberOfAssociations() const{ return m_numberOfAssociations; }

    /**
     * <p>The number of firewall policies that use this rule group.</p>
     */
    inline bool NumberOfAssociationsHasBeenSet() const { return m_numberOfAssociationsHasBeenSet; }

    /**
     * <p>The number of firewall policies that use this rule group.</p>
     */
    inline void SetNumberOfAssociations(int value) { m_numberOfAssociationsHasBeenSet = true; m_numberOfAssociations = value; }

    /**
     * <p>The number of firewall policies that use this rule group.</p>
     */
    inline RuleGroupResponse& WithNumberOfAssociations(int value) { SetNumberOfAssociations(value); return *this;}


    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your rule group.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your rule group.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your rule group.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your rule group.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your rule group.</p>
     */
    inline RuleGroupResponse& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your rule group.</p>
     */
    inline RuleGroupResponse& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains metadata about the rule group that your own rule
     * group is copied from. You can use the metadata to track the version updates made
     * to the originating rule group.</p>
     */
    inline const SourceMetadata& GetSourceMetadata() const{ return m_sourceMetadata; }

    /**
     * <p>A complex type that contains metadata about the rule group that your own rule
     * group is copied from. You can use the metadata to track the version updates made
     * to the originating rule group.</p>
     */
    inline bool SourceMetadataHasBeenSet() const { return m_sourceMetadataHasBeenSet; }

    /**
     * <p>A complex type that contains metadata about the rule group that your own rule
     * group is copied from. You can use the metadata to track the version updates made
     * to the originating rule group.</p>
     */
    inline void SetSourceMetadata(const SourceMetadata& value) { m_sourceMetadataHasBeenSet = true; m_sourceMetadata = value; }

    /**
     * <p>A complex type that contains metadata about the rule group that your own rule
     * group is copied from. You can use the metadata to track the version updates made
     * to the originating rule group.</p>
     */
    inline void SetSourceMetadata(SourceMetadata&& value) { m_sourceMetadataHasBeenSet = true; m_sourceMetadata = std::move(value); }

    /**
     * <p>A complex type that contains metadata about the rule group that your own rule
     * group is copied from. You can use the metadata to track the version updates made
     * to the originating rule group.</p>
     */
    inline RuleGroupResponse& WithSourceMetadata(const SourceMetadata& value) { SetSourceMetadata(value); return *this;}

    /**
     * <p>A complex type that contains metadata about the rule group that your own rule
     * group is copied from. You can use the metadata to track the version updates made
     * to the originating rule group.</p>
     */
    inline RuleGroupResponse& WithSourceMetadata(SourceMetadata&& value) { SetSourceMetadata(std::move(value)); return *this;}


    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide.</a>.</p>
     */
    inline const Aws::String& GetSnsTopic() const{ return m_snsTopic; }

    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide.</a>.</p>
     */
    inline bool SnsTopicHasBeenSet() const { return m_snsTopicHasBeenSet; }

    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide.</a>.</p>
     */
    inline void SetSnsTopic(const Aws::String& value) { m_snsTopicHasBeenSet = true; m_snsTopic = value; }

    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide.</a>.</p>
     */
    inline void SetSnsTopic(Aws::String&& value) { m_snsTopicHasBeenSet = true; m_snsTopic = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide.</a>.</p>
     */
    inline void SetSnsTopic(const char* value) { m_snsTopicHasBeenSet = true; m_snsTopic.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide.</a>.</p>
     */
    inline RuleGroupResponse& WithSnsTopic(const Aws::String& value) { SetSnsTopic(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide.</a>.</p>
     */
    inline RuleGroupResponse& WithSnsTopic(Aws::String&& value) { SetSnsTopic(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide.</a>.</p>
     */
    inline RuleGroupResponse& WithSnsTopic(const char* value) { SetSnsTopic(value); return *this;}


    /**
     * <p>The last time that the rule group was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last time that the rule group was changed.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The last time that the rule group was changed.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The last time that the rule group was changed.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last time that the rule group was changed.</p>
     */
    inline RuleGroupResponse& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last time that the rule group was changed.</p>
     */
    inline RuleGroupResponse& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_ruleGroupArn;
    bool m_ruleGroupArnHasBeenSet = false;

    Aws::String m_ruleGroupName;
    bool m_ruleGroupNameHasBeenSet = false;

    Aws::String m_ruleGroupId;
    bool m_ruleGroupIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RuleGroupType m_type;
    bool m_typeHasBeenSet = false;

    int m_capacity;
    bool m_capacityHasBeenSet = false;

    ResourceStatus m_ruleGroupStatus;
    bool m_ruleGroupStatusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_consumedCapacity;
    bool m_consumedCapacityHasBeenSet = false;

    int m_numberOfAssociations;
    bool m_numberOfAssociationsHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    SourceMetadata m_sourceMetadata;
    bool m_sourceMetadataHasBeenSet = false;

    Aws::String m_snsTopic;
    bool m_snsTopicHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
