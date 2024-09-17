/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
   * <p>The summary of user settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UserSettingsSummary">AWS
   * API Reference</a></p>
   */
  class UserSettingsSummary
  {
  public:
    AWS_WORKSPACESWEB_API UserSettingsSummary();
    AWS_WORKSPACESWEB_API UserSettingsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API UserSettingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration that specifies which cookies should be synchronized from
     * the end user's local browser to the remote browser.</p>
     */
    inline const CookieSynchronizationConfiguration& GetCookieSynchronizationConfiguration() const{ return m_cookieSynchronizationConfiguration; }
    inline bool CookieSynchronizationConfigurationHasBeenSet() const { return m_cookieSynchronizationConfigurationHasBeenSet; }
    inline void SetCookieSynchronizationConfiguration(const CookieSynchronizationConfiguration& value) { m_cookieSynchronizationConfigurationHasBeenSet = true; m_cookieSynchronizationConfiguration = value; }
    inline void SetCookieSynchronizationConfiguration(CookieSynchronizationConfiguration&& value) { m_cookieSynchronizationConfigurationHasBeenSet = true; m_cookieSynchronizationConfiguration = std::move(value); }
    inline UserSettingsSummary& WithCookieSynchronizationConfiguration(const CookieSynchronizationConfiguration& value) { SetCookieSynchronizationConfiguration(value); return *this;}
    inline UserSettingsSummary& WithCookieSynchronizationConfiguration(CookieSynchronizationConfiguration&& value) { SetCookieSynchronizationConfiguration(std::move(value)); return *this;}
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
    inline UserSettingsSummary& WithCopyAllowed(const EnabledType& value) { SetCopyAllowed(value); return *this;}
    inline UserSettingsSummary& WithCopyAllowed(EnabledType&& value) { SetCopyAllowed(std::move(value)); return *this;}
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
    inline UserSettingsSummary& WithDeepLinkAllowed(const EnabledType& value) { SetDeepLinkAllowed(value); return *this;}
    inline UserSettingsSummary& WithDeepLinkAllowed(EnabledType&& value) { SetDeepLinkAllowed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that a streaming session remains active after users
     * disconnect.</p>
     */
    inline int GetDisconnectTimeoutInMinutes() const{ return m_disconnectTimeoutInMinutes; }
    inline bool DisconnectTimeoutInMinutesHasBeenSet() const { return m_disconnectTimeoutInMinutesHasBeenSet; }
    inline void SetDisconnectTimeoutInMinutes(int value) { m_disconnectTimeoutInMinutesHasBeenSet = true; m_disconnectTimeoutInMinutes = value; }
    inline UserSettingsSummary& WithDisconnectTimeoutInMinutes(int value) { SetDisconnectTimeoutInMinutes(value); return *this;}
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
    inline UserSettingsSummary& WithDownloadAllowed(const EnabledType& value) { SetDownloadAllowed(value); return *this;}
    inline UserSettingsSummary& WithDownloadAllowed(EnabledType&& value) { SetDownloadAllowed(std::move(value)); return *this;}
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
    inline UserSettingsSummary& WithIdleDisconnectTimeoutInMinutes(int value) { SetIdleDisconnectTimeoutInMinutes(value); return *this;}
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
    inline UserSettingsSummary& WithPasteAllowed(const EnabledType& value) { SetPasteAllowed(value); return *this;}
    inline UserSettingsSummary& WithPasteAllowed(EnabledType&& value) { SetPasteAllowed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user can print to the local device.</p>
     */
    inline const EnabledType& GetPrintAllowed() const{ return m_printAllowed; }
    inline bool PrintAllowedHasBeenSet() const { return m_printAllowedHasBeenSet; }
    inline void SetPrintAllowed(const EnabledType& value) { m_printAllowedHasBeenSet = true; m_printAllowed = value; }
    inline void SetPrintAllowed(EnabledType&& value) { m_printAllowedHasBeenSet = true; m_printAllowed = std::move(value); }
    inline UserSettingsSummary& WithPrintAllowed(const EnabledType& value) { SetPrintAllowed(value); return *this;}
    inline UserSettingsSummary& WithPrintAllowed(EnabledType&& value) { SetPrintAllowed(std::move(value)); return *this;}
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
    inline UserSettingsSummary& WithUploadAllowed(const EnabledType& value) { SetUploadAllowed(value); return *this;}
    inline UserSettingsSummary& WithUploadAllowed(EnabledType&& value) { SetUploadAllowed(std::move(value)); return *this;}
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
    inline UserSettingsSummary& WithUserSettingsArn(const Aws::String& value) { SetUserSettingsArn(value); return *this;}
    inline UserSettingsSummary& WithUserSettingsArn(Aws::String&& value) { SetUserSettingsArn(std::move(value)); return *this;}
    inline UserSettingsSummary& WithUserSettingsArn(const char* value) { SetUserSettingsArn(value); return *this;}
    ///@}
  private:

    CookieSynchronizationConfiguration m_cookieSynchronizationConfiguration;
    bool m_cookieSynchronizationConfigurationHasBeenSet = false;

    EnabledType m_copyAllowed;
    bool m_copyAllowedHasBeenSet = false;

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
