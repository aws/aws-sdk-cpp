/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/NotificationSettingDetail.h>
#include <aws/rolesanywhere/model/Source.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RolesAnywhere {
namespace Model {

/**
 * <p>The state of the trust anchor after a read or write operation. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/TrustAnchorDetail">AWS
 * API Reference</a></p>
 */
class TrustAnchorDetail {
 public:
  AWS_ROLESANYWHERE_API TrustAnchorDetail() = default;
  AWS_ROLESANYWHERE_API TrustAnchorDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROLESANYWHERE_API TrustAnchorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the trust anchor.</p>
   */
  inline const Aws::String& GetTrustAnchorId() const { return m_trustAnchorId; }
  inline bool TrustAnchorIdHasBeenSet() const { return m_trustAnchorIdHasBeenSet; }
  template <typename TrustAnchorIdT = Aws::String>
  void SetTrustAnchorId(TrustAnchorIdT&& value) {
    m_trustAnchorIdHasBeenSet = true;
    m_trustAnchorId = std::forward<TrustAnchorIdT>(value);
  }
  template <typename TrustAnchorIdT = Aws::String>
  TrustAnchorDetail& WithTrustAnchorId(TrustAnchorIdT&& value) {
    SetTrustAnchorId(std::forward<TrustAnchorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the trust anchor.</p>
   */
  inline const Aws::String& GetTrustAnchorArn() const { return m_trustAnchorArn; }
  inline bool TrustAnchorArnHasBeenSet() const { return m_trustAnchorArnHasBeenSet; }
  template <typename TrustAnchorArnT = Aws::String>
  void SetTrustAnchorArn(TrustAnchorArnT&& value) {
    m_trustAnchorArnHasBeenSet = true;
    m_trustAnchorArn = std::forward<TrustAnchorArnT>(value);
  }
  template <typename TrustAnchorArnT = Aws::String>
  TrustAnchorDetail& WithTrustAnchorArn(TrustAnchorArnT&& value) {
    SetTrustAnchorArn(std::forward<TrustAnchorArnT>(value));
    return *this;
  }
  ///@}

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
  TrustAnchorDetail& WithName(NameT&& value) {
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
  TrustAnchorDetail& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the trust anchor is enabled.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline TrustAnchorDetail& WithEnabled(bool value) {
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
  inline TrustAnchorDetail& WithCrlDpRevocationEnabled(bool value) {
    SetCrlDpRevocationEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ISO-8601 timestamp when the trust anchor was created. </p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  TrustAnchorDetail& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ISO-8601 timestamp when the trust anchor was last updated. </p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  TrustAnchorDetail& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of notification settings to be associated to the trust anchor.</p>
   */
  inline const Aws::Vector<NotificationSettingDetail>& GetNotificationSettings() const { return m_notificationSettings; }
  inline bool NotificationSettingsHasBeenSet() const { return m_notificationSettingsHasBeenSet; }
  template <typename NotificationSettingsT = Aws::Vector<NotificationSettingDetail>>
  void SetNotificationSettings(NotificationSettingsT&& value) {
    m_notificationSettingsHasBeenSet = true;
    m_notificationSettings = std::forward<NotificationSettingsT>(value);
  }
  template <typename NotificationSettingsT = Aws::Vector<NotificationSettingDetail>>
  TrustAnchorDetail& WithNotificationSettings(NotificationSettingsT&& value) {
    SetNotificationSettings(std::forward<NotificationSettingsT>(value));
    return *this;
  }
  template <typename NotificationSettingsT = NotificationSettingDetail>
  TrustAnchorDetail& AddNotificationSettings(NotificationSettingsT&& value) {
    m_notificationSettingsHasBeenSet = true;
    m_notificationSettings.emplace_back(std::forward<NotificationSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alias of the trust anchor. Present only if the trust anchor has an
   * alias.</p>
   */
  inline const Aws::String& GetAliasName() const { return m_aliasName; }
  inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
  template <typename AliasNameT = Aws::String>
  void SetAliasName(AliasNameT&& value) {
    m_aliasNameHasBeenSet = true;
    m_aliasName = std::forward<AliasNameT>(value);
  }
  template <typename AliasNameT = Aws::String>
  TrustAnchorDetail& WithAliasName(AliasNameT&& value) {
    SetAliasName(std::forward<AliasNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alias ARN of the trust anchor, in the form
   * <code>arn:<i>partition</i>:rolesanywhere:<i>region</i>:<i>account</i>:alias/trust-anchor/<i>alias-name</i>
   * </code>. Present only if the trust anchor has an alias.</p> <p>You can use the
   * alias ARN in place of the resource ID or ARN in the request parameters whose
   * descriptions say that they accept an alias ARN. Don't use the alias ARN in
   * Identity and Access Management (IAM) policies. A policy statement that names an
   * alias ARN doesn't apply to the resource that holds the alias. Write policies
   * with the ARN that contains the resource ID instead.</p>
   */
  inline const Aws::String& GetAliasArn() const { return m_aliasArn; }
  inline bool AliasArnHasBeenSet() const { return m_aliasArnHasBeenSet; }
  template <typename AliasArnT = Aws::String>
  void SetAliasArn(AliasArnT&& value) {
    m_aliasArnHasBeenSet = true;
    m_aliasArn = std::forward<AliasArnT>(value);
  }
  template <typename AliasArnT = Aws::String>
  TrustAnchorDetail& WithAliasArn(AliasArnT&& value) {
    SetAliasArn(std::forward<AliasArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alias that the resource had before the update request. IAM Roles Anywhere
   * returns this value only in the response to an update request that changed or
   * removed an existing alias. It isn't returned when the alias was unchanged, when
   * the resource had no alias before the request, or by other operations.</p>
   */
  inline const Aws::String& GetPreviousAliasName() const { return m_previousAliasName; }
  inline bool PreviousAliasNameHasBeenSet() const { return m_previousAliasNameHasBeenSet; }
  template <typename PreviousAliasNameT = Aws::String>
  void SetPreviousAliasName(PreviousAliasNameT&& value) {
    m_previousAliasNameHasBeenSet = true;
    m_previousAliasName = std::forward<PreviousAliasNameT>(value);
  }
  template <typename PreviousAliasNameT = Aws::String>
  TrustAnchorDetail& WithPreviousAliasName(PreviousAliasNameT&& value) {
    SetPreviousAliasName(std::forward<PreviousAliasNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trustAnchorId;

  Aws::String m_trustAnchorArn;

  Aws::String m_name;

  Source m_source;

  bool m_enabled{false};

  bool m_crlDpRevocationEnabled{false};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Vector<NotificationSettingDetail> m_notificationSettings;

  Aws::String m_aliasName;

  Aws::String m_aliasArn;

  Aws::String m_previousAliasName;
  bool m_trustAnchorIdHasBeenSet = false;
  bool m_trustAnchorArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
  bool m_crlDpRevocationEnabledHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_notificationSettingsHasBeenSet = false;
  bool m_aliasNameHasBeenSet = false;
  bool m_aliasArnHasBeenSet = false;
  bool m_previousAliasNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
