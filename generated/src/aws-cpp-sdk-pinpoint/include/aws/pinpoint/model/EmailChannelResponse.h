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
   * <p>Provides information about the status and settings of the email channel for
   * an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EmailChannelResponse">AWS
   * API Reference</a></p>
   */
  class EmailChannelResponse
  {
  public:
    AWS_PINPOINT_API EmailChannelResponse();
    AWS_PINPOINT_API EmailChannelResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EmailChannelResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application that the email channel applies
     * to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline EmailChannelResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline EmailChannelResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline EmailChannelResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_ConfigurationSet.html">Amazon
     * SES configuration set</a> that's applied to messages that are sent through the
     * channel.</p>
     */
    inline const Aws::String& GetConfigurationSet() const{ return m_configurationSet; }
    inline bool ConfigurationSetHasBeenSet() const { return m_configurationSetHasBeenSet; }
    inline void SetConfigurationSet(const Aws::String& value) { m_configurationSetHasBeenSet = true; m_configurationSet = value; }
    inline void SetConfigurationSet(Aws::String&& value) { m_configurationSetHasBeenSet = true; m_configurationSet = std::move(value); }
    inline void SetConfigurationSet(const char* value) { m_configurationSetHasBeenSet = true; m_configurationSet.assign(value); }
    inline EmailChannelResponse& WithConfigurationSet(const Aws::String& value) { SetConfigurationSet(value); return *this;}
    inline EmailChannelResponse& WithConfigurationSet(Aws::String&& value) { SetConfigurationSet(std::move(value)); return *this;}
    inline EmailChannelResponse& WithConfigurationSet(const char* value) { SetConfigurationSet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was
     * enabled.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }
    inline EmailChannelResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}
    inline EmailChannelResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}
    inline EmailChannelResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the email channel is enabled for the application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline EmailChannelResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verified email address that email is sent from when you send email
     * through the channel.</p>
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }
    inline void SetFromAddress(const Aws::String& value) { m_fromAddressHasBeenSet = true; m_fromAddress = value; }
    inline void SetFromAddress(Aws::String&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::move(value); }
    inline void SetFromAddress(const char* value) { m_fromAddressHasBeenSet = true; m_fromAddress.assign(value); }
    inline EmailChannelResponse& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}
    inline EmailChannelResponse& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}
    inline EmailChannelResponse& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Not used) This property is retained only for backward compatibility.</p>
     */
    inline bool GetHasCredential() const{ return m_hasCredential; }
    inline bool HasCredentialHasBeenSet() const { return m_hasCredentialHasBeenSet; }
    inline void SetHasCredential(bool value) { m_hasCredentialHasBeenSet = true; m_hasCredential = value; }
    inline EmailChannelResponse& WithHasCredential(bool value) { SetHasCredential(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Deprecated) An identifier for the email channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline EmailChannelResponse& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline EmailChannelResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline EmailChannelResponse& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that's used when you send email through the
     * channel.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }
    inline EmailChannelResponse& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}
    inline EmailChannelResponse& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}
    inline EmailChannelResponse& WithIdentity(const char* value) { SetIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the email channel is archived.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }
    inline EmailChannelResponse& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who last modified the email channel.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }
    inline EmailChannelResponse& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}
    inline EmailChannelResponse& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    inline EmailChannelResponse& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was last
     * modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }
    inline EmailChannelResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}
    inline EmailChannelResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    inline EmailChannelResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of emails that can be sent through the channel each
     * second.</p>
     */
    inline int GetMessagesPerSecond() const{ return m_messagesPerSecond; }
    inline bool MessagesPerSecondHasBeenSet() const { return m_messagesPerSecondHasBeenSet; }
    inline void SetMessagesPerSecond(int value) { m_messagesPerSecondHasBeenSet = true; m_messagesPerSecond = value; }
    inline EmailChannelResponse& WithMessagesPerSecond(int value) { SetMessagesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of messaging or notification platform for the channel. For the email
     * channel, this value is EMAIL.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline EmailChannelResponse& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline EmailChannelResponse& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline EmailChannelResponse& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Pinpoint uses to submit email-related event data for the channel.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline EmailChannelResponse& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline EmailChannelResponse& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline EmailChannelResponse& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an IAM role for Amazon Pinpoint to use to send email from your
     * campaigns or journeys through Amazon SES.</p>
     */
    inline const Aws::String& GetOrchestrationSendingRoleArn() const{ return m_orchestrationSendingRoleArn; }
    inline bool OrchestrationSendingRoleArnHasBeenSet() const { return m_orchestrationSendingRoleArnHasBeenSet; }
    inline void SetOrchestrationSendingRoleArn(const Aws::String& value) { m_orchestrationSendingRoleArnHasBeenSet = true; m_orchestrationSendingRoleArn = value; }
    inline void SetOrchestrationSendingRoleArn(Aws::String&& value) { m_orchestrationSendingRoleArnHasBeenSet = true; m_orchestrationSendingRoleArn = std::move(value); }
    inline void SetOrchestrationSendingRoleArn(const char* value) { m_orchestrationSendingRoleArnHasBeenSet = true; m_orchestrationSendingRoleArn.assign(value); }
    inline EmailChannelResponse& WithOrchestrationSendingRoleArn(const Aws::String& value) { SetOrchestrationSendingRoleArn(value); return *this;}
    inline EmailChannelResponse& WithOrchestrationSendingRoleArn(Aws::String&& value) { SetOrchestrationSendingRoleArn(std::move(value)); return *this;}
    inline EmailChannelResponse& WithOrchestrationSendingRoleArn(const char* value) { SetOrchestrationSendingRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the email channel.</p>
     */
    inline int GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline EmailChannelResponse& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_configurationSet;
    bool m_configurationSetHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_fromAddress;
    bool m_fromAddressHasBeenSet = false;

    bool m_hasCredential;
    bool m_hasCredentialHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;

    bool m_isArchived;
    bool m_isArchivedHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    int m_messagesPerSecond;
    bool m_messagesPerSecondHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_orchestrationSendingRoleArn;
    bool m_orchestrationSendingRoleArnHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
