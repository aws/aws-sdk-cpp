/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/EncryptionConfiguration.h>
#include <aws/network-firewall/model/FirewallPolicyError.h>
#include <aws/network-firewall/model/ResourceStatus.h>
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
 * <p>The high-level properties of a Next Generation policy. This includes the
 * policy's identity, status, consumed capacity, and association count. Network
 * Firewall returns this object in response to the Next Generation policy
 * operations. To retrieve the policy's rule groups and settings, use the
 * <code>FirewallPolicyV2</code> object.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FirewallPolicyV2Response">AWS
 * API Reference</a></p>
 */
class FirewallPolicyV2Response {
 public:
  AWS_NETWORKFIREWALL_API FirewallPolicyV2Response() = default;
  AWS_NETWORKFIREWALL_API FirewallPolicyV2Response(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API FirewallPolicyV2Response& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  FirewallPolicyV2Response& WithFirewallPolicyV2Name(FirewallPolicyV2NameT&& value) {
    SetFirewallPolicyV2Name(std::forward<FirewallPolicyV2NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Next Generation policy.</p>
   */
  inline const Aws::String& GetFirewallPolicyV2Arn() const { return m_firewallPolicyV2Arn; }
  inline bool FirewallPolicyV2ArnHasBeenSet() const { return m_firewallPolicyV2ArnHasBeenSet; }
  template <typename FirewallPolicyV2ArnT = Aws::String>
  void SetFirewallPolicyV2Arn(FirewallPolicyV2ArnT&& value) {
    m_firewallPolicyV2ArnHasBeenSet = true;
    m_firewallPolicyV2Arn = std::forward<FirewallPolicyV2ArnT>(value);
  }
  template <typename FirewallPolicyV2ArnT = Aws::String>
  FirewallPolicyV2Response& WithFirewallPolicyV2Arn(FirewallPolicyV2ArnT&& value) {
    SetFirewallPolicyV2Arn(std::forward<FirewallPolicyV2ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Next Generation policy. Network Firewall assigns
   * this identifier when you create the policy.</p>
   */
  inline const Aws::String& GetFirewallPolicyV2Id() const { return m_firewallPolicyV2Id; }
  inline bool FirewallPolicyV2IdHasBeenSet() const { return m_firewallPolicyV2IdHasBeenSet; }
  template <typename FirewallPolicyV2IdT = Aws::String>
  void SetFirewallPolicyV2Id(FirewallPolicyV2IdT&& value) {
    m_firewallPolicyV2IdHasBeenSet = true;
    m_firewallPolicyV2Id = std::forward<FirewallPolicyV2IdT>(value);
  }
  template <typename FirewallPolicyV2IdT = Aws::String>
  FirewallPolicyV2Response& WithFirewallPolicyV2Id(FirewallPolicyV2IdT&& value) {
    SetFirewallPolicyV2Id(std::forward<FirewallPolicyV2IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the Next Generation policy.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  FirewallPolicyV2Response& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the Next Generation policy. A policy must be in the
   * <code>ACTIVE</code> state before you can use it in a firewall.</p>
   */
  inline ResourceStatus GetFirewallPolicyV2Status() const { return m_firewallPolicyV2Status; }
  inline bool FirewallPolicyV2StatusHasBeenSet() const { return m_firewallPolicyV2StatusHasBeenSet; }
  inline void SetFirewallPolicyV2Status(ResourceStatus value) {
    m_firewallPolicyV2StatusHasBeenSet = true;
    m_firewallPolicyV2Status = value;
  }
  inline FirewallPolicyV2Response& WithFirewallPolicyV2Status(ResourceStatus value) {
    SetFirewallPolicyV2Status(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the current status of the Next Generation
   * policy.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  FirewallPolicyV2Response& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key-value tag pairs that are associated with the Next Generation
   * policy.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  FirewallPolicyV2Response& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  FirewallPolicyV2Response& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of firewall engine rule capacity units that the policy's firewall
   * section currently consumes.</p>
   */
  inline int GetConsumedFirewallRuleCapacity() const { return m_consumedFirewallRuleCapacity; }
  inline bool ConsumedFirewallRuleCapacityHasBeenSet() const { return m_consumedFirewallRuleCapacityHasBeenSet; }
  inline void SetConsumedFirewallRuleCapacity(int value) {
    m_consumedFirewallRuleCapacityHasBeenSet = true;
    m_consumedFirewallRuleCapacity = value;
  }
  inline FirewallPolicyV2Response& WithConsumedFirewallRuleCapacity(int value) {
    SetConsumedFirewallRuleCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of IPS engine rule capacity units that the policy's IPS section
   * currently consumes.</p>
   */
  inline int GetConsumedIpsRuleCapacity() const { return m_consumedIpsRuleCapacity; }
  inline bool ConsumedIpsRuleCapacityHasBeenSet() const { return m_consumedIpsRuleCapacityHasBeenSet; }
  inline void SetConsumedIpsRuleCapacity(int value) {
    m_consumedIpsRuleCapacityHasBeenSet = true;
    m_consumedIpsRuleCapacity = value;
  }
  inline FirewallPolicyV2Response& WithConsumedIpsRuleCapacity(int value) {
    SetConsumedIpsRuleCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of IPS domain list capacity units that the policy's IPS section
   * currently consumes.</p>
   */
  inline int GetConsumedIpsDomainCapacity() const { return m_consumedIpsDomainCapacity; }
  inline bool ConsumedIpsDomainCapacityHasBeenSet() const { return m_consumedIpsDomainCapacityHasBeenSet; }
  inline void SetConsumedIpsDomainCapacity(int value) {
    m_consumedIpsDomainCapacityHasBeenSet = true;
    m_consumedIpsDomainCapacity = value;
  }
  inline FirewallPolicyV2Response& WithConsumedIpsDomainCapacity(int value) {
    SetConsumedIpsDomainCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of firewalls that are associated with the Next Generation
   * policy.</p>
   */
  inline int GetNumberOfAssociations() const { return m_numberOfAssociations; }
  inline bool NumberOfAssociationsHasBeenSet() const { return m_numberOfAssociationsHasBeenSet; }
  inline void SetNumberOfAssociations(int value) {
    m_numberOfAssociationsHasBeenSet = true;
    m_numberOfAssociations = value;
  }
  inline FirewallPolicyV2Response& WithNumberOfAssociations(int value) {
    SetNumberOfAssociations(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A complex type that contains the Amazon Web Services KMS encryption
   * configuration settings for your Next Generation policy.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  FirewallPolicyV2Response& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Any configuration errors that apply to the Next Generation policy. Network
   * Firewall detects these errors asynchronously, after you create or update the
   * policy, so an error can appear after the request that caused it has already
   * succeeded. Each entry describes the problem and how to resolve it, and Network
   * Firewall clears it automatically after you resolve the problem.</p>
   */
  inline const Aws::Vector<FirewallPolicyError>& GetErrors() const { return m_errors; }
  inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
  template <typename ErrorsT = Aws::Vector<FirewallPolicyError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<FirewallPolicyError>>
  FirewallPolicyV2Response& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = FirewallPolicyError>
  FirewallPolicyV2Response& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last time that the Next Generation policy was changed.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  FirewallPolicyV2Response& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_firewallPolicyV2Name;

  Aws::String m_firewallPolicyV2Arn;

  Aws::String m_firewallPolicyV2Id;

  Aws::String m_description;

  ResourceStatus m_firewallPolicyV2Status{ResourceStatus::NOT_SET};

  Aws::String m_statusMessage;

  Aws::Vector<Tag> m_tags;

  int m_consumedFirewallRuleCapacity{0};

  int m_consumedIpsRuleCapacity{0};

  int m_consumedIpsDomainCapacity{0};

  int m_numberOfAssociations{0};

  EncryptionConfiguration m_encryptionConfiguration;

  Aws::Vector<FirewallPolicyError> m_errors;

  Aws::Utils::DateTime m_lastModifiedTime{};
  bool m_firewallPolicyV2NameHasBeenSet = false;
  bool m_firewallPolicyV2ArnHasBeenSet = false;
  bool m_firewallPolicyV2IdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_firewallPolicyV2StatusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_consumedFirewallRuleCapacityHasBeenSet = false;
  bool m_consumedIpsRuleCapacityHasBeenSet = false;
  bool m_consumedIpsDomainCapacityHasBeenSet = false;
  bool m_numberOfAssociationsHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
