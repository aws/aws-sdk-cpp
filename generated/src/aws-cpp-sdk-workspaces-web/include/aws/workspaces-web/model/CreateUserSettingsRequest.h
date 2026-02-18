/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/BrandingConfigurationCreateInput.h>
#include <aws/workspaces-web/model/CookieSynchronizationConfiguration.h>
#include <aws/workspaces-web/model/EnabledType.h>
#include <aws/workspaces-web/model/Tag.h>
#include <aws/workspaces-web/model/ToolbarConfiguration.h>

#include <utility>

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {

/**
 */
class CreateUserSettingsRequest : public WorkSpacesWebRequest {
 public:
  AWS_WORKSPACESWEB_API CreateUserSettingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateUserSettings"; }

  AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;

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
  inline CreateUserSettingsRequest& WithCopyAllowed(EnabledType value) {
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
  inline CreateUserSettingsRequest& WithPasteAllowed(EnabledType value) {
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
  inline CreateUserSettingsRequest& WithDownloadAllowed(EnabledType value) {
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
  inline CreateUserSettingsRequest& WithUploadAllowed(EnabledType value) {
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
  inline CreateUserSettingsRequest& WithPrintAllowed(EnabledType value) {
    SetPrintAllowed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to add to the user settings resource. A tag is a key-value pair.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateUserSettingsRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateUserSettingsRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
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
  inline CreateUserSettingsRequest& WithDisconnectTimeoutInMinutes(int value) {
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
  inline CreateUserSettingsRequest& WithIdleDisconnectTimeoutInMinutes(int value) {
    SetIdleDisconnectTimeoutInMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. Idempotency ensures that an API request completes
   * only once. With an idempotent request, if the original request completes
   * successfully, subsequent retries with the same client token returns the result
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
  CreateUserSettingsRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that specifies which cookies should be synchronized from
   * the end user's local browser to the remote browser.</p>
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
  CreateUserSettingsRequest& WithCookieSynchronizationConfiguration(CookieSynchronizationConfigurationT&& value) {
    SetCookieSynchronizationConfiguration(std::forward<CookieSynchronizationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer managed key used to encrypt sensitive information in the user
   * settings.</p>
   */
  inline const Aws::String& GetCustomerManagedKey() const { return m_customerManagedKey; }
  inline bool CustomerManagedKeyHasBeenSet() const { return m_customerManagedKeyHasBeenSet; }
  template <typename CustomerManagedKeyT = Aws::String>
  void SetCustomerManagedKey(CustomerManagedKeyT&& value) {
    m_customerManagedKeyHasBeenSet = true;
    m_customerManagedKey = std::forward<CustomerManagedKeyT>(value);
  }
  template <typename CustomerManagedKeyT = Aws::String>
  CreateUserSettingsRequest& WithCustomerManagedKey(CustomerManagedKeyT&& value) {
    SetCustomerManagedKey(std::forward<CustomerManagedKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The additional encryption context of the user settings.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const { return m_additionalEncryptionContext; }
  inline bool AdditionalEncryptionContextHasBeenSet() const { return m_additionalEncryptionContextHasBeenSet; }
  template <typename AdditionalEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  void SetAdditionalEncryptionContext(AdditionalEncryptionContextT&& value) {
    m_additionalEncryptionContextHasBeenSet = true;
    m_additionalEncryptionContext = std::forward<AdditionalEncryptionContextT>(value);
  }
  template <typename AdditionalEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  CreateUserSettingsRequest& WithAdditionalEncryptionContext(AdditionalEncryptionContextT&& value) {
    SetAdditionalEncryptionContext(std::forward<AdditionalEncryptionContextT>(value));
    return *this;
  }
  template <typename AdditionalEncryptionContextKeyT = Aws::String, typename AdditionalEncryptionContextValueT = Aws::String>
  CreateUserSettingsRequest& AddAdditionalEncryptionContext(AdditionalEncryptionContextKeyT&& key,
                                                            AdditionalEncryptionContextValueT&& value) {
    m_additionalEncryptionContextHasBeenSet = true;
    m_additionalEncryptionContext.emplace(std::forward<AdditionalEncryptionContextKeyT>(key),
                                          std::forward<AdditionalEncryptionContextValueT>(value));
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
  inline CreateUserSettingsRequest& WithDeepLinkAllowed(EnabledType value) {
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
  CreateUserSettingsRequest& WithToolbarConfiguration(ToolbarConfigurationT&& value) {
    SetToolbarConfiguration(std::forward<ToolbarConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The branding configuration input that customizes the appearance of the web
   * portal for end users. This includes a custom logo, favicon, localized strings,
   * color theme, and optionally a wallpaper and terms of service.</p>
   */
  inline const BrandingConfigurationCreateInput& GetBrandingConfigurationInput() const { return m_brandingConfigurationInput; }
  inline bool BrandingConfigurationInputHasBeenSet() const { return m_brandingConfigurationInputHasBeenSet; }
  template <typename BrandingConfigurationInputT = BrandingConfigurationCreateInput>
  void SetBrandingConfigurationInput(BrandingConfigurationInputT&& value) {
    m_brandingConfigurationInputHasBeenSet = true;
    m_brandingConfigurationInput = std::forward<BrandingConfigurationInputT>(value);
  }
  template <typename BrandingConfigurationInputT = BrandingConfigurationCreateInput>
  CreateUserSettingsRequest& WithBrandingConfigurationInput(BrandingConfigurationInputT&& value) {
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
  inline CreateUserSettingsRequest& WithWebAuthnAllowed(EnabledType value) {
    SetWebAuthnAllowed(value);
    return *this;
  }
  ///@}
 private:
  EnabledType m_copyAllowed{EnabledType::NOT_SET};

  EnabledType m_pasteAllowed{EnabledType::NOT_SET};

  EnabledType m_downloadAllowed{EnabledType::NOT_SET};

  EnabledType m_uploadAllowed{EnabledType::NOT_SET};

  EnabledType m_printAllowed{EnabledType::NOT_SET};

  Aws::Vector<Tag> m_tags;

  int m_disconnectTimeoutInMinutes{0};

  int m_idleDisconnectTimeoutInMinutes{0};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  CookieSynchronizationConfiguration m_cookieSynchronizationConfiguration;

  Aws::String m_customerManagedKey;

  Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;

  EnabledType m_deepLinkAllowed{EnabledType::NOT_SET};

  ToolbarConfiguration m_toolbarConfiguration;

  BrandingConfigurationCreateInput m_brandingConfigurationInput;

  EnabledType m_webAuthnAllowed{EnabledType::NOT_SET};
  bool m_copyAllowedHasBeenSet = false;
  bool m_pasteAllowedHasBeenSet = false;
  bool m_downloadAllowedHasBeenSet = false;
  bool m_uploadAllowedHasBeenSet = false;
  bool m_printAllowedHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_disconnectTimeoutInMinutesHasBeenSet = false;
  bool m_idleDisconnectTimeoutInMinutesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_cookieSynchronizationConfigurationHasBeenSet = false;
  bool m_customerManagedKeyHasBeenSet = false;
  bool m_additionalEncryptionContextHasBeenSet = false;
  bool m_deepLinkAllowedHasBeenSet = false;
  bool m_toolbarConfigurationHasBeenSet = false;
  bool m_brandingConfigurationInputHasBeenSet = false;
  bool m_webAuthnAllowedHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
