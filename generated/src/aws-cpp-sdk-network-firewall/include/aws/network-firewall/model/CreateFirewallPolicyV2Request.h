/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/EncryptionConfiguration.h>
#include <aws/network-firewall/model/FirewallPolicyV2.h>
#include <aws/network-firewall/model/Tag.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class CreateFirewallPolicyV2Request : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API CreateFirewallPolicyV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateFirewallPolicyV2"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The descriptive name of the Next Generation policy. You can't change the name
   * of a firewall policy after you create it.</p>
   */
  inline const Aws::String& GetFirewallPolicyV2Name() const { return m_firewallPolicyV2Name; }
  inline bool FirewallPolicyV2NameHasBeenSet() const { return m_firewallPolicyV2NameHasBeenSet; }
  template <typename FirewallPolicyV2NameT = Aws::String>
  void SetFirewallPolicyV2Name(FirewallPolicyV2NameT&& value) {
    m_firewallPolicyV2NameHasBeenSet = true;
    m_firewallPolicyV2Name = std::forward<FirewallPolicyV2NameT>(value);
  }
  template <typename FirewallPolicyV2NameT = Aws::String>
  CreateFirewallPolicyV2Request& WithFirewallPolicyV2Name(FirewallPolicyV2NameT&& value) {
    SetFirewallPolicyV2Name(std::forward<FirewallPolicyV2NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rule groups and other settings that define the Next Generation
   * policy.</p>
   */
  inline const FirewallPolicyV2& GetFirewallPolicyV2() const { return m_firewallPolicyV2; }
  inline bool FirewallPolicyV2HasBeenSet() const { return m_firewallPolicyV2HasBeenSet; }
  template <typename FirewallPolicyV2T = FirewallPolicyV2>
  void SetFirewallPolicyV2(FirewallPolicyV2T&& value) {
    m_firewallPolicyV2HasBeenSet = true;
    m_firewallPolicyV2 = std::forward<FirewallPolicyV2T>(value);
  }
  template <typename FirewallPolicyV2T = FirewallPolicyV2>
  CreateFirewallPolicyV2Request& WithFirewallPolicyV2(FirewallPolicyV2T&& value) {
    SetFirewallPolicyV2(std::forward<FirewallPolicyV2T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the firewall policy.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateFirewallPolicyV2Request& WithDescription(DescriptionT&& value) {
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
  CreateFirewallPolicyV2Request& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateFirewallPolicyV2Request& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
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
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline CreateFirewallPolicyV2Request& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A complex type that contains settings for encryption of your firewall policy
   * resources.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  CreateFirewallPolicyV2Request& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_firewallPolicyV2Name;

  FirewallPolicyV2 m_firewallPolicyV2;

  Aws::String m_description;

  Aws::Vector<Tag> m_tags;

  bool m_dryRun{false};

  EncryptionConfiguration m_encryptionConfiguration;
  bool m_firewallPolicyV2NameHasBeenSet = false;
  bool m_firewallPolicyV2HasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
