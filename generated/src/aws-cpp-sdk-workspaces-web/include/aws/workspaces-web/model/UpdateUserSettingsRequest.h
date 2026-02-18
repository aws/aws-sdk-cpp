/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/BrandingConfigurationUpdateInput.h>
#include <aws/workspaces-web/model/CookieSynchronizationConfiguration.h>
#include <aws/workspaces-web/model/EnabledType.h>
#include <aws/workspaces-web/model/ToolbarConfiguration.h>

#include <utility>

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {

/**
 */
class UpdateUserSettingsRequest : public WorkSpacesWebRequest {
 public:
  AWS_WORKSPACESWEB_API UpdateUserSettingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateUserSettings"; }

  AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the user settings.</p>
   */
  inline const Aws::String& GetUserSettingsArn() const { return m_userSettingsArn; }
  inline bool UserSettingsArnHasBeenSet() const { return m_userSettingsArnHasBeenSet; }
  template <typename UserSettingsArnT = Aws::String>
  void SetUserSettingsArn(UserSettingsArnT&& value) {
    m_userSettingsArnHasBeenSet = true;
    m_userSettingsArn = std::forward<UserSettingsArnT>(value);
  }
  template <typename UserSettingsArnT = Aws::String>
  UpdateUserSettingsRequest& WithUserSettingsArn(UserSettingsArnT&& value) {
    SetUserSettingsArn(std::forward<UserSettingsArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the user can copy text from the streaming session to the
   * local device.</p>
   */
  inline EnabledType GetCopyAllowed() const { return m_copyAllowed; }
  inline bool CopyAllowedHasBeenSet() const { return m_copyAllowedHasBeenSet; }
  inline void SetCopyAllowed(EnabledType value) {
    m_copyAllowedHasBeenSet = true;
    m_copyAllowed = value;
  }
  inline UpdateUserSettingsRequest& WithCopyAllowed(EnabledType value) {
    SetCopyAllowed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the user can paste text from the local device to the
   * streaming session.</p>
   */
  inline EnabledType GetPasteAllowed() const { return m_pasteAllowed; }
  inline bool PasteAllowedHasBeenSet() const { return m_pasteAllowedHasBeenSet; }
  inline void SetPasteAllowed(EnabledType value) {
    m_pasteAllowedHasBeenSet = true;
    m_pasteAllowed = value;
  }
  inline UpdateUserSettingsRequest& WithPasteAllowed(EnabledType value) {
    SetPasteAllowed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the user can download files from the streaming session to
   * the local device.</p>
   */
  inline EnabledType GetDownloadAllowed() const { return m_downloadAllowed; }
  inline bool DownloadAllowedHasBeenSet() const { return m_downloadAllowedHasBeenSet; }
  inline void SetDownloadAllowed(EnabledType value) {
    m_downloadAllowedHasBeenSet = true;
    m_downloadAllowed = value;
  }
  inline UpdateUserSettingsRequest& WithDownloadAllowed(EnabledType value) {
    SetDownloadAllowed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the user can upload files from the local device to the
   * streaming session.</p>
   */
  inline EnabledType GetUploadAllowed() const { return m_uploadAllowed; }
  inline bool UploadAllowedHasBeenSet() const { return m_uploadAllowedHasBeenSet; }
  inline void SetUploadAllowed(EnabledType value) {
    m_uploadAllowedHasBeenSet = true;
    m_uploadAllowed = value;
  }
  inline UpdateUserSettingsRequest& WithUploadAllowed(EnabledType value) {
    SetUploadAllowed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the user can print to the local device.</p>
   */
  inline EnabledType GetPrintAllowed() const { return m_printAllowed; }
  inline bool PrintAllowedHasBeenSet() const { return m_printAllowedHasBeenSet; }
  inline void SetPrintAllowed(EnabledType value) {
    m_printAllowedHasBeenSet = true;
    m_printAllowed = value;
  }
  inline UpdateUserSettingsRequest& WithPrintAllowed(EnabledType value) {
    SetPrintAllowed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of time that a streaming session remains active after users
   * disconnect.</p>
   */
  inline int GetDisconnectTimeoutInMinutes() const { return m_disconnectTimeoutInMinutes; }
  inline bool DisconnectTimeoutInMinutesHasBeenSet() const { return m_disconnectTimeoutInMinutesHasBeenSet; }
  inline void SetDisconnectTimeoutInMinutes(int value) {
    m_disconnectTimeoutInMinutesHasBeenSet = true;
    m_disconnectTimeoutInMinutes = value;
  }
  inline UpdateUserSettingsRequest& WithDisconnectTimeoutInMinutes(int value) {
    SetDisconnectTimeoutInMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of time that users can be idle (inactive) before they are
   * disconnected from their streaming session and the disconnect timeout interval
   * begins.</p>
   */
  inline int GetIdleDisconnectTimeoutInMinutes() const { return m_idleDisconnectTimeoutInMinutes; }
  inline bool IdleDisconnectTimeoutInMinutesHasBeenSet() const { return m_idleDisconnectTimeoutInMinutesHasBeenSet; }
  inline void SetIdleDisconnectTimeoutInMinutes(int value) {
    m_idleDisconnectTimeoutInMinutesHasBeenSet = true;
    m_idleDisconnectTimeoutInMinutes = value;
  }
  inline UpdateUserSettingsRequest& WithIdleDisconnectTimeoutInMinutes(int value) {
    SetIdleDisconnectTimeoutInMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. Idempotency ensures that an API request completes
   * only once. With an idempotent request, if the original request completes
   * successfully, subsequent retries with the same client token return the result
   * from the original successful request. </p> <p>If you do not specify a client
   * token, one is automatically generated by the Amazon Web Services SDK.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateUserSettingsRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that specifies which cookies should be synchronized from
   * the end user's local browser to the remote browser.</p> <p>If the allowlist and
   * blocklist are empty, the configuration becomes null.</p>
   */
  inline const CookieSynchronizationConfiguration& GetCookieSynchronizationConfiguration() const {
    return m_cookieSynchronizationConfiguration;
  }
  inline bool CookieSynchronizationConfigurationHasBeenSet() const { return m_cookieSynchronizationConfigurationHasBeenSet; }
  template <typename CookieSynchronizationConfigurationT = CookieSynchronizationConfiguration>
  void SetCookieSynchronizationConfiguration(CookieSynchronizationConfigurationT&& value) {
    m_cookieSynchronizationConfigurationHasBeenSet = true;
    m_cookieSynchronizationConfiguration = std::forward<CookieSynchronizationConfigurationT>(value);
  }
  template <typename CookieSynchronizationConfigurationT = CookieSynchronizationConfiguration>
  UpdateUserSettingsRequest& WithCookieSynchronizationConfiguration(CookieSynchronizationConfigurationT&& value) {
    SetCookieSynchronizationConfiguration(std::forward<CookieSynchronizationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the user can use deep links that open automatically when
   * connecting to a session.</p>
   */
  inline EnabledType GetDeepLinkAllowed() const { return m_deepLinkAllowed; }
  inline bool DeepLinkAllowedHasBeenSet() const { return m_deepLinkAllowedHasBeenSet; }
  inline void SetDeepLinkAllowed(EnabledType value) {
    m_deepLinkAllowedHasBeenSet = true;
    m_deepLinkAllowed = value;
  }
  inline UpdateUserSettingsRequest& WithDeepLinkAllowed(EnabledType value) {
    SetDeepLinkAllowed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the toolbar. This allows administrators to select the
   * toolbar type and visual mode, set maximum display resolution for sessions, and
   * choose which items are visible to end users during their sessions. If
   * administrators do not modify these settings, end users retain control over their
   * toolbar preferences.</p>
   */
  inline const ToolbarConfiguration& GetToolbarConfiguration() const { return m_toolbarConfiguration; }
  inline bool ToolbarConfigurationHasBeenSet() const { return m_toolbarConfigurationHasBeenSet; }
  template <typename ToolbarConfigurationT = ToolbarConfiguration>
  void SetToolbarConfiguration(ToolbarConfigurationT&& value) {
    m_toolbarConfigurationHasBeenSet = true;
    m_toolbarConfiguration = std::forward<ToolbarConfigurationT>(value);
  }
  template <typename ToolbarConfigurationT = ToolbarConfiguration>
  UpdateUserSettingsRequest& WithToolbarConfiguration(ToolbarConfigurationT&& value) {
    SetToolbarConfiguration(std::forward<ToolbarConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The branding configuration that customizes the appearance of the web portal
   * for end users. When updating user settings without an existing branding
   * configuration, all fields (logo, favicon, localized strings, and color theme)
   * are required except for wallpaper and terms of service. When updating user
   * settings with an existing branding configuration, all fields are optional.</p>
   */
  inline const BrandingConfigurationUpdateInput& GetBrandingConfigurationInput() const { return m_brandingConfigurationInput; }
  inline bool BrandingConfigurationInputHasBeenSet() const { return m_brandingConfigurationInputHasBeenSet; }
  template <typename BrandingConfigurationInputT = BrandingConfigurationUpdateInput>
  void SetBrandingConfigurationInput(BrandingConfigurationInputT&& value) {
    m_brandingConfigurationInputHasBeenSet = true;
    m_brandingConfigurationInput = std::forward<BrandingConfigurationInputT>(value);
  }
  template <typename BrandingConfigurationInputT = BrandingConfigurationUpdateInput>
  UpdateUserSettingsRequest& WithBrandingConfigurationInput(BrandingConfigurationInputT&& value) {
    SetBrandingConfigurationInput(std::forward<BrandingConfigurationInputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the user can use WebAuthn redirection for passwordless
   * login to websites within the streaming session.</p>
   */
  inline EnabledType GetWebAuthnAllowed() const { return m_webAuthnAllowed; }
  inline bool WebAuthnAllowedHasBeenSet() const { return m_webAuthnAllowedHasBeenSet; }
  inline void SetWebAuthnAllowed(EnabledType value) {
    m_webAuthnAllowedHasBeenSet = true;
    m_webAuthnAllowed = value;
  }
  inline UpdateUserSettingsRequest& WithWebAuthnAllowed(EnabledType value) {
    SetWebAuthnAllowed(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_userSettingsArn;

  EnabledType m_copyAllowed{EnabledType::NOT_SET};

  EnabledType m_pasteAllowed{EnabledType::NOT_SET};

  EnabledType m_downloadAllowed{EnabledType::NOT_SET};

  EnabledType m_uploadAllowed{EnabledType::NOT_SET};

  EnabledType m_printAllowed{EnabledType::NOT_SET};

  int m_disconnectTimeoutInMinutes{0};

  int m_idleDisconnectTimeoutInMinutes{0};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  CookieSynchronizationConfiguration m_cookieSynchronizationConfiguration;

  EnabledType m_deepLinkAllowed{EnabledType::NOT_SET};

  ToolbarConfiguration m_toolbarConfiguration;

  BrandingConfigurationUpdateInput m_brandingConfigurationInput;

  EnabledType m_webAuthnAllowed{EnabledType::NOT_SET};
  bool m_userSettingsArnHasBeenSet = false;
  bool m_copyAllowedHasBeenSet = false;
  bool m_pasteAllowedHasBeenSet = false;
  bool m_downloadAllowedHasBeenSet = false;
  bool m_uploadAllowedHasBeenSet = false;
  bool m_printAllowedHasBeenSet = false;
  bool m_disconnectTimeoutInMinutesHasBeenSet = false;
  bool m_idleDisconnectTimeoutInMinutesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_cookieSynchronizationConfigurationHasBeenSet = false;
  bool m_deepLinkAllowedHasBeenSet = false;
  bool m_toolbarConfigurationHasBeenSet = false;
  bool m_brandingConfigurationInputHasBeenSet = false;
  bool m_webAuthnAllowedHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
