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
   * <p>Specifies the status and settings of the email channel for an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EmailChannelRequest">AWS
   * API Reference</a></p>
   */
  class EmailChannelRequest
  {
  public:
    AWS_PINPOINT_API EmailChannelRequest();
    AWS_PINPOINT_API EmailChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EmailChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_ConfigurationSet.html">Amazon
     * SES configuration set</a> that you want to apply to messages that you send
     * through the channel.</p>
     */
    inline const Aws::String& GetConfigurationSet() const{ return m_configurationSet; }
    inline bool ConfigurationSetHasBeenSet() const { return m_configurationSetHasBeenSet; }
    inline void SetConfigurationSet(const Aws::String& value) { m_configurationSetHasBeenSet = true; m_configurationSet = value; }
    inline void SetConfigurationSet(Aws::String&& value) { m_configurationSetHasBeenSet = true; m_configurationSet = std::move(value); }
    inline void SetConfigurationSet(const char* value) { m_configurationSetHasBeenSet = true; m_configurationSet.assign(value); }
    inline EmailChannelRequest& WithConfigurationSet(const Aws::String& value) { SetConfigurationSet(value); return *this;}
    inline EmailChannelRequest& WithConfigurationSet(Aws::String&& value) { SetConfigurationSet(std::move(value)); return *this;}
    inline EmailChannelRequest& WithConfigurationSet(const char* value) { SetConfigurationSet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable the email channel for the application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline EmailChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verified email address that you want to send email from when you send
     * email through the channel.</p>
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }
    inline void SetFromAddress(const Aws::String& value) { m_fromAddressHasBeenSet = true; m_fromAddress = value; }
    inline void SetFromAddress(Aws::String&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::move(value); }
    inline void SetFromAddress(const char* value) { m_fromAddressHasBeenSet = true; m_fromAddress.assign(value); }
    inline EmailChannelRequest& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}
    inline EmailChannelRequest& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}
    inline EmailChannelRequest& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you want to use when you send email through the
     * channel.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }
    inline EmailChannelRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}
    inline EmailChannelRequest& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}
    inline EmailChannelRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that you want
     * Amazon Pinpoint to use when it submits email-related event data for the
     * channel.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline EmailChannelRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline EmailChannelRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline EmailChannelRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
    inline EmailChannelRequest& WithOrchestrationSendingRoleArn(const Aws::String& value) { SetOrchestrationSendingRoleArn(value); return *this;}
    inline EmailChannelRequest& WithOrchestrationSendingRoleArn(Aws::String&& value) { SetOrchestrationSendingRoleArn(std::move(value)); return *this;}
    inline EmailChannelRequest& WithOrchestrationSendingRoleArn(const char* value) { SetOrchestrationSendingRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationSet;
    bool m_configurationSetHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_fromAddress;
    bool m_fromAddressHasBeenSet = false;

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_orchestrationSendingRoleArn;
    bool m_orchestrationSendingRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
