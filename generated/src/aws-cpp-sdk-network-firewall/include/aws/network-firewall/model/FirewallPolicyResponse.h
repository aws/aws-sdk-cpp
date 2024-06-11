/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/ResourceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/EncryptionConfiguration.h>
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
   * <p>The high-level properties of a firewall policy. This, along with the
   * <a>FirewallPolicy</a>, define the policy. You can retrieve all objects for a
   * firewall policy by calling <a>DescribeFirewallPolicy</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FirewallPolicyResponse">AWS
   * API Reference</a></p>
   */
  class FirewallPolicyResponse
  {
  public:
    AWS_NETWORKFIREWALL_API FirewallPolicyResponse();
    AWS_NETWORKFIREWALL_API FirewallPolicyResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API FirewallPolicyResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline const Aws::String& GetFirewallPolicyName() const{ return m_firewallPolicyName; }
    inline bool FirewallPolicyNameHasBeenSet() const { return m_firewallPolicyNameHasBeenSet; }
    inline void SetFirewallPolicyName(const Aws::String& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = value; }
    inline void SetFirewallPolicyName(Aws::String&& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = std::move(value); }
    inline void SetFirewallPolicyName(const char* value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName.assign(value); }
    inline FirewallPolicyResponse& WithFirewallPolicyName(const Aws::String& value) { SetFirewallPolicyName(value); return *this;}
    inline FirewallPolicyResponse& WithFirewallPolicyName(Aws::String&& value) { SetFirewallPolicyName(std::move(value)); return *this;}
    inline FirewallPolicyResponse& WithFirewallPolicyName(const char* value) { SetFirewallPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline const Aws::String& GetFirewallPolicyArn() const{ return m_firewallPolicyArn; }
    inline bool FirewallPolicyArnHasBeenSet() const { return m_firewallPolicyArnHasBeenSet; }
    inline void SetFirewallPolicyArn(const Aws::String& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = value; }
    inline void SetFirewallPolicyArn(Aws::String&& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = std::move(value); }
    inline void SetFirewallPolicyArn(const char* value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn.assign(value); }
    inline FirewallPolicyResponse& WithFirewallPolicyArn(const Aws::String& value) { SetFirewallPolicyArn(value); return *this;}
    inline FirewallPolicyResponse& WithFirewallPolicyArn(Aws::String&& value) { SetFirewallPolicyArn(std::move(value)); return *this;}
    inline FirewallPolicyResponse& WithFirewallPolicyArn(const char* value) { SetFirewallPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the firewall policy. </p>
     */
    inline const Aws::String& GetFirewallPolicyId() const{ return m_firewallPolicyId; }
    inline bool FirewallPolicyIdHasBeenSet() const { return m_firewallPolicyIdHasBeenSet; }
    inline void SetFirewallPolicyId(const Aws::String& value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId = value; }
    inline void SetFirewallPolicyId(Aws::String&& value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId = std::move(value); }
    inline void SetFirewallPolicyId(const char* value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId.assign(value); }
    inline FirewallPolicyResponse& WithFirewallPolicyId(const Aws::String& value) { SetFirewallPolicyId(value); return *this;}
    inline FirewallPolicyResponse& WithFirewallPolicyId(Aws::String&& value) { SetFirewallPolicyId(std::move(value)); return *this;}
    inline FirewallPolicyResponse& WithFirewallPolicyId(const char* value) { SetFirewallPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the firewall policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline FirewallPolicyResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline FirewallPolicyResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline FirewallPolicyResponse& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the firewall policy. You can retrieve this for a
     * firewall policy by calling <a>DescribeFirewallPolicy</a> and providing the
     * firewall policy's name or ARN.</p>
     */
    inline const ResourceStatus& GetFirewallPolicyStatus() const{ return m_firewallPolicyStatus; }
    inline bool FirewallPolicyStatusHasBeenSet() const { return m_firewallPolicyStatusHasBeenSet; }
    inline void SetFirewallPolicyStatus(const ResourceStatus& value) { m_firewallPolicyStatusHasBeenSet = true; m_firewallPolicyStatus = value; }
    inline void SetFirewallPolicyStatus(ResourceStatus&& value) { m_firewallPolicyStatusHasBeenSet = true; m_firewallPolicyStatus = std::move(value); }
    inline FirewallPolicyResponse& WithFirewallPolicyStatus(const ResourceStatus& value) { SetFirewallPolicyStatus(value); return *this;}
    inline FirewallPolicyResponse& WithFirewallPolicyStatus(ResourceStatus&& value) { SetFirewallPolicyStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline FirewallPolicyResponse& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline FirewallPolicyResponse& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline FirewallPolicyResponse& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline FirewallPolicyResponse& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of capacity units currently consumed by the policy's stateless
     * rules.</p>
     */
    inline int GetConsumedStatelessRuleCapacity() const{ return m_consumedStatelessRuleCapacity; }
    inline bool ConsumedStatelessRuleCapacityHasBeenSet() const { return m_consumedStatelessRuleCapacityHasBeenSet; }
    inline void SetConsumedStatelessRuleCapacity(int value) { m_consumedStatelessRuleCapacityHasBeenSet = true; m_consumedStatelessRuleCapacity = value; }
    inline FirewallPolicyResponse& WithConsumedStatelessRuleCapacity(int value) { SetConsumedStatelessRuleCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of capacity units currently consumed by the policy's stateful
     * rules.</p>
     */
    inline int GetConsumedStatefulRuleCapacity() const{ return m_consumedStatefulRuleCapacity; }
    inline bool ConsumedStatefulRuleCapacityHasBeenSet() const { return m_consumedStatefulRuleCapacityHasBeenSet; }
    inline void SetConsumedStatefulRuleCapacity(int value) { m_consumedStatefulRuleCapacityHasBeenSet = true; m_consumedStatefulRuleCapacity = value; }
    inline FirewallPolicyResponse& WithConsumedStatefulRuleCapacity(int value) { SetConsumedStatefulRuleCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of firewalls that are associated with this firewall policy.</p>
     */
    inline int GetNumberOfAssociations() const{ return m_numberOfAssociations; }
    inline bool NumberOfAssociationsHasBeenSet() const { return m_numberOfAssociationsHasBeenSet; }
    inline void SetNumberOfAssociations(int value) { m_numberOfAssociationsHasBeenSet = true; m_numberOfAssociations = value; }
    inline FirewallPolicyResponse& WithNumberOfAssociations(int value) { SetNumberOfAssociations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your firewall policy.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }
    inline FirewallPolicyResponse& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline FirewallPolicyResponse& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the firewall policy was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline FirewallPolicyResponse& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline FirewallPolicyResponse& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_firewallPolicyName;
    bool m_firewallPolicyNameHasBeenSet = false;

    Aws::String m_firewallPolicyArn;
    bool m_firewallPolicyArnHasBeenSet = false;

    Aws::String m_firewallPolicyId;
    bool m_firewallPolicyIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ResourceStatus m_firewallPolicyStatus;
    bool m_firewallPolicyStatusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_consumedStatelessRuleCapacity;
    bool m_consumedStatelessRuleCapacityHasBeenSet = false;

    int m_consumedStatefulRuleCapacity;
    bool m_consumedStatefulRuleCapacityHasBeenSet = false;

    int m_numberOfAssociations;
    bool m_numberOfAssociationsHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
