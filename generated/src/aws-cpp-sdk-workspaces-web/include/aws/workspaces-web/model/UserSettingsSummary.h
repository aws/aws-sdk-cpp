/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/EnabledType.h>
#include <aws/workspaces-web/model/CookieSynchronizationConfiguration.h>
#include <aws/workspaces-web/model/ToolbarConfiguration.h>
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
    AWS_WORKSPACESWEB_API UserSettingsSummary() = default;
    AWS_WORKSPACESWEB_API UserSettingsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API UserSettingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the user settings.</p>
     */
    inline const Aws::String& GetUserSettingsArn() const { return m_userSettingsArn; }
    inline bool UserSettingsArnHasBeenSet() const { return m_userSettingsArnHasBeenSet; }
    template<typename UserSettingsArnT = Aws::String>
    void SetUserSettingsArn(UserSettingsArnT&& value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn = std::forward<UserSettingsArnT>(value); }
    template<typename UserSettingsArnT = Aws::String>
    UserSettingsSummary& WithUserSettingsArn(UserSettingsArnT&& value) { SetUserSettingsArn(std::forward<UserSettingsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user can copy text from the streaming session to the
     * local device.</p>
     */
    inline EnabledType GetCopyAllowed() const { return m_copyAllowed; }
    inline bool CopyAllowedHasBeenSet() const { return m_copyAllowedHasBeenSet; }
    inline void SetCopyAllowed(EnabledType value) { m_copyAllowedHasBeenSet = true; m_copyAllowed = value; }
    inline UserSettingsSummary& WithCopyAllowed(EnabledType value) { SetCopyAllowed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user can paste text from the local device to the
     * streaming session.</p>
     */
    inline EnabledType GetPasteAllowed() const { return m_pasteAllowed; }
    inline bool PasteAllowedHasBeenSet() const { return m_pasteAllowedHasBeenSet; }
    inline void SetPasteAllowed(EnabledType value) { m_pasteAllowedHasBeenSet = true; m_pasteAllowed = value; }
    inline UserSettingsSummary& WithPasteAllowed(EnabledType value) { SetPasteAllowed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user can download files from the streaming session to
     * the local device.</p>
     */
    inline EnabledType GetDownloadAllowed() const { return m_downloadAllowed; }
    inline bool DownloadAllowedHasBeenSet() const { return m_downloadAllowedHasBeenSet; }
    inline void SetDownloadAllowed(EnabledType value) { m_downloadAllowedHasBeenSet = true; m_downloadAllowed = value; }
    inline UserSettingsSummary& WithDownloadAllowed(EnabledType value) { SetDownloadAllowed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user can upload files from the local device to the
     * streaming session.</p>
     */
    inline EnabledType GetUploadAllowed() const { return m_uploadAllowed; }
    inline bool UploadAllowedHasBeenSet() const { return m_uploadAllowedHasBeenSet; }
    inline void SetUploadAllowed(EnabledType value) { m_uploadAllowedHasBeenSet = true; m_uploadAllowed = value; }
    inline UserSettingsSummary& WithUploadAllowed(EnabledType value) { SetUploadAllowed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user can print to the local device.</p>
     */
    inline EnabledType GetPrintAllowed() const { return m_printAllowed; }
    inline bool PrintAllowedHasBeenSet() const { return m_printAllowedHasBeenSet; }
    inline void SetPrintAllowed(EnabledType value) { m_printAllowedHasBeenSet = true; m_printAllowed = value; }
    inline UserSettingsSummary& WithPrintAllowed(EnabledType value) { SetPrintAllowed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that a streaming session remains active after users
     * disconnect.</p>
     */
    inline int GetDisconnectTimeoutInMinutes() const { return m_disconnectTimeoutInMinutes; }
    inline bool DisconnectTimeoutInMinutesHasBeenSet() const { return m_disconnectTimeoutInMinutesHasBeenSet; }
    inline void SetDisconnectTimeoutInMinutes(int value) { m_disconnectTimeoutInMinutesHasBeenSet = true; m_disconnectTimeoutInMinutes = value; }
    inline UserSettingsSummary& WithDisconnectTimeoutInMinutes(int value) { SetDisconnectTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that users can be idle (inactive) before they are
     * disconnected from their streaming session and the disconnect timeout interval
     * begins.</p>
     */
    inline int GetIdleDisconnectTimeoutInMinutes() const { return m_idleDisconnectTimeoutInMinutes; }
    inline bool IdleDisconnectTimeoutInMinutesHasBeenSet() const { return m_idleDisconnectTimeoutInMinutesHasBeenSet; }
    inline void SetIdleDisconnectTimeoutInMinutes(int value) { m_idleDisconnectTimeoutInMinutesHasBeenSet = true; m_idleDisconnectTimeoutInMinutes = value; }
    inline UserSettingsSummary& WithIdleDisconnectTimeoutInMinutes(int value) { SetIdleDisconnectTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that specifies which cookies should be synchronized from
     * the end user's local browser to the remote browser.</p>
     */
    inline const CookieSynchronizationConfiguration& GetCookieSynchronizationConfiguration() const { return m_cookieSynchronizationConfiguration; }
    inline bool CookieSynchronizationConfigurationHasBeenSet() const { return m_cookieSynchronizationConfigurationHasBeenSet; }
    template<typename CookieSynchronizationConfigurationT = CookieSynchronizationConfiguration>
    void SetCookieSynchronizationConfiguration(CookieSynchronizationConfigurationT&& value) { m_cookieSynchronizationConfigurationHasBeenSet = true; m_cookieSynchronizationConfiguration = std::forward<CookieSynchronizationConfigurationT>(value); }
    template<typename CookieSynchronizationConfigurationT = CookieSynchronizationConfiguration>
    UserSettingsSummary& WithCookieSynchronizationConfiguration(CookieSynchronizationConfigurationT&& value) { SetCookieSynchronizationConfiguration(std::forward<CookieSynchronizationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user can use deep links that open automatically when
     * connecting to a session.</p>
     */
    inline EnabledType GetDeepLinkAllowed() const { return m_deepLinkAllowed; }
    inline bool DeepLinkAllowedHasBeenSet() const { return m_deepLinkAllowedHasBeenSet; }
    inline void SetDeepLinkAllowed(EnabledType value) { m_deepLinkAllowedHasBeenSet = true; m_deepLinkAllowed = value; }
    inline UserSettingsSummary& WithDeepLinkAllowed(EnabledType value) { SetDeepLinkAllowed(value); return *this;}
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
    template<typename ToolbarConfigurationT = ToolbarConfiguration>
    void SetToolbarConfiguration(ToolbarConfigurationT&& value) { m_toolbarConfigurationHasBeenSet = true; m_toolbarConfiguration = std::forward<ToolbarConfigurationT>(value); }
    template<typename ToolbarConfigurationT = ToolbarConfiguration>
    UserSettingsSummary& WithToolbarConfiguration(ToolbarConfigurationT&& value) { SetToolbarConfiguration(std::forward<ToolbarConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userSettingsArn;
    bool m_userSettingsArnHasBeenSet = false;

    EnabledType m_copyAllowed{EnabledType::NOT_SET};
    bool m_copyAllowedHasBeenSet = false;

    EnabledType m_pasteAllowed{EnabledType::NOT_SET};
    bool m_pasteAllowedHasBeenSet = false;

    EnabledType m_downloadAllowed{EnabledType::NOT_SET};
    bool m_downloadAllowedHasBeenSet = false;

    EnabledType m_uploadAllowed{EnabledType::NOT_SET};
    bool m_uploadAllowedHasBeenSet = false;

    EnabledType m_printAllowed{EnabledType::NOT_SET};
    bool m_printAllowedHasBeenSet = false;

    int m_disconnectTimeoutInMinutes{0};
    bool m_disconnectTimeoutInMinutesHasBeenSet = false;

    int m_idleDisconnectTimeoutInMinutes{0};
    bool m_idleDisconnectTimeoutInMinutesHasBeenSet = false;

    CookieSynchronizationConfiguration m_cookieSynchronizationConfiguration;
    bool m_cookieSynchronizationConfigurationHasBeenSet = false;

    EnabledType m_deepLinkAllowed{EnabledType::NOT_SET};
    bool m_deepLinkAllowedHasBeenSet = false;

    ToolbarConfiguration m_toolbarConfiguration;
    bool m_toolbarConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
