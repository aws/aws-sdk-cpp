/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about the status and settings of the GCM channel for an
   * application. The GCM channel enables Amazon Pinpoint to send push notifications
   * through the Firebase Cloud Messaging (FCM), formerly Google Cloud Messaging
   * (GCM), service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GCMChannelResponse">AWS
   * API Reference</a></p>
   */
  class GCMChannelResponse
  {
  public:
    AWS_PINPOINT_API GCMChannelResponse() = default;
    AWS_PINPOINT_API GCMChannelResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API GCMChannelResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application that the GCM channel applies
     * to.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GCMChannelResponse& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the GCM channel was enabled.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    GCMChannelResponse& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Web API Key, also referred to as an <i>API_KEY</i> or <i>server key</i>,
     * that you received from Google to communicate with Google services.</p>
     */
    inline const Aws::String& GetCredential() const { return m_credential; }
    inline bool CredentialHasBeenSet() const { return m_credentialHasBeenSet; }
    template<typename CredentialT = Aws::String>
    void SetCredential(CredentialT&& value) { m_credentialHasBeenSet = true; m_credential = std::forward<CredentialT>(value); }
    template<typename CredentialT = Aws::String>
    GCMChannelResponse& WithCredential(CredentialT&& value) { SetCredential(std::forward<CredentialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default authentication method used for GCM. Values are either "TOKEN" or
     * "KEY". Defaults to "KEY".</p>
     */
    inline const Aws::String& GetDefaultAuthenticationMethod() const { return m_defaultAuthenticationMethod; }
    inline bool DefaultAuthenticationMethodHasBeenSet() const { return m_defaultAuthenticationMethodHasBeenSet; }
    template<typename DefaultAuthenticationMethodT = Aws::String>
    void SetDefaultAuthenticationMethod(DefaultAuthenticationMethodT&& value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod = std::forward<DefaultAuthenticationMethodT>(value); }
    template<typename DefaultAuthenticationMethodT = Aws::String>
    GCMChannelResponse& WithDefaultAuthenticationMethod(DefaultAuthenticationMethodT&& value) { SetDefaultAuthenticationMethod(std::forward<DefaultAuthenticationMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the GCM channel is enabled for the application.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline GCMChannelResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Not used) This property is retained only for backward compatibility.</p>
     */
    inline bool GetHasCredential() const { return m_hasCredential; }
    inline bool HasCredentialHasBeenSet() const { return m_hasCredentialHasBeenSet; }
    inline void SetHasCredential(bool value) { m_hasCredentialHasBeenSet = true; m_hasCredential = value; }
    inline GCMChannelResponse& WithHasCredential(bool value) { SetHasCredential(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns true if the JSON file provided by Google during registration process
     * was used in the <b>ServiceJson</b> field of the request.</p>
     */
    inline bool GetHasFcmServiceCredentials() const { return m_hasFcmServiceCredentials; }
    inline bool HasFcmServiceCredentialsHasBeenSet() const { return m_hasFcmServiceCredentialsHasBeenSet; }
    inline void SetHasFcmServiceCredentials(bool value) { m_hasFcmServiceCredentialsHasBeenSet = true; m_hasFcmServiceCredentials = value; }
    inline GCMChannelResponse& WithHasFcmServiceCredentials(bool value) { SetHasFcmServiceCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Deprecated) An identifier for the GCM channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GCMChannelResponse& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the GCM channel is archived.</p>
     */
    inline bool GetIsArchived() const { return m_isArchived; }
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }
    inline GCMChannelResponse& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who last modified the GCM channel.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    template<typename LastModifiedByT = Aws::String>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = Aws::String>
    GCMChannelResponse& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the GCM channel was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::String>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::String>
    GCMChannelResponse& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of messaging or notification platform for the channel. For the GCM
     * channel, this value is GCM.</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    GCMChannelResponse& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the GCM channel.</p>
     */
    inline int GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline GCMChannelResponse& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_credential;
    bool m_credentialHasBeenSet = false;

    Aws::String m_defaultAuthenticationMethod;
    bool m_defaultAuthenticationMethodHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    bool m_hasCredential{false};
    bool m_hasCredentialHasBeenSet = false;

    bool m_hasFcmServiceCredentials{false};
    bool m_hasFcmServiceCredentialsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_isArchived{false};
    bool m_isArchivedHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    int m_version{0};
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
