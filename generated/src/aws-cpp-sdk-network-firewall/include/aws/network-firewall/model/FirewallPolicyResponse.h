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
    AWS_NETWORKFIREWALL_API FirewallPolicyResponse() = default;
    AWS_NETWORKFIREWALL_API FirewallPolicyResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API FirewallPolicyResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p>
     */
    inline const Aws::String& GetFirewallPolicyName() const { return m_firewallPolicyName; }
    inline bool FirewallPolicyNameHasBeenSet() const { return m_firewallPolicyNameHasBeenSet; }
    template<typename FirewallPolicyNameT = Aws::String>
    void SetFirewallPolicyName(FirewallPolicyNameT&& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = std::forward<FirewallPolicyNameT>(value); }
    template<typename FirewallPolicyNameT = Aws::String>
    FirewallPolicyResponse& WithFirewallPolicyName(FirewallPolicyNameT&& value) { SetFirewallPolicyName(std::forward<FirewallPolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>  <p>If this
     * response is for a create request that had <code>DryRun</code> set to
     * <code>TRUE</code>, then this ARN is a placeholder that isn't attached to a valid
     * resource.</p> 
     */
    inline const Aws::String& GetFirewallPolicyArn() const { return m_firewallPolicyArn; }
    inline bool FirewallPolicyArnHasBeenSet() const { return m_firewallPolicyArnHasBeenSet; }
    template<typename FirewallPolicyArnT = Aws::String>
    void SetFirewallPolicyArn(FirewallPolicyArnT&& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = std::forward<FirewallPolicyArnT>(value); }
    template<typename FirewallPolicyArnT = Aws::String>
    FirewallPolicyResponse& WithFirewallPolicyArn(FirewallPolicyArnT&& value) { SetFirewallPolicyArn(std::forward<FirewallPolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the firewall policy. </p>
     */
    inline const Aws::String& GetFirewallPolicyId() const { return m_firewallPolicyId; }
    inline bool FirewallPolicyIdHasBeenSet() const { return m_firewallPolicyIdHasBeenSet; }
    template<typename FirewallPolicyIdT = Aws::String>
    void SetFirewallPolicyId(FirewallPolicyIdT&& value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId = std::forward<FirewallPolicyIdT>(value); }
    template<typename FirewallPolicyIdT = Aws::String>
    FirewallPolicyResponse& WithFirewallPolicyId(FirewallPolicyIdT&& value) { SetFirewallPolicyId(std::forward<FirewallPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the firewall policy.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    FirewallPolicyResponse& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the firewall policy. You can retrieve this for a
     * firewall policy by calling <a>DescribeFirewallPolicy</a> and providing the
     * firewall policy's name or ARN.</p>
     */
    inline ResourceStatus GetFirewallPolicyStatus() const { return m_firewallPolicyStatus; }
    inline bool FirewallPolicyStatusHasBeenSet() const { return m_firewallPolicyStatusHasBeenSet; }
    inline void SetFirewallPolicyStatus(ResourceStatus value) { m_firewallPolicyStatusHasBeenSet = true; m_firewallPolicyStatus = value; }
    inline FirewallPolicyResponse& WithFirewallPolicyStatus(ResourceStatus value) { SetFirewallPolicyStatus(value); return *this;}
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
    FirewallPolicyResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    FirewallPolicyResponse& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of capacity units currently consumed by the policy's stateless
     * rules.</p>
     */
    inline int GetConsumedStatelessRuleCapacity() const { return m_consumedStatelessRuleCapacity; }
    inline bool ConsumedStatelessRuleCapacityHasBeenSet() const { return m_consumedStatelessRuleCapacityHasBeenSet; }
    inline void SetConsumedStatelessRuleCapacity(int value) { m_consumedStatelessRuleCapacityHasBeenSet = true; m_consumedStatelessRuleCapacity = value; }
    inline FirewallPolicyResponse& WithConsumedStatelessRuleCapacity(int value) { SetConsumedStatelessRuleCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of capacity units currently consumed by the policy's stateful
     * rules.</p>
     */
    inline int GetConsumedStatefulRuleCapacity() const { return m_consumedStatefulRuleCapacity; }
    inline bool ConsumedStatefulRuleCapacityHasBeenSet() const { return m_consumedStatefulRuleCapacityHasBeenSet; }
    inline void SetConsumedStatefulRuleCapacity(int value) { m_consumedStatefulRuleCapacityHasBeenSet = true; m_consumedStatefulRuleCapacity = value; }
    inline FirewallPolicyResponse& WithConsumedStatefulRuleCapacity(int value) { SetConsumedStatefulRuleCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of firewalls that are associated with this firewall policy.</p>
     */
    inline int GetNumberOfAssociations() const { return m_numberOfAssociations; }
    inline bool NumberOfAssociationsHasBeenSet() const { return m_numberOfAssociationsHasBeenSet; }
    inline void SetNumberOfAssociations(int value) { m_numberOfAssociationsHasBeenSet = true; m_numberOfAssociations = value; }
    inline FirewallPolicyResponse& WithNumberOfAssociations(int value) { SetNumberOfAssociations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your firewall policy.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    FirewallPolicyResponse& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the firewall policy was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    FirewallPolicyResponse& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
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

    ResourceStatus m_firewallPolicyStatus{ResourceStatus::NOT_SET};
    bool m_firewallPolicyStatusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_consumedStatelessRuleCapacity{0};
    bool m_consumedStatelessRuleCapacityHasBeenSet = false;

    int m_consumedStatefulRuleCapacity{0};
    bool m_consumedStatefulRuleCapacityHasBeenSet = false;

    int m_numberOfAssociations{0};
    bool m_numberOfAssociationsHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
