/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/NotificationSetting.h>
#include <aws/rolesanywhere/model/Source.h>
#include <aws/rolesanywhere/model/Tag.h>

#include <utility>

namespace Aws {
namespace RolesAnywhere {
namespace Model {

/**
 */
class CreateTrustAnchorRequest : public RolesAnywhereRequest {
 public:
  AWS_ROLESANYWHERE_API CreateTrustAnchorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTrustAnchor"; }

  AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the trust anchor.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateTrustAnchorRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trust anchor type and its related certificate data.</p>
   */
  inline const Source& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = Source>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = Source>
  CreateTrustAnchorRequest& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the trust anchor is enabled.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline CreateTrustAnchorRequest& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the trust anchor checks certificate revocation status
   * against CRL distribution points.</p>
   */
  inline bool GetCrlDpRevocationEnabled() const { return m_crlDpRevocationEnabled; }
  inline bool CrlDpRevocationEnabledHasBeenSet() const { return m_crlDpRevocationEnabledHasBeenSet; }
  inline void SetCrlDpRevocationEnabled(bool value) {
    m_crlDpRevocationEnabledHasBeenSet = true;
    m_crlDpRevocationEnabled = value;
  }
  inline CreateTrustAnchorRequest& WithCrlDpRevocationEnabled(bool value) {
    SetCrlDpRevocationEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to attach to the trust anchor.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateTrustAnchorRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateTrustAnchorRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of notification settings to be associated to the trust anchor.</p>
   */
  inline const Aws::Vector<NotificationSetting>& GetNotificationSettings() const { return m_notificationSettings; }
  inline bool NotificationSettingsHasBeenSet() const { return m_notificationSettingsHasBeenSet; }
  template <typename NotificationSettingsT = Aws::Vector<NotificationSetting>>
  void SetNotificationSettings(NotificationSettingsT&& value) {
    m_notificationSettingsHasBeenSet = true;
    m_notificationSettings = std::forward<NotificationSettingsT>(value);
  }
  template <typename NotificationSettingsT = Aws::Vector<NotificationSetting>>
  CreateTrustAnchorRequest& WithNotificationSettings(NotificationSettingsT&& value) {
    SetNotificationSettings(std::forward<NotificationSettingsT>(value));
    return *this;
  }
  template <typename NotificationSettingsT = NotificationSetting>
  CreateTrustAnchorRequest& AddNotificationSettings(NotificationSettingsT&& value) {
    m_notificationSettingsHasBeenSet = true;
    m_notificationSettings.emplace_back(std::forward<NotificationSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An alias for the trust anchor. When you set an alias, the response includes
   * the alias ARN of the trust anchor in <code>aliasArn</code>.</p> <p>An alias name
   * contains 1 to 256 characters. It must begin with a letter (A-Z or a-z). It can
   * contain only letters (A-Z and a-z), numbers (0-9), underscores (_), hyphens (-),
   * and forward slashes (/). A forward slash can appear only between two other
   * characters, so an alias name can't end with a forward slash or contain two in a
   * row. Alias names that begin with <code>aws/</code>, in any combination of
   * uppercase and lowercase letters, are reserved. Alias names are case
   * sensitive.</p> <p>The alias name must be unique among resources of the same type
   * in your account and Region. If another resource of the same type already has the
   * alias, the request fails with a <code>ValidationException</code>. An invalid or
   * reserved alias name also causes a <code>ValidationException</code>.</p> <p>If
   * you omit this parameter or specify an empty string, the resource is created
   * without an alias.</p>
   */
  inline const Aws::String& GetAliasName() const { return m_aliasName; }
  inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
  template <typename AliasNameT = Aws::String>
  void SetAliasName(AliasNameT&& value) {
    m_aliasNameHasBeenSet = true;
    m_aliasName = std::forward<AliasNameT>(value);
  }
  template <typename AliasNameT = Aws::String>
  CreateTrustAnchorRequest& WithAliasName(AliasNameT&& value) {
    SetAliasName(std::forward<AliasNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Source m_source;

  bool m_enabled{false};

  bool m_crlDpRevocationEnabled{false};

  Aws::Vector<Tag> m_tags;

  Aws::Vector<NotificationSetting> m_notificationSettings;

  Aws::String m_aliasName;
  bool m_nameHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
  bool m_crlDpRevocationEnabledHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_notificationSettingsHasBeenSet = false;
  bool m_aliasNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
