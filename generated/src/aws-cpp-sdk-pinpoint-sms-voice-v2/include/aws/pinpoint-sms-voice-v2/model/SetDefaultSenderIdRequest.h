/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class SetDefaultSenderIdRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SetDefaultSenderIdRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetDefaultSenderId"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The configuration set to updated with a new default SenderId. This field can
     * be the ConsigurationSetName or ConfigurationSetArn.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The configuration set to updated with a new default SenderId. This field can
     * be the ConsigurationSetName or ConfigurationSetArn.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The configuration set to updated with a new default SenderId. This field can
     * be the ConsigurationSetName or ConfigurationSetArn.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The configuration set to updated with a new default SenderId. This field can
     * be the ConsigurationSetName or ConfigurationSetArn.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The configuration set to updated with a new default SenderId. This field can
     * be the ConsigurationSetName or ConfigurationSetArn.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The configuration set to updated with a new default SenderId. This field can
     * be the ConsigurationSetName or ConfigurationSetArn.</p>
     */
    inline SetDefaultSenderIdRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The configuration set to updated with a new default SenderId. This field can
     * be the ConsigurationSetName or ConfigurationSetArn.</p>
     */
    inline SetDefaultSenderIdRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The configuration set to updated with a new default SenderId. This field can
     * be the ConsigurationSetName or ConfigurationSetArn.</p>
     */
    inline SetDefaultSenderIdRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>The current sender ID for the configuration set. When sending a text message
     * to a destination country which supports SenderIds, the default sender ID on the
     * configuration set specified on <a>SendTextMessage</a> will be used if no
     * dedicated origination phone numbers or registered SenderIds are available in
     * your account, instead of a generic sender ID, such as 'NOTICE'.</p>
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }

    /**
     * <p>The current sender ID for the configuration set. When sending a text message
     * to a destination country which supports SenderIds, the default sender ID on the
     * configuration set specified on <a>SendTextMessage</a> will be used if no
     * dedicated origination phone numbers or registered SenderIds are available in
     * your account, instead of a generic sender ID, such as 'NOTICE'.</p>
     */
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }

    /**
     * <p>The current sender ID for the configuration set. When sending a text message
     * to a destination country which supports SenderIds, the default sender ID on the
     * configuration set specified on <a>SendTextMessage</a> will be used if no
     * dedicated origination phone numbers or registered SenderIds are available in
     * your account, instead of a generic sender ID, such as 'NOTICE'.</p>
     */
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }

    /**
     * <p>The current sender ID for the configuration set. When sending a text message
     * to a destination country which supports SenderIds, the default sender ID on the
     * configuration set specified on <a>SendTextMessage</a> will be used if no
     * dedicated origination phone numbers or registered SenderIds are available in
     * your account, instead of a generic sender ID, such as 'NOTICE'.</p>
     */
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }

    /**
     * <p>The current sender ID for the configuration set. When sending a text message
     * to a destination country which supports SenderIds, the default sender ID on the
     * configuration set specified on <a>SendTextMessage</a> will be used if no
     * dedicated origination phone numbers or registered SenderIds are available in
     * your account, instead of a generic sender ID, such as 'NOTICE'.</p>
     */
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }

    /**
     * <p>The current sender ID for the configuration set. When sending a text message
     * to a destination country which supports SenderIds, the default sender ID on the
     * configuration set specified on <a>SendTextMessage</a> will be used if no
     * dedicated origination phone numbers or registered SenderIds are available in
     * your account, instead of a generic sender ID, such as 'NOTICE'.</p>
     */
    inline SetDefaultSenderIdRequest& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}

    /**
     * <p>The current sender ID for the configuration set. When sending a text message
     * to a destination country which supports SenderIds, the default sender ID on the
     * configuration set specified on <a>SendTextMessage</a> will be used if no
     * dedicated origination phone numbers or registered SenderIds are available in
     * your account, instead of a generic sender ID, such as 'NOTICE'.</p>
     */
    inline SetDefaultSenderIdRequest& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}

    /**
     * <p>The current sender ID for the configuration set. When sending a text message
     * to a destination country which supports SenderIds, the default sender ID on the
     * configuration set specified on <a>SendTextMessage</a> will be used if no
     * dedicated origination phone numbers or registered SenderIds are available in
     * your account, instead of a generic sender ID, such as 'NOTICE'.</p>
     */
    inline SetDefaultSenderIdRequest& WithSenderId(const char* value) { SetSenderId(value); return *this;}

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
