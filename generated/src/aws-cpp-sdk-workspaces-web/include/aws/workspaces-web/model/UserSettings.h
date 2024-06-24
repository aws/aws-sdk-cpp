/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/CookieSynchronizationConfiguration.h>
#include <aws/workspaces-web/model/EnabledType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>A user settings resource that can be associated with a web portal. Once
   * associated with a web portal, user settings control how users can transfer data
   * between a streaming session and the their local devices. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UserSettings">AWS
   * API Reference</a></p>
   */
  class UserSettings
  {
  public:
    AWS_WORKSPACESWEB_API UserSettings();
    AWS_WORKSPACESWEB_API UserSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API UserSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The additional encryption context of the user settings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const{ return m_additionalEncryptionContext; }
    inline bool AdditionalEncryptionContextHasBeenSet() const { return m_additionalEncryptionContextHasBeenSet; }
    inline void SetAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = value; }
    inline void SetAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = std::move(value); }
    inline UserSettings& WithAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalEncryptionContext(value); return *this;}
    inline UserSettings& WithAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalEncryptionContext(std::move(value)); return *this;}
    inline UserSettings& AddAdditionalEncryptionContext(const Aws::String& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }
    inline UserSettings& AddAdditionalEncryptionContext(Aws::String&& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }
    inline UserSettings& AddAdditionalEncryptionContext(const Aws::String& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline UserSettings& AddAdditionalEncryptionContext(Aws::String&& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }
    inline UserSettings& AddAdditionalEncryptionContext(const char* key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline UserSettings& AddAdditionalEncryptionContext(Aws::String&& key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }
    inline UserSettings& AddAdditionalEncryptionContext(const char* key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of web portal ARNs that this user settings is associated with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedPortalArns() const{ return m_associatedPortalArns; }
    inline bool AssociatedPortalArnsHasBeenSet() const { return m_associatedPortalArnsHasBeenSet; }
    inline void SetAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = value; }
    inline void SetAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = std::move(value); }
    inline UserSettings& WithAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { SetAssociatedPortalArns(value); return *this;}
    inline UserSettings& WithAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { SetAssociatedPortalArns(std::move(value)); return *this;}
    inline UserSettings& AddAssociatedPortalArns(const Aws::String& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }
    inline UserSettings& AddAssociatedPortalArns(Aws::String&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(std::move(value)); return *this; }
    inline UserSettings& AddAssociatedPortalArns(const char* value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration that specifies which cookies should be synchronized from
     * the end user's local browser to the remote browser.</p>
     */
    inline const CookieSynchronizationConfiguration& GetCookieSynchronizationConfiguration() const{ return m_cookieSynchronizationConfiguration; }
    inline bool CookieSynchronizationConfigurationHasBeenSet() const { return m_cookieSynchronizationConfigurationHasBeenSet; }
    inline void SetCookieSynchronizationConfiguration(const CookieSynchronizationConfiguration& value) { m_cookieSynchronizationConfigurationHasBeenSet = true; m_cookieSynchronizationConfiguration = value; }
    inline void SetCookieSynchronizationConfiguration(CookieSynchronizationConfiguration&& value) { m_cookieSynchronizationConfigurationHasBeenSet = true; m_cookieSynchronizationConfiguration = std::move(value); }
    inline UserSettings& WithCookieSynchronizationConfiguration(const CookieSynchronizationConfiguration& value) { SetCookieSynchronizationConfiguration(value); return *this;}
    inline UserSettings& WithCookieSynchronizationConfiguration(CookieSynchronizationConfiguration&& value) { SetCookieSynchronizationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user can copy text from the streaming session to the
     * local device.</p>
     */
    inline const EnabledType& GetCopyAllowed() const{ return m_copyAllowed; }
    inline bool CopyAllowedHasBeenSet() const { return m_copyAllowedHasBeenSet; }
    inline void SetCopyAllowed(const EnabledType& value) { m_copyAllowedHasBeenSet = true; m_copyAllowed = value; }
    inline void SetCopyAllowed(EnabledType&& value) { m_copyAllowedHasBeenSet = true; m_copyAllowed = std::move(value); }
    inline UserSettings& WithCopyAllowed(const EnabledType& value) { SetCopyAllowed(value); return *this;}
    inline UserSettings& WithCopyAllowed(EnabledType&& value) { SetCopyAllowed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer managed key used to encrypt sensitive information in the user
     * settings.</p>
     */
    inline const Aws::String& GetCustomerManagedKey() const{ return m_customerManagedKey; }
    inline bool CustomerManagedKeyHasBeenSet() const { return m_customerManagedKeyHasBeenSet; }
    inline void SetCustomerManagedKey(const Aws::String& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = value; }
    inline void SetCustomerManagedKey(Aws::String&& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = std::move(value); }
    inline void SetCustomerManagedKey(const char* value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey.assign(value); }
    inline UserSettings& WithCustomerManagedKey(const Aws::String& value) { SetCustomerManagedKey(value); return *this;}
    inline UserSettings& WithCustomerManagedKey(Aws::String&& value) { SetCustomerManagedKey(std::move(value)); return *this;}
    inline UserSettings& WithCustomerManagedKey(const char* value) { SetCustomerManagedKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user can use deep links that open automatically when
     * connecting to a session.</p>
     */
    inline const EnabledType& GetDeepLinkAllowed() const{ return m_deepLinkAllowed; }
    inline bool DeepLinkAllowedHasBeenSet() const { return m_deepLinkAllowedHasBeenSet; }
    inline void SetDeepLinkAllowed(const EnabledType& value) { m_deepLinkAllowedHasBeenSet = true; m_deepLinkAllowed = value; }
    inline void SetDeepLinkAllowed(EnabledType&& value) { m_deepLinkAllowedHasBeenSet = true; m_deepLinkAllowed = std::move(value); }
    inline UserSettings& WithDeepLinkAllowed(const EnabledType& value) { SetDeepLinkAllowed(value); return *this;}
    inline UserSettings& WithDeepLinkAllowed(EnabledType&& value) { SetDeepLinkAllowed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that a streaming session remains active after users
     * disconnect.</p>
     */
    inline int GetDisconnectTimeoutInMinutes() const{ return m_disconnectTimeoutInMinutes; }
    inline bool DisconnectTimeoutInMinutesHasBeenSet() const { return m_disconnectTimeoutInMinutesHasBeenSet; }
    inline void SetDisconnectTimeoutInMinutes(int value) { m_disconnectTimeoutInMinutesHasBeenSet = true; m_disconnectTimeoutInMinutes = value; }
    inline UserSettings& WithDisconnectTimeoutInMinutes(int value) { SetDisconnectTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user can download files from the streaming session to
     * the local device.</p>
     */
    inline const EnabledType& GetDownloadAllowed() const{ return m_downloadAllowed; }
    inline bool DownloadAllowedHasBeenSet() const { return m_downloadAllowedHasBeenSet; }
    inline void SetDownloadAllowed(const EnabledType& value) { m_downloadAllowedHasBeenSet = true; m_downloadAllowed = value; }
    inline void SetDownloadAllowed(EnabledType&& value) { m_downloadAllowedHasBeenSet = true; m_downloadAllowed = std::move(value); }
    inline UserSettings& WithDownloadAllowed(const EnabledType& value) { SetDownloadAllowed(value); return *this;}
    inline UserSettings& WithDownloadAllowed(EnabledType&& value) { SetDownloadAllowed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that users can be idle (inactive) before they are
     * disconnected from their streaming session and the disconnect timeout interval
     * begins.</p>
     */
    inline int GetIdleDisconnectTimeoutInMinutes() const{ return m_idleDisconnectTimeoutInMinutes; }
    inline bool IdleDisconnectTimeoutInMinutesHasBeenSet() const { return m_idleDisconnectTimeoutInMinutesHasBeenSet; }
    inline void SetIdleDisconnectTimeoutInMinutes(int value) { m_idleDisconnectTimeoutInMinutesHasBeenSet = true; m_idleDisconnectTimeoutInMinutes = value; }
    inline UserSettings& WithIdleDisconnectTimeoutInMinutes(int value) { SetIdleDisconnectTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user can paste text from the local device to the
     * streaming session.</p>
     */
    inline const EnabledType& GetPasteAllowed() const{ return m_pasteAllowed; }
    inline bool PasteAllowedHasBeenSet() const { return m_pasteAllowedHasBeenSet; }
    inline void SetPasteAllowed(const EnabledType& value) { m_pasteAllowedHasBeenSet = true; m_pasteAllowed = value; }
    inline void SetPasteAllowed(EnabledType&& value) { m_pasteAllowedHasBeenSet = true; m_pasteAllowed = std::move(value); }
    inline UserSettings& WithPasteAllowed(const EnabledType& value) { SetPasteAllowed(value); return *this;}
    inline UserSettings& WithPasteAllowed(EnabledType&& value) { SetPasteAllowed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user can print to the local device.</p>
     */
    inline const EnabledType& GetPrintAllowed() const{ return m_printAllowed; }
    inline bool PrintAllowedHasBeenSet() const { return m_printAllowedHasBeenSet; }
    inline void SetPrintAllowed(const EnabledType& value) { m_printAllowedHasBeenSet = true; m_printAllowed = value; }
    inline void SetPrintAllowed(EnabledType&& value) { m_printAllowedHasBeenSet = true; m_printAllowed = std::move(value); }
    inline UserSettings& WithPrintAllowed(const EnabledType& value) { SetPrintAllowed(value); return *this;}
    inline UserSettings& WithPrintAllowed(EnabledType&& value) { SetPrintAllowed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user can upload files from the local device to the
     * streaming session.</p>
     */
    inline const EnabledType& GetUploadAllowed() const{ return m_uploadAllowed; }
    inline bool UploadAllowedHasBeenSet() const { return m_uploadAllowedHasBeenSet; }
    inline void SetUploadAllowed(const EnabledType& value) { m_uploadAllowedHasBeenSet = true; m_uploadAllowed = value; }
    inline void SetUploadAllowed(EnabledType&& value) { m_uploadAllowedHasBeenSet = true; m_uploadAllowed = std::move(value); }
    inline UserSettings& WithUploadAllowed(const EnabledType& value) { SetUploadAllowed(value); return *this;}
    inline UserSettings& WithUploadAllowed(EnabledType&& value) { SetUploadAllowed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user settings.</p>
     */
    inline const Aws::String& GetUserSettingsArn() const{ return m_userSettingsArn; }
    inline bool UserSettingsArnHasBeenSet() const { return m_userSettingsArnHasBeenSet; }
    inline void SetUserSettingsArn(const Aws::String& value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn = value; }
    inline void SetUserSettingsArn(Aws::String&& value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn = std::move(value); }
    inline void SetUserSettingsArn(const char* value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn.assign(value); }
    inline UserSettings& WithUserSettingsArn(const Aws::String& value) { SetUserSettingsArn(value); return *this;}
    inline UserSettings& WithUserSettingsArn(Aws::String&& value) { SetUserSettingsArn(std::move(value)); return *this;}
    inline UserSettings& WithUserSettingsArn(const char* value) { SetUserSettingsArn(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;
    bool m_additionalEncryptionContextHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedPortalArns;
    bool m_associatedPortalArnsHasBeenSet = false;

    CookieSynchronizationConfiguration m_cookieSynchronizationConfiguration;
    bool m_cookieSynchronizationConfigurationHasBeenSet = false;

    EnabledType m_copyAllowed;
    bool m_copyAllowedHasBeenSet = false;

    Aws::String m_customerManagedKey;
    bool m_customerManagedKeyHasBeenSet = false;

    EnabledType m_deepLinkAllowed;
    bool m_deepLinkAllowedHasBeenSet = false;

    int m_disconnectTimeoutInMinutes;
    bool m_disconnectTimeoutInMinutesHasBeenSet = false;

    EnabledType m_downloadAllowed;
    bool m_downloadAllowedHasBeenSet = false;

    int m_idleDisconnectTimeoutInMinutes;
    bool m_idleDisconnectTimeoutInMinutesHasBeenSet = false;

    EnabledType m_pasteAllowed;
    bool m_pasteAllowedHasBeenSet = false;

    EnabledType m_printAllowed;
    bool m_printAllowedHasBeenSet = false;

    EnabledType m_uploadAllowed;
    bool m_uploadAllowedHasBeenSet = false;

    Aws::String m_userSettingsArn;
    bool m_userSettingsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
