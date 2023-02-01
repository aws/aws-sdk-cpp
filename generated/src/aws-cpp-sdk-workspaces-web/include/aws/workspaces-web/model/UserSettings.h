/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>A list of web portal ARNs that this user settings is associated with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedPortalArns() const{ return m_associatedPortalArns; }

    /**
     * <p>A list of web portal ARNs that this user settings is associated with.</p>
     */
    inline bool AssociatedPortalArnsHasBeenSet() const { return m_associatedPortalArnsHasBeenSet; }

    /**
     * <p>A list of web portal ARNs that this user settings is associated with.</p>
     */
    inline void SetAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = value; }

    /**
     * <p>A list of web portal ARNs that this user settings is associated with.</p>
     */
    inline void SetAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = std::move(value); }

    /**
     * <p>A list of web portal ARNs that this user settings is associated with.</p>
     */
    inline UserSettings& WithAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { SetAssociatedPortalArns(value); return *this;}

    /**
     * <p>A list of web portal ARNs that this user settings is associated with.</p>
     */
    inline UserSettings& WithAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { SetAssociatedPortalArns(std::move(value)); return *this;}

    /**
     * <p>A list of web portal ARNs that this user settings is associated with.</p>
     */
    inline UserSettings& AddAssociatedPortalArns(const Aws::String& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }

    /**
     * <p>A list of web portal ARNs that this user settings is associated with.</p>
     */
    inline UserSettings& AddAssociatedPortalArns(Aws::String&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of web portal ARNs that this user settings is associated with.</p>
     */
    inline UserSettings& AddAssociatedPortalArns(const char* value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }


    /**
     * <p>Specifies whether the user can copy text from the streaming session to the
     * local device.</p>
     */
    inline const EnabledType& GetCopyAllowed() const{ return m_copyAllowed; }

    /**
     * <p>Specifies whether the user can copy text from the streaming session to the
     * local device.</p>
     */
    inline bool CopyAllowedHasBeenSet() const { return m_copyAllowedHasBeenSet; }

    /**
     * <p>Specifies whether the user can copy text from the streaming session to the
     * local device.</p>
     */
    inline void SetCopyAllowed(const EnabledType& value) { m_copyAllowedHasBeenSet = true; m_copyAllowed = value; }

    /**
     * <p>Specifies whether the user can copy text from the streaming session to the
     * local device.</p>
     */
    inline void SetCopyAllowed(EnabledType&& value) { m_copyAllowedHasBeenSet = true; m_copyAllowed = std::move(value); }

    /**
     * <p>Specifies whether the user can copy text from the streaming session to the
     * local device.</p>
     */
    inline UserSettings& WithCopyAllowed(const EnabledType& value) { SetCopyAllowed(value); return *this;}

    /**
     * <p>Specifies whether the user can copy text from the streaming session to the
     * local device.</p>
     */
    inline UserSettings& WithCopyAllowed(EnabledType&& value) { SetCopyAllowed(std::move(value)); return *this;}


    /**
     * <p>The amount of time that a streaming session remains active after users
     * disconnect.</p>
     */
    inline int GetDisconnectTimeoutInMinutes() const{ return m_disconnectTimeoutInMinutes; }

    /**
     * <p>The amount of time that a streaming session remains active after users
     * disconnect.</p>
     */
    inline bool DisconnectTimeoutInMinutesHasBeenSet() const { return m_disconnectTimeoutInMinutesHasBeenSet; }

    /**
     * <p>The amount of time that a streaming session remains active after users
     * disconnect.</p>
     */
    inline void SetDisconnectTimeoutInMinutes(int value) { m_disconnectTimeoutInMinutesHasBeenSet = true; m_disconnectTimeoutInMinutes = value; }

    /**
     * <p>The amount of time that a streaming session remains active after users
     * disconnect.</p>
     */
    inline UserSettings& WithDisconnectTimeoutInMinutes(int value) { SetDisconnectTimeoutInMinutes(value); return *this;}


    /**
     * <p>Specifies whether the user can download files from the streaming session to
     * the local device.</p>
     */
    inline const EnabledType& GetDownloadAllowed() const{ return m_downloadAllowed; }

    /**
     * <p>Specifies whether the user can download files from the streaming session to
     * the local device.</p>
     */
    inline bool DownloadAllowedHasBeenSet() const { return m_downloadAllowedHasBeenSet; }

    /**
     * <p>Specifies whether the user can download files from the streaming session to
     * the local device.</p>
     */
    inline void SetDownloadAllowed(const EnabledType& value) { m_downloadAllowedHasBeenSet = true; m_downloadAllowed = value; }

    /**
     * <p>Specifies whether the user can download files from the streaming session to
     * the local device.</p>
     */
    inline void SetDownloadAllowed(EnabledType&& value) { m_downloadAllowedHasBeenSet = true; m_downloadAllowed = std::move(value); }

    /**
     * <p>Specifies whether the user can download files from the streaming session to
     * the local device.</p>
     */
    inline UserSettings& WithDownloadAllowed(const EnabledType& value) { SetDownloadAllowed(value); return *this;}

    /**
     * <p>Specifies whether the user can download files from the streaming session to
     * the local device.</p>
     */
    inline UserSettings& WithDownloadAllowed(EnabledType&& value) { SetDownloadAllowed(std::move(value)); return *this;}


    /**
     * <p>The amount of time that users can be idle (inactive) before they are
     * disconnected from their streaming session and the disconnect timeout interval
     * begins.</p>
     */
    inline int GetIdleDisconnectTimeoutInMinutes() const{ return m_idleDisconnectTimeoutInMinutes; }

    /**
     * <p>The amount of time that users can be idle (inactive) before they are
     * disconnected from their streaming session and the disconnect timeout interval
     * begins.</p>
     */
    inline bool IdleDisconnectTimeoutInMinutesHasBeenSet() const { return m_idleDisconnectTimeoutInMinutesHasBeenSet; }

    /**
     * <p>The amount of time that users can be idle (inactive) before they are
     * disconnected from their streaming session and the disconnect timeout interval
     * begins.</p>
     */
    inline void SetIdleDisconnectTimeoutInMinutes(int value) { m_idleDisconnectTimeoutInMinutesHasBeenSet = true; m_idleDisconnectTimeoutInMinutes = value; }

    /**
     * <p>The amount of time that users can be idle (inactive) before they are
     * disconnected from their streaming session and the disconnect timeout interval
     * begins.</p>
     */
    inline UserSettings& WithIdleDisconnectTimeoutInMinutes(int value) { SetIdleDisconnectTimeoutInMinutes(value); return *this;}


    /**
     * <p>Specifies whether the user can paste text from the local device to the
     * streaming session.</p>
     */
    inline const EnabledType& GetPasteAllowed() const{ return m_pasteAllowed; }

    /**
     * <p>Specifies whether the user can paste text from the local device to the
     * streaming session.</p>
     */
    inline bool PasteAllowedHasBeenSet() const { return m_pasteAllowedHasBeenSet; }

    /**
     * <p>Specifies whether the user can paste text from the local device to the
     * streaming session.</p>
     */
    inline void SetPasteAllowed(const EnabledType& value) { m_pasteAllowedHasBeenSet = true; m_pasteAllowed = value; }

    /**
     * <p>Specifies whether the user can paste text from the local device to the
     * streaming session.</p>
     */
    inline void SetPasteAllowed(EnabledType&& value) { m_pasteAllowedHasBeenSet = true; m_pasteAllowed = std::move(value); }

    /**
     * <p>Specifies whether the user can paste text from the local device to the
     * streaming session.</p>
     */
    inline UserSettings& WithPasteAllowed(const EnabledType& value) { SetPasteAllowed(value); return *this;}

    /**
     * <p>Specifies whether the user can paste text from the local device to the
     * streaming session.</p>
     */
    inline UserSettings& WithPasteAllowed(EnabledType&& value) { SetPasteAllowed(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the user can print to the local device.</p>
     */
    inline const EnabledType& GetPrintAllowed() const{ return m_printAllowed; }

    /**
     * <p>Specifies whether the user can print to the local device.</p>
     */
    inline bool PrintAllowedHasBeenSet() const { return m_printAllowedHasBeenSet; }

    /**
     * <p>Specifies whether the user can print to the local device.</p>
     */
    inline void SetPrintAllowed(const EnabledType& value) { m_printAllowedHasBeenSet = true; m_printAllowed = value; }

    /**
     * <p>Specifies whether the user can print to the local device.</p>
     */
    inline void SetPrintAllowed(EnabledType&& value) { m_printAllowedHasBeenSet = true; m_printAllowed = std::move(value); }

    /**
     * <p>Specifies whether the user can print to the local device.</p>
     */
    inline UserSettings& WithPrintAllowed(const EnabledType& value) { SetPrintAllowed(value); return *this;}

    /**
     * <p>Specifies whether the user can print to the local device.</p>
     */
    inline UserSettings& WithPrintAllowed(EnabledType&& value) { SetPrintAllowed(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the user can upload files from the local device to the
     * streaming session.</p>
     */
    inline const EnabledType& GetUploadAllowed() const{ return m_uploadAllowed; }

    /**
     * <p>Specifies whether the user can upload files from the local device to the
     * streaming session.</p>
     */
    inline bool UploadAllowedHasBeenSet() const { return m_uploadAllowedHasBeenSet; }

    /**
     * <p>Specifies whether the user can upload files from the local device to the
     * streaming session.</p>
     */
    inline void SetUploadAllowed(const EnabledType& value) { m_uploadAllowedHasBeenSet = true; m_uploadAllowed = value; }

    /**
     * <p>Specifies whether the user can upload files from the local device to the
     * streaming session.</p>
     */
    inline void SetUploadAllowed(EnabledType&& value) { m_uploadAllowedHasBeenSet = true; m_uploadAllowed = std::move(value); }

    /**
     * <p>Specifies whether the user can upload files from the local device to the
     * streaming session.</p>
     */
    inline UserSettings& WithUploadAllowed(const EnabledType& value) { SetUploadAllowed(value); return *this;}

    /**
     * <p>Specifies whether the user can upload files from the local device to the
     * streaming session.</p>
     */
    inline UserSettings& WithUploadAllowed(EnabledType&& value) { SetUploadAllowed(std::move(value)); return *this;}


    /**
     * <p>The ARN of the user settings.</p>
     */
    inline const Aws::String& GetUserSettingsArn() const{ return m_userSettingsArn; }

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline bool UserSettingsArnHasBeenSet() const { return m_userSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline void SetUserSettingsArn(const Aws::String& value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn = value; }

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline void SetUserSettingsArn(Aws::String&& value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline void SetUserSettingsArn(const char* value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn.assign(value); }

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline UserSettings& WithUserSettingsArn(const Aws::String& value) { SetUserSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline UserSettings& WithUserSettingsArn(Aws::String&& value) { SetUserSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline UserSettings& WithUserSettingsArn(const char* value) { SetUserSettingsArn(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_associatedPortalArns;
    bool m_associatedPortalArnsHasBeenSet = false;

    EnabledType m_copyAllowed;
    bool m_copyAllowedHasBeenSet = false;

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
