/**
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
    AWS_PINPOINTSMSVOICEV2_API SendDestinationNumberVerificationCodeRequest() = default;

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
    inline const Aws::String& GetVerifiedDestinationNumberId() const { return m_verifiedDestinationNumberId; }
    inline bool VerifiedDestinationNumberIdHasBeenSet() const { return m_verifiedDestinationNumberIdHasBeenSet; }
    template<typename VerifiedDestinationNumberIdT = Aws::String>
    void SetVerifiedDestinationNumberId(VerifiedDestinationNumberIdT&& value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId = std::forward<VerifiedDestinationNumberIdT>(value); }
    template<typename VerifiedDestinationNumberIdT = Aws::String>
    SendDestinationNumberVerificationCodeRequest& WithVerifiedDestinationNumberId(VerifiedDestinationNumberIdT&& value) { SetVerifiedDestinationNumberId(std::forward<VerifiedDestinationNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose to send the verification code as an SMS or voice message.</p>
     */
    inline VerificationChannel GetVerificationChannel() const { return m_verificationChannel; }
    inline bool VerificationChannelHasBeenSet() const { return m_verificationChannelHasBeenSet; }
    inline void SetVerificationChannel(VerificationChannel value) { m_verificationChannelHasBeenSet = true; m_verificationChannel = value; }
    inline SendDestinationNumberVerificationCodeRequest& WithVerificationChannel(VerificationChannel value) { SetVerificationChannel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose the language to use for the message.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline SendDestinationNumberVerificationCodeRequest& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     *  <p>If you are using a shared AWS End User Messaging SMS and Voice
     * resource then you must use the full Amazon Resource Name(ARN).</p> 
     */
    inline const Aws::String& GetOriginationIdentity() const { return m_originationIdentity; }
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
    template<typename OriginationIdentityT = Aws::String>
    void SetOriginationIdentity(OriginationIdentityT&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::forward<OriginationIdentityT>(value); }
    template<typename OriginationIdentityT = Aws::String>
    SendDestinationNumberVerificationCodeRequest& WithOriginationIdentity(OriginationIdentityT&& value) { SetOriginationIdentity(std::forward<OriginationIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    SendDestinationNumberVerificationCodeRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    SendDestinationNumberVerificationCodeRequest& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    template<typename ContextKeyT = Aws::String, typename ContextValueT = Aws::String>
    SendDestinationNumberVerificationCodeRequest& AddContext(ContextKeyT&& key, ContextValueT&& value) {
      m_contextHasBeenSet = true; m_context.emplace(std::forward<ContextKeyT>(key), std::forward<ContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>This field is used for any country-specific registration requirements.
     * Currently, this setting is only used when you send messages to recipients in
     * India using a sender ID. For more information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-senderid-india.html">Special
     * requirements for sending SMS messages to recipients in India</a>. </p>
     */
    inline const Aws::Map<DestinationCountryParameterKey, Aws::String>& GetDestinationCountryParameters() const { return m_destinationCountryParameters; }
    inline bool DestinationCountryParametersHasBeenSet() const { return m_destinationCountryParametersHasBeenSet; }
    template<typename DestinationCountryParametersT = Aws::Map<DestinationCountryParameterKey, Aws::String>>
    void SetDestinationCountryParameters(DestinationCountryParametersT&& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters = std::forward<DestinationCountryParametersT>(value); }
    template<typename DestinationCountryParametersT = Aws::Map<DestinationCountryParameterKey, Aws::String>>
    SendDestinationNumberVerificationCodeRequest& WithDestinationCountryParameters(DestinationCountryParametersT&& value) { SetDestinationCountryParameters(std::forward<DestinationCountryParametersT>(value)); return *this;}
    inline SendDestinationNumberVerificationCodeRequest& AddDestinationCountryParameters(DestinationCountryParameterKey key, Aws::String value) {
      m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_verifiedDestinationNumberId;
    bool m_verifiedDestinationNumberIdHasBeenSet = false;

    VerificationChannel m_verificationChannel{VerificationChannel::NOT_SET};
    bool m_verificationChannelHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
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
