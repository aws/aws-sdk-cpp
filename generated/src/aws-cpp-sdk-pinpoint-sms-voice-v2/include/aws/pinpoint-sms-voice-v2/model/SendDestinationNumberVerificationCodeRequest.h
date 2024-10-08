﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/VerificationChannel.h>
#include <aws/pinpoint-sms-voice-v2/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint-sms-voice-v2/model/DestinationCountryParameterKey.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class SendDestinationNumberVerificationCodeRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SendDestinationNumberVerificationCodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendDestinationNumberVerificationCode"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberId() const{ return m_verifiedDestinationNumberId; }
    inline bool VerifiedDestinationNumberIdHasBeenSet() const { return m_verifiedDestinationNumberIdHasBeenSet; }
    inline void SetVerifiedDestinationNumberId(const Aws::String& value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId = value; }
    inline void SetVerifiedDestinationNumberId(Aws::String&& value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId = std::move(value); }
    inline void SetVerifiedDestinationNumberId(const char* value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId.assign(value); }
    inline SendDestinationNumberVerificationCodeRequest& WithVerifiedDestinationNumberId(const Aws::String& value) { SetVerifiedDestinationNumberId(value); return *this;}
    inline SendDestinationNumberVerificationCodeRequest& WithVerifiedDestinationNumberId(Aws::String&& value) { SetVerifiedDestinationNumberId(std::move(value)); return *this;}
    inline SendDestinationNumberVerificationCodeRequest& WithVerifiedDestinationNumberId(const char* value) { SetVerifiedDestinationNumberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose to send the verification code as an SMS or voice message.</p>
     */
    inline const VerificationChannel& GetVerificationChannel() const{ return m_verificationChannel; }
    inline bool VerificationChannelHasBeenSet() const { return m_verificationChannelHasBeenSet; }
    inline void SetVerificationChannel(const VerificationChannel& value) { m_verificationChannelHasBeenSet = true; m_verificationChannel = value; }
    inline void SetVerificationChannel(VerificationChannel&& value) { m_verificationChannelHasBeenSet = true; m_verificationChannel = std::move(value); }
    inline SendDestinationNumberVerificationCodeRequest& WithVerificationChannel(const VerificationChannel& value) { SetVerificationChannel(value); return *this;}
    inline SendDestinationNumberVerificationCodeRequest& WithVerificationChannel(VerificationChannel&& value) { SetVerificationChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose the language to use for the message.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline SendDestinationNumberVerificationCodeRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}
    inline SendDestinationNumberVerificationCodeRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     *  <p>If you are using a shared AWS End User Messaging SMS and Voice
     * resource then you must use the full Amazon Resource Name(ARN).</p> 
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = value; }
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::move(value); }
    inline void SetOriginationIdentity(const char* value) { m_originationIdentityHasBeenSet = true; m_originationIdentity.assign(value); }
    inline SendDestinationNumberVerificationCodeRequest& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}
    inline SendDestinationNumberVerificationCodeRequest& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}
    inline SendDestinationNumberVerificationCodeRequest& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }
    inline SendDestinationNumberVerificationCodeRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}
    inline SendDestinationNumberVerificationCodeRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}
    inline SendDestinationNumberVerificationCodeRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }
    inline SendDestinationNumberVerificationCodeRequest& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}
    inline SendDestinationNumberVerificationCodeRequest& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}
    inline SendDestinationNumberVerificationCodeRequest& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }
    inline SendDestinationNumberVerificationCodeRequest& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }
    inline SendDestinationNumberVerificationCodeRequest& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }
    inline SendDestinationNumberVerificationCodeRequest& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }
    inline SendDestinationNumberVerificationCodeRequest& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }
    inline SendDestinationNumberVerificationCodeRequest& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }
    inline SendDestinationNumberVerificationCodeRequest& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This field is used for any country-specific registration requirements.
     * Currently, this setting is only used when you send messages to recipients in
     * India using a sender ID. For more information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-senderid-india.html">Special
     * requirements for sending SMS messages to recipients in India</a>. </p>
     */
    inline const Aws::Map<DestinationCountryParameterKey, Aws::String>& GetDestinationCountryParameters() const{ return m_destinationCountryParameters; }
    inline bool DestinationCountryParametersHasBeenSet() const { return m_destinationCountryParametersHasBeenSet; }
    inline void SetDestinationCountryParameters(const Aws::Map<DestinationCountryParameterKey, Aws::String>& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters = value; }
    inline void SetDestinationCountryParameters(Aws::Map<DestinationCountryParameterKey, Aws::String>&& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters = std::move(value); }
    inline SendDestinationNumberVerificationCodeRequest& WithDestinationCountryParameters(const Aws::Map<DestinationCountryParameterKey, Aws::String>& value) { SetDestinationCountryParameters(value); return *this;}
    inline SendDestinationNumberVerificationCodeRequest& WithDestinationCountryParameters(Aws::Map<DestinationCountryParameterKey, Aws::String>&& value) { SetDestinationCountryParameters(std::move(value)); return *this;}
    inline SendDestinationNumberVerificationCodeRequest& AddDestinationCountryParameters(const DestinationCountryParameterKey& key, const Aws::String& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(key, value); return *this; }
    inline SendDestinationNumberVerificationCodeRequest& AddDestinationCountryParameters(DestinationCountryParameterKey&& key, const Aws::String& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(std::move(key), value); return *this; }
    inline SendDestinationNumberVerificationCodeRequest& AddDestinationCountryParameters(const DestinationCountryParameterKey& key, Aws::String&& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(key, std::move(value)); return *this; }
    inline SendDestinationNumberVerificationCodeRequest& AddDestinationCountryParameters(DestinationCountryParameterKey&& key, Aws::String&& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline SendDestinationNumberVerificationCodeRequest& AddDestinationCountryParameters(DestinationCountryParameterKey&& key, const char* value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(std::move(key), value); return *this; }
    inline SendDestinationNumberVerificationCodeRequest& AddDestinationCountryParameters(const DestinationCountryParameterKey& key, const char* value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_verifiedDestinationNumberId;
    bool m_verifiedDestinationNumberIdHasBeenSet = false;

    VerificationChannel m_verificationChannel;
    bool m_verificationChannelHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;

    Aws::Map<DestinationCountryParameterKey, Aws::String> m_destinationCountryParameters;
    bool m_destinationCountryParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
