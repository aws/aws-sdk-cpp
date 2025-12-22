/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/SecurityGroupSettings.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Represents a security group in a Wickr network, containing membership
 * statistics, configuration, and all permission settings that apply to its
 * members.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/SecurityGroup">AWS
 * API Reference</a></p>
 */
class SecurityGroup {
 public:
  AWS_WICKR_API SecurityGroup() = default;
  AWS_WICKR_API SecurityGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API SecurityGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of active user members currently in the security group.</p>
   */
  inline int GetActiveMembers() const { return m_activeMembers; }
  inline bool ActiveMembersHasBeenSet() const { return m_activeMembersHasBeenSet; }
  inline void SetActiveMembers(int value) {
    m_activeMembersHasBeenSet = true;
    m_activeMembers = value;
  }
  inline SecurityGroup& WithActiveMembers(int value) {
    SetActiveMembers(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of bot members currently in the security group.</p>
   */
  inline int GetBotMembers() const { return m_botMembers; }
  inline bool BotMembersHasBeenSet() const { return m_botMembersHasBeenSet; }
  inline void SetBotMembers(int value) {
    m_botMembersHasBeenSet = true;
    m_botMembers = value;
  }
  inline SecurityGroup& WithBotMembers(int value) {
    SetBotMembers(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The GUID of the Active Directory group associated with this security group,
   * if synchronized with LDAP.</p>
   */
  inline const Aws::String& GetActiveDirectoryGuid() const { return m_activeDirectoryGuid; }
  inline bool ActiveDirectoryGuidHasBeenSet() const { return m_activeDirectoryGuidHasBeenSet; }
  template <typename ActiveDirectoryGuidT = Aws::String>
  void SetActiveDirectoryGuid(ActiveDirectoryGuidT&& value) {
    m_activeDirectoryGuidHasBeenSet = true;
    m_activeDirectoryGuid = std::forward<ActiveDirectoryGuidT>(value);
  }
  template <typename ActiveDirectoryGuidT = Aws::String>
  SecurityGroup& WithActiveDirectoryGuid(ActiveDirectoryGuidT&& value) {
    SetActiveDirectoryGuid(std::forward<ActiveDirectoryGuidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the security group.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  SecurityGroup& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this is the default security group for the network. Each
   * network has only one default group.</p>
   */
  inline bool GetIsDefault() const { return m_isDefault; }
  inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
  inline void SetIsDefault(bool value) {
    m_isDefaultHasBeenSet = true;
    m_isDefault = value;
  }
  inline SecurityGroup& WithIsDefault(bool value) {
    SetIsDefault(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the security group.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SecurityGroup& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the security group was last modified, specified in epoch
   * seconds.</p>
   */
  inline int GetModified() const { return m_modified; }
  inline bool ModifiedHasBeenSet() const { return m_modifiedHasBeenSet; }
  inline void SetModified(int value) {
    m_modifiedHasBeenSet = true;
    m_modified = value;
  }
  inline SecurityGroup& WithModified(int value) {
    SetModified(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comprehensive configuration settings that define capabilities and
   * restrictions for members of this security group.</p>
   */
  inline const SecurityGroupSettings& GetSecurityGroupSettings() const { return m_securityGroupSettings; }
  inline bool SecurityGroupSettingsHasBeenSet() const { return m_securityGroupSettingsHasBeenSet; }
  template <typename SecurityGroupSettingsT = SecurityGroupSettings>
  void SetSecurityGroupSettings(SecurityGroupSettingsT&& value) {
    m_securityGroupSettingsHasBeenSet = true;
    m_securityGroupSettings = std::forward<SecurityGroupSettingsT>(value);
  }
  template <typename SecurityGroupSettingsT = SecurityGroupSettings>
  SecurityGroup& WithSecurityGroupSettings(SecurityGroupSettingsT&& value) {
    SetSecurityGroupSettings(std::forward<SecurityGroupSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_activeMembers{0};

  int m_botMembers{0};

  Aws::String m_activeDirectoryGuid;

  Aws::String m_id;

  bool m_isDefault{false};

  Aws::String m_name;

  int m_modified{0};

  SecurityGroupSettings m_securityGroupSettings;
  bool m_activeMembersHasBeenSet = false;
  bool m_botMembersHasBeenSet = false;
  bool m_activeDirectoryGuidHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_isDefaultHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_modifiedHasBeenSet = false;
  bool m_securityGroupSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
