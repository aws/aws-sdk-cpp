/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/CallingSettings.h>
#include <aws/wickr/model/PasswordRequirements.h>
#include <aws/wickr/model/PermittedWickrEnterpriseNetwork.h>
#include <aws/wickr/model/ShredderSettings.h>
#include <aws/wickr/model/WickrAwsNetworks.h>

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
 * <p>Comprehensive configuration settings that define all user capabilities,
 * restrictions, and features for members of a security group. These settings
 * control everything from calling permissions to federation settings to security
 * policies.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/SecurityGroupSettings">AWS
 * API Reference</a></p>
 */
class SecurityGroupSettings {
 public:
  AWS_WICKR_API SecurityGroupSettings() = default;
  AWS_WICKR_API SecurityGroupSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API SecurityGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Requires users to reauthenticate every time they return to the application,
   * providing an additional layer of security.</p>
   */
  inline bool GetAlwaysReauthenticate() const { return m_alwaysReauthenticate; }
  inline bool AlwaysReauthenticateHasBeenSet() const { return m_alwaysReauthenticateHasBeenSet; }
  inline void SetAlwaysReauthenticate(bool value) {
    m_alwaysReauthenticateHasBeenSet = true;
    m_alwaysReauthenticate = value;
  }
  inline SecurityGroupSettings& WithAlwaysReauthenticate(bool value) {
    SetAlwaysReauthenticate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration values for ATAK (Android Team Awareness Kit) package
   * integration, when ATAK is enabled.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAtakPackageValues() const { return m_atakPackageValues; }
  inline bool AtakPackageValuesHasBeenSet() const { return m_atakPackageValuesHasBeenSet; }
  template <typename AtakPackageValuesT = Aws::Vector<Aws::String>>
  void SetAtakPackageValues(AtakPackageValuesT&& value) {
    m_atakPackageValuesHasBeenSet = true;
    m_atakPackageValues = std::forward<AtakPackageValuesT>(value);
  }
  template <typename AtakPackageValuesT = Aws::Vector<Aws::String>>
  SecurityGroupSettings& WithAtakPackageValues(AtakPackageValuesT&& value) {
    SetAtakPackageValues(std::forward<AtakPackageValuesT>(value));
    return *this;
  }
  template <typename AtakPackageValuesT = Aws::String>
  SecurityGroupSettings& AddAtakPackageValues(AtakPackageValuesT&& value) {
    m_atakPackageValuesHasBeenSet = true;
    m_atakPackageValues.emplace_back(std::forward<AtakPackageValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The calling feature permissions and settings that control what types of calls
   * users can initiate and participate in.</p>
   */
  inline const CallingSettings& GetCalling() const { return m_calling; }
  inline bool CallingHasBeenSet() const { return m_callingHasBeenSet; }
  template <typename CallingT = CallingSettings>
  void SetCalling(CallingT&& value) {
    m_callingHasBeenSet = true;
    m_calling = std::forward<CallingT>(value);
  }
  template <typename CallingT = CallingSettings>
  SecurityGroupSettings& WithCalling(CallingT&& value) {
    SetCalling(std::forward<CallingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables automatic checking for Wickr client updates to ensure users stay
   * current with the latest version.</p>
   */
  inline bool GetCheckForUpdates() const { return m_checkForUpdates; }
  inline bool CheckForUpdatesHasBeenSet() const { return m_checkForUpdatesHasBeenSet; }
  inline void SetCheckForUpdates(bool value) {
    m_checkForUpdatesHasBeenSet = true;
    m_checkForUpdates = value;
  }
  inline SecurityGroupSettings& WithCheckForUpdates(bool value) {
    SetCheckForUpdates(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables ATAK (Android Team Awareness Kit) integration for tactical
   * communication and situational awareness.</p>
   */
  inline bool GetEnableAtak() const { return m_enableAtak; }
  inline bool EnableAtakHasBeenSet() const { return m_enableAtakHasBeenSet; }
  inline void SetEnableAtak(bool value) {
    m_enableAtakHasBeenSet = true;
    m_enableAtak = value;
  }
  inline SecurityGroupSettings& WithEnableAtak(bool value) {
    SetEnableAtak(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allow users to report crashes.</p>
   */
  inline bool GetEnableCrashReports() const { return m_enableCrashReports; }
  inline bool EnableCrashReportsHasBeenSet() const { return m_enableCrashReportsHasBeenSet; }
  inline void SetEnableCrashReports(bool value) {
    m_enableCrashReportsHasBeenSet = true;
    m_enableCrashReports = value;
  }
  inline SecurityGroupSettings& WithEnableCrashReports(bool value) {
    SetEnableCrashReports(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether users can download files from messages to their
   * devices.</p>
   */
  inline bool GetEnableFileDownload() const { return m_enableFileDownload; }
  inline bool EnableFileDownloadHasBeenSet() const { return m_enableFileDownloadHasBeenSet; }
  inline void SetEnableFileDownload(bool value) {
    m_enableFileDownloadHasBeenSet = true;
    m_enableFileDownload = value;
  }
  inline SecurityGroupSettings& WithEnableFileDownload(bool value) {
    SetEnableFileDownload(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allows users to communicate with guest users from other Wickr networks and
   * federated external networks.</p>
   */
  inline bool GetEnableGuestFederation() const { return m_enableGuestFederation; }
  inline bool EnableGuestFederationHasBeenSet() const { return m_enableGuestFederationHasBeenSet; }
  inline void SetEnableGuestFederation(bool value) {
    m_enableGuestFederationHasBeenSet = true;
    m_enableGuestFederation = value;
  }
  inline SecurityGroupSettings& WithEnableGuestFederation(bool value) {
    SetEnableGuestFederation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables message preview text in push notifications, allowing users to see
   * message content before opening the app.</p>
   */
  inline bool GetEnableNotificationPreview() const { return m_enableNotificationPreview; }
  inline bool EnableNotificationPreviewHasBeenSet() const { return m_enableNotificationPreviewHasBeenSet; }
  inline void SetEnableNotificationPreview(bool value) {
    m_enableNotificationPreviewHasBeenSet = true;
    m_enableNotificationPreview = value;
  }
  inline SecurityGroupSettings& WithEnableNotificationPreview(bool value) {
    SetEnableNotificationPreview(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Allow users to avoid censorship when they are geo-blocked or have network
   * limitations.</p>
   */
  inline bool GetEnableOpenAccessOption() const { return m_enableOpenAccessOption; }
  inline bool EnableOpenAccessOptionHasBeenSet() const { return m_enableOpenAccessOptionHasBeenSet; }
  inline void SetEnableOpenAccessOption(bool value) {
    m_enableOpenAccessOptionHasBeenSet = true;
    m_enableOpenAccessOption = value;
  }
  inline SecurityGroupSettings& WithEnableOpenAccessOption(bool value) {
    SetEnableOpenAccessOption(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables restricted global federation, limiting external communication to only
   * specified permitted networks.</p>
   */
  inline bool GetEnableRestrictedGlobalFederation() const { return m_enableRestrictedGlobalFederation; }
  inline bool EnableRestrictedGlobalFederationHasBeenSet() const { return m_enableRestrictedGlobalFederationHasBeenSet; }
  inline void SetEnableRestrictedGlobalFederation(bool value) {
    m_enableRestrictedGlobalFederationHasBeenSet = true;
    m_enableRestrictedGlobalFederation = value;
  }
  inline SecurityGroupSettings& WithEnableRestrictedGlobalFederation(bool value) {
    SetEnableRestrictedGlobalFederation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables file sharing capabilities, allowing users to send and receive files
   * in conversations.</p>
   */
  inline bool GetFilesEnabled() const { return m_filesEnabled; }
  inline bool FilesEnabledHasBeenSet() const { return m_filesEnabledHasBeenSet; }
  inline void SetFilesEnabled(bool value) {
    m_filesEnabledHasBeenSet = true;
    m_filesEnabled = value;
  }
  inline SecurityGroupSettings& WithFilesEnabled(bool value) {
    SetFilesEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Defines the number of failed login attempts before data stored on the device
   * is reset. Should be less than lockoutThreshold.</p>
   */
  inline int GetForceDeviceLockout() const { return m_forceDeviceLockout; }
  inline bool ForceDeviceLockoutHasBeenSet() const { return m_forceDeviceLockoutHasBeenSet; }
  inline void SetForceDeviceLockout(int value) {
    m_forceDeviceLockoutHasBeenSet = true;
    m_forceDeviceLockout = value;
  }
  inline SecurityGroupSettings& WithForceDeviceLockout(int value) {
    SetForceDeviceLockout(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Automatically enable and enforce Wickr open access on all devices. Valid only
   * if enableOpenAccessOption settings is enabled.</p>
   */
  inline bool GetForceOpenAccess() const { return m_forceOpenAccess; }
  inline bool ForceOpenAccessHasBeenSet() const { return m_forceOpenAccessHasBeenSet; }
  inline void SetForceOpenAccess(bool value) {
    m_forceOpenAccessHasBeenSet = true;
    m_forceOpenAccess = value;
  }
  inline SecurityGroupSettings& WithForceOpenAccess(bool value) {
    SetForceOpenAccess(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allow user approved bots to read messages in rooms without using a slash
   * command.</p>
   */
  inline bool GetForceReadReceipts() const { return m_forceReadReceipts; }
  inline bool ForceReadReceiptsHasBeenSet() const { return m_forceReadReceiptsHasBeenSet; }
  inline void SetForceReadReceipts(bool value) {
    m_forceReadReceiptsHasBeenSet = true;
    m_forceReadReceipts = value;
  }
  inline SecurityGroupSettings& WithForceReadReceipts(bool value) {
    SetForceReadReceipts(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allows users to communicate with users on other Wickr instances (Wickr
   * Enterprise) outside the current network.</p>
   */
  inline bool GetGlobalFederation() const { return m_globalFederation; }
  inline bool GlobalFederationHasBeenSet() const { return m_globalFederationHasBeenSet; }
  inline void SetGlobalFederation(bool value) {
    m_globalFederationHasBeenSet = true;
    m_globalFederation = value;
  }
  inline SecurityGroupSettings& WithGlobalFederation(bool value) {
    SetGlobalFederation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enforces a two-factor authentication when a user adds a new device to their
   * account.</p>
   */
  inline bool GetIsAtoEnabled() const { return m_isAtoEnabled; }
  inline bool IsAtoEnabledHasBeenSet() const { return m_isAtoEnabledHasBeenSet; }
  inline void SetIsAtoEnabled(bool value) {
    m_isAtoEnabledHasBeenSet = true;
    m_isAtoEnabled = value;
  }
  inline SecurityGroupSettings& WithIsAtoEnabled(bool value) {
    SetIsAtoEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables automatic preview of links shared in messages, showing webpage
   * thumbnails and descriptions.</p>
   */
  inline bool GetIsLinkPreviewEnabled() const { return m_isLinkPreviewEnabled; }
  inline bool IsLinkPreviewEnabledHasBeenSet() const { return m_isLinkPreviewEnabledHasBeenSet; }
  inline void SetIsLinkPreviewEnabled(bool value) {
    m_isLinkPreviewEnabledHasBeenSet = true;
    m_isLinkPreviewEnabled = value;
  }
  inline SecurityGroupSettings& WithIsLinkPreviewEnabled(bool value) {
    SetIsLinkPreviewEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allows map integration in location sharing, enabling users to view shared
   * locations on interactive maps. Only allowed when location setting is
   * enabled.</p>
   */
  inline bool GetLocationAllowMaps() const { return m_locationAllowMaps; }
  inline bool LocationAllowMapsHasBeenSet() const { return m_locationAllowMapsHasBeenSet; }
  inline void SetLocationAllowMaps(bool value) {
    m_locationAllowMapsHasBeenSet = true;
    m_locationAllowMaps = value;
  }
  inline SecurityGroupSettings& WithLocationAllowMaps(bool value) {
    SetLocationAllowMaps(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables location sharing features, allowing users to share their current
   * location with others.</p>
   */
  inline bool GetLocationEnabled() const { return m_locationEnabled; }
  inline bool LocationEnabledHasBeenSet() const { return m_locationEnabledHasBeenSet; }
  inline void SetLocationEnabled(bool value) {
    m_locationEnabledHasBeenSet = true;
    m_locationEnabled = value;
  }
  inline SecurityGroupSettings& WithLocationEnabled(bool value) {
    SetLocationEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum file size in bytes that will be automatically downloaded without
   * user confirmation. Only allowed if fileDownload is enabled. Valid Values [512000
   * (low_quality), 7340032 (high_quality) ]</p>
   */
  inline long long GetMaxAutoDownloadSize() const { return m_maxAutoDownloadSize; }
  inline bool MaxAutoDownloadSizeHasBeenSet() const { return m_maxAutoDownloadSizeHasBeenSet; }
  inline void SetMaxAutoDownloadSize(long long value) {
    m_maxAutoDownloadSizeHasBeenSet = true;
    m_maxAutoDownloadSize = value;
  }
  inline SecurityGroupSettings& WithMaxAutoDownloadSize(long long value) {
    SetMaxAutoDownloadSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum burn-on-read (BOR) time in seconds, which determines how long
   * messages remain visible before auto-deletion after being read.</p>
   */
  inline int GetMaxBor() const { return m_maxBor; }
  inline bool MaxBorHasBeenSet() const { return m_maxBorHasBeenSet; }
  inline void SetMaxBor(int value) {
    m_maxBorHasBeenSet = true;
    m_maxBor = value;
  }
  inline SecurityGroupSettings& WithMaxBor(int value) {
    SetMaxBor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time-to-live (TTL) in seconds for messages, after which they will
   * be automatically deleted from all devices.</p>
   */
  inline long long GetMaxTtl() const { return m_maxTtl; }
  inline bool MaxTtlHasBeenSet() const { return m_maxTtlHasBeenSet; }
  inline void SetMaxTtl(long long value) {
    m_maxTtlHasBeenSet = true;
    m_maxTtl = value;
  }
  inline SecurityGroupSettings& WithMaxTtl(long long value) {
    SetMaxTtl(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables message forwarding, allowing users to forward messages from one
   * conversation to another.</p>
   */
  inline bool GetMessageForwardingEnabled() const { return m_messageForwardingEnabled; }
  inline bool MessageForwardingEnabledHasBeenSet() const { return m_messageForwardingEnabledHasBeenSet; }
  inline void SetMessageForwardingEnabled(bool value) {
    m_messageForwardingEnabledHasBeenSet = true;
    m_messageForwardingEnabled = value;
  }
  inline SecurityGroupSettings& WithMessageForwardingEnabled(bool value) {
    SetMessageForwardingEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The password complexity requirements that users must follow when creating or
   * changing passwords.</p>
   */
  inline const PasswordRequirements& GetPasswordRequirements() const { return m_passwordRequirements; }
  inline bool PasswordRequirementsHasBeenSet() const { return m_passwordRequirementsHasBeenSet; }
  template <typename PasswordRequirementsT = PasswordRequirements>
  void SetPasswordRequirements(PasswordRequirementsT&& value) {
    m_passwordRequirementsHasBeenSet = true;
    m_passwordRequirements = std::forward<PasswordRequirementsT>(value);
  }
  template <typename PasswordRequirementsT = PasswordRequirements>
  SecurityGroupSettings& WithPasswordRequirements(PasswordRequirementsT&& value) {
    SetPasswordRequirements(std::forward<PasswordRequirementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables presence indicators that show whether users are online, away, or
   * offline.</p>
   */
  inline bool GetPresenceEnabled() const { return m_presenceEnabled; }
  inline bool PresenceEnabledHasBeenSet() const { return m_presenceEnabledHasBeenSet; }
  inline void SetPresenceEnabled(bool value) {
    m_presenceEnabledHasBeenSet = true;
    m_presenceEnabled = value;
  }
  inline SecurityGroupSettings& WithPresenceEnabled(bool value) {
    SetPresenceEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of pre-defined quick response message templates that users can send
   * with a single tap.</p>
   */
  inline const Aws::Vector<Aws::String>& GetQuickResponses() const { return m_quickResponses; }
  inline bool QuickResponsesHasBeenSet() const { return m_quickResponsesHasBeenSet; }
  template <typename QuickResponsesT = Aws::Vector<Aws::String>>
  void SetQuickResponses(QuickResponsesT&& value) {
    m_quickResponsesHasBeenSet = true;
    m_quickResponses = std::forward<QuickResponsesT>(value);
  }
  template <typename QuickResponsesT = Aws::Vector<Aws::String>>
  SecurityGroupSettings& WithQuickResponses(QuickResponsesT&& value) {
    SetQuickResponses(std::forward<QuickResponsesT>(value));
    return *this;
  }
  template <typename QuickResponsesT = Aws::String>
  SecurityGroupSettings& AddQuickResponses(QuickResponsesT&& value) {
    m_quickResponsesHasBeenSet = true;
    m_quickResponses.emplace_back(std::forward<QuickResponsesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Users will get a master recovery key that can be used to securely sign in to
   * their Wickr account without having access to their primary device for
   * authentication. Available in SSO enabled network.</p>
   */
  inline bool GetShowMasterRecoveryKey() const { return m_showMasterRecoveryKey; }
  inline bool ShowMasterRecoveryKeyHasBeenSet() const { return m_showMasterRecoveryKeyHasBeenSet; }
  inline void SetShowMasterRecoveryKey(bool value) {
    m_showMasterRecoveryKeyHasBeenSet = true;
    m_showMasterRecoveryKey = value;
  }
  inline SecurityGroupSettings& WithShowMasterRecoveryKey(bool value) {
    SetShowMasterRecoveryKey(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The message shredder configuration that controls secure deletion of messages
   * and files from devices.</p>
   */
  inline const ShredderSettings& GetShredder() const { return m_shredder; }
  inline bool ShredderHasBeenSet() const { return m_shredderHasBeenSet; }
  template <typename ShredderT = ShredderSettings>
  void SetShredder(ShredderT&& value) {
    m_shredderHasBeenSet = true;
    m_shredder = std::forward<ShredderT>(value);
  }
  template <typename ShredderT = ShredderSettings>
  SecurityGroupSettings& WithShredder(ShredderT&& value) {
    SetShredder(std::forward<ShredderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration for which users SSO session remains inactive before
   * automatically logging them out for security. Available in SSO enabled
   * network.</p>
   */
  inline int GetSsoMaxIdleMinutes() const { return m_ssoMaxIdleMinutes; }
  inline bool SsoMaxIdleMinutesHasBeenSet() const { return m_ssoMaxIdleMinutesHasBeenSet; }
  inline void SetSsoMaxIdleMinutes(int value) {
    m_ssoMaxIdleMinutesHasBeenSet = true;
    m_ssoMaxIdleMinutes = value;
  }
  inline SecurityGroupSettings& WithSsoMaxIdleMinutes(int value) {
    SetSsoMaxIdleMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The local federation mode controlling how users can communicate with other
   * networks. Values: 0 (none), 1 (federated), 2 (restricted).</p>
   */
  inline int GetFederationMode() const { return m_federationMode; }
  inline bool FederationModeHasBeenSet() const { return m_federationModeHasBeenSet; }
  inline void SetFederationMode(int value) {
    m_federationModeHasBeenSet = true;
    m_federationMode = value;
  }
  inline SecurityGroupSettings& WithFederationMode(int value) {
    SetFederationMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of failed password attempts before a user account is locked
   * out.</p>
   */
  inline int GetLockoutThreshold() const { return m_lockoutThreshold; }
  inline bool LockoutThresholdHasBeenSet() const { return m_lockoutThresholdHasBeenSet; }
  inline void SetLockoutThreshold(int value) {
    m_lockoutThresholdHasBeenSet = true;
    m_lockoutThreshold = value;
  }
  inline SecurityGroupSettings& WithLockoutThreshold(int value) {
    SetLockoutThreshold(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of network IDs that are permitted for local federation when federation
   * mode is set to restricted.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPermittedNetworks() const { return m_permittedNetworks; }
  inline bool PermittedNetworksHasBeenSet() const { return m_permittedNetworksHasBeenSet; }
  template <typename PermittedNetworksT = Aws::Vector<Aws::String>>
  void SetPermittedNetworks(PermittedNetworksT&& value) {
    m_permittedNetworksHasBeenSet = true;
    m_permittedNetworks = std::forward<PermittedNetworksT>(value);
  }
  template <typename PermittedNetworksT = Aws::Vector<Aws::String>>
  SecurityGroupSettings& WithPermittedNetworks(PermittedNetworksT&& value) {
    SetPermittedNetworks(std::forward<PermittedNetworksT>(value));
    return *this;
  }
  template <typename PermittedNetworksT = Aws::String>
  SecurityGroupSettings& AddPermittedNetworks(PermittedNetworksT&& value) {
    m_permittedNetworksHasBeenSet = true;
    m_permittedNetworks.emplace_back(std::forward<PermittedNetworksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of permitted Wickr networks for global federation, restricting
   * communication to specific approved networks.</p>
   */
  inline const Aws::Vector<WickrAwsNetworks>& GetPermittedWickrAwsNetworks() const { return m_permittedWickrAwsNetworks; }
  inline bool PermittedWickrAwsNetworksHasBeenSet() const { return m_permittedWickrAwsNetworksHasBeenSet; }
  template <typename PermittedWickrAwsNetworksT = Aws::Vector<WickrAwsNetworks>>
  void SetPermittedWickrAwsNetworks(PermittedWickrAwsNetworksT&& value) {
    m_permittedWickrAwsNetworksHasBeenSet = true;
    m_permittedWickrAwsNetworks = std::forward<PermittedWickrAwsNetworksT>(value);
  }
  template <typename PermittedWickrAwsNetworksT = Aws::Vector<WickrAwsNetworks>>
  SecurityGroupSettings& WithPermittedWickrAwsNetworks(PermittedWickrAwsNetworksT&& value) {
    SetPermittedWickrAwsNetworks(std::forward<PermittedWickrAwsNetworksT>(value));
    return *this;
  }
  template <typename PermittedWickrAwsNetworksT = WickrAwsNetworks>
  SecurityGroupSettings& AddPermittedWickrAwsNetworks(PermittedWickrAwsNetworksT&& value) {
    m_permittedWickrAwsNetworksHasBeenSet = true;
    m_permittedWickrAwsNetworks.emplace_back(std::forward<PermittedWickrAwsNetworksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of permitted Wickr Enterprise networks for global federation,
   * restricting communication to specific approved networks.</p>
   */
  inline const Aws::Vector<PermittedWickrEnterpriseNetwork>& GetPermittedWickrEnterpriseNetworks() const {
    return m_permittedWickrEnterpriseNetworks;
  }
  inline bool PermittedWickrEnterpriseNetworksHasBeenSet() const { return m_permittedWickrEnterpriseNetworksHasBeenSet; }
  template <typename PermittedWickrEnterpriseNetworksT = Aws::Vector<PermittedWickrEnterpriseNetwork>>
  void SetPermittedWickrEnterpriseNetworks(PermittedWickrEnterpriseNetworksT&& value) {
    m_permittedWickrEnterpriseNetworksHasBeenSet = true;
    m_permittedWickrEnterpriseNetworks = std::forward<PermittedWickrEnterpriseNetworksT>(value);
  }
  template <typename PermittedWickrEnterpriseNetworksT = Aws::Vector<PermittedWickrEnterpriseNetwork>>
  SecurityGroupSettings& WithPermittedWickrEnterpriseNetworks(PermittedWickrEnterpriseNetworksT&& value) {
    SetPermittedWickrEnterpriseNetworks(std::forward<PermittedWickrEnterpriseNetworksT>(value));
    return *this;
  }
  template <typename PermittedWickrEnterpriseNetworksT = PermittedWickrEnterpriseNetwork>
  SecurityGroupSettings& AddPermittedWickrEnterpriseNetworks(PermittedWickrEnterpriseNetworksT&& value) {
    m_permittedWickrEnterpriseNetworksHasBeenSet = true;
    m_permittedWickrEnterpriseNetworks.emplace_back(std::forward<PermittedWickrEnterpriseNetworksT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_alwaysReauthenticate{false};

  Aws::Vector<Aws::String> m_atakPackageValues;

  CallingSettings m_calling;

  bool m_checkForUpdates{false};

  bool m_enableAtak{false};

  bool m_enableCrashReports{false};

  bool m_enableFileDownload{false};

  bool m_enableGuestFederation{false};

  bool m_enableNotificationPreview{false};

  bool m_enableOpenAccessOption{false};

  bool m_enableRestrictedGlobalFederation{false};

  bool m_filesEnabled{false};

  int m_forceDeviceLockout{0};

  bool m_forceOpenAccess{false};

  bool m_forceReadReceipts{false};

  bool m_globalFederation{false};

  bool m_isAtoEnabled{false};

  bool m_isLinkPreviewEnabled{false};

  bool m_locationAllowMaps{false};

  bool m_locationEnabled{false};

  long long m_maxAutoDownloadSize{0};

  int m_maxBor{0};

  long long m_maxTtl{0};

  bool m_messageForwardingEnabled{false};

  PasswordRequirements m_passwordRequirements;

  bool m_presenceEnabled{false};

  Aws::Vector<Aws::String> m_quickResponses;

  bool m_showMasterRecoveryKey{false};

  ShredderSettings m_shredder;

  int m_ssoMaxIdleMinutes{0};

  int m_federationMode{0};

  int m_lockoutThreshold{0};

  Aws::Vector<Aws::String> m_permittedNetworks;

  Aws::Vector<WickrAwsNetworks> m_permittedWickrAwsNetworks;

  Aws::Vector<PermittedWickrEnterpriseNetwork> m_permittedWickrEnterpriseNetworks;
  bool m_alwaysReauthenticateHasBeenSet = false;
  bool m_atakPackageValuesHasBeenSet = false;
  bool m_callingHasBeenSet = false;
  bool m_checkForUpdatesHasBeenSet = false;
  bool m_enableAtakHasBeenSet = false;
  bool m_enableCrashReportsHasBeenSet = false;
  bool m_enableFileDownloadHasBeenSet = false;
  bool m_enableGuestFederationHasBeenSet = false;
  bool m_enableNotificationPreviewHasBeenSet = false;
  bool m_enableOpenAccessOptionHasBeenSet = false;
  bool m_enableRestrictedGlobalFederationHasBeenSet = false;
  bool m_filesEnabledHasBeenSet = false;
  bool m_forceDeviceLockoutHasBeenSet = false;
  bool m_forceOpenAccessHasBeenSet = false;
  bool m_forceReadReceiptsHasBeenSet = false;
  bool m_globalFederationHasBeenSet = false;
  bool m_isAtoEnabledHasBeenSet = false;
  bool m_isLinkPreviewEnabledHasBeenSet = false;
  bool m_locationAllowMapsHasBeenSet = false;
  bool m_locationEnabledHasBeenSet = false;
  bool m_maxAutoDownloadSizeHasBeenSet = false;
  bool m_maxBorHasBeenSet = false;
  bool m_maxTtlHasBeenSet = false;
  bool m_messageForwardingEnabledHasBeenSet = false;
  bool m_passwordRequirementsHasBeenSet = false;
  bool m_presenceEnabledHasBeenSet = false;
  bool m_quickResponsesHasBeenSet = false;
  bool m_showMasterRecoveryKeyHasBeenSet = false;
  bool m_shredderHasBeenSet = false;
  bool m_ssoMaxIdleMinutesHasBeenSet = false;
  bool m_federationModeHasBeenSet = false;
  bool m_lockoutThresholdHasBeenSet = false;
  bool m_permittedNetworksHasBeenSet = false;
  bool m_permittedWickrAwsNetworksHasBeenSet = false;
  bool m_permittedWickrEnterpriseNetworksHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
