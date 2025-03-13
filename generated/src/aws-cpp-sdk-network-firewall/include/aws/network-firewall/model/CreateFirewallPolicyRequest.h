/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/FirewallPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/EncryptionConfiguration.h>
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
  class CreateFirewallPolicyRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API CreateFirewallPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFirewallPolicy"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    CreateFirewallPolicyRequest& WithFirewallPolicyName(FirewallPolicyNameT&& value) { SetFirewallPolicyName(std::forward<FirewallPolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule groups and policy actions to use in the firewall policy.</p>
     */
    inline const FirewallPolicy& GetFirewallPolicy() const { return m_firewallPolicy; }
    inline bool FirewallPolicyHasBeenSet() const { return m_firewallPolicyHasBeenSet; }
    template<typename FirewallPolicyT = FirewallPolicy>
    void SetFirewallPolicy(FirewallPolicyT&& value) { m_firewallPolicyHasBeenSet = true; m_firewallPolicy = std::forward<FirewallPolicyT>(value); }
    template<typename FirewallPolicyT = FirewallPolicy>
    CreateFirewallPolicyRequest& WithFirewallPolicy(FirewallPolicyT&& value) { SetFirewallPolicy(std::forward<FirewallPolicyT>(value)); return *this;}
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
    CreateFirewallPolicyRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    CreateFirewallPolicyRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateFirewallPolicyRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    inline CreateFirewallPolicyRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains settings for encryption of your firewall policy
     * resources.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    CreateFirewallPolicyRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_firewallPolicyName;
    bool m_firewallPolicyNameHasBeenSet = false;

    FirewallPolicy m_firewallPolicy;
    bool m_firewallPolicyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
