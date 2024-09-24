/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/RequestableNumberType.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>
#include <aws/pinpoint-sms-voice-v2/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class RequestPhoneNumberRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API RequestPhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RequestPhoneNumber"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }
    inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = value; }
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::move(value); }
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode.assign(value); }
    inline RequestPhoneNumberRequest& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}
    inline RequestPhoneNumberRequest& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}
    inline RequestPhoneNumberRequest& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }
    inline RequestPhoneNumberRequest& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}
    inline RequestPhoneNumberRequest& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the phone number will be used for text messages, voice messages,
     * or both. </p>
     */
    inline const Aws::Vector<NumberCapability>& GetNumberCapabilities() const{ return m_numberCapabilities; }
    inline bool NumberCapabilitiesHasBeenSet() const { return m_numberCapabilitiesHasBeenSet; }
    inline void SetNumberCapabilities(const Aws::Vector<NumberCapability>& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities = value; }
    inline void SetNumberCapabilities(Aws::Vector<NumberCapability>&& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities = std::move(value); }
    inline RequestPhoneNumberRequest& WithNumberCapabilities(const Aws::Vector<NumberCapability>& value) { SetNumberCapabilities(value); return *this;}
    inline RequestPhoneNumberRequest& WithNumberCapabilities(Aws::Vector<NumberCapability>&& value) { SetNumberCapabilities(std::move(value)); return *this;}
    inline RequestPhoneNumberRequest& AddNumberCapabilities(const NumberCapability& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities.push_back(value); return *this; }
    inline RequestPhoneNumberRequest& AddNumberCapabilities(NumberCapability&& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of phone number to request.</p>
     */
    inline const RequestableNumberType& GetNumberType() const{ return m_numberType; }
    inline bool NumberTypeHasBeenSet() const { return m_numberTypeHasBeenSet; }
    inline void SetNumberType(const RequestableNumberType& value) { m_numberTypeHasBeenSet = true; m_numberType = value; }
    inline void SetNumberType(RequestableNumberType&& value) { m_numberTypeHasBeenSet = true; m_numberType = std::move(value); }
    inline RequestPhoneNumberRequest& WithNumberType(const RequestableNumberType& value) { SetNumberType(value); return *this;}
    inline RequestPhoneNumberRequest& WithNumberType(RequestableNumberType&& value) { SetNumberType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OptOutList to associate with the phone number. You can use
     * the OptOutListName or OptOutListArn.</p>  <p>If you are using a
     * shared AWS End User Messaging SMS and Voice resource then you must use the full
     * Amazon Resource Name(ARN).</p> 
     */
    inline const Aws::String& GetOptOutListName() const{ return m_optOutListName; }
    inline bool OptOutListNameHasBeenSet() const { return m_optOutListNameHasBeenSet; }
    inline void SetOptOutListName(const Aws::String& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = value; }
    inline void SetOptOutListName(Aws::String&& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = std::move(value); }
    inline void SetOptOutListName(const char* value) { m_optOutListNameHasBeenSet = true; m_optOutListName.assign(value); }
    inline RequestPhoneNumberRequest& WithOptOutListName(const Aws::String& value) { SetOptOutListName(value); return *this;}
    inline RequestPhoneNumberRequest& WithOptOutListName(Aws::String&& value) { SetOptOutListName(std::move(value)); return *this;}
    inline RequestPhoneNumberRequest& WithOptOutListName(const char* value) { SetOptOutListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pool to associated with the phone number. You can use the PoolId or
     * PoolArn. </p>  <p>If you are using a shared AWS End User Messaging
     * SMS and Voice resource then you must use the full Amazon Resource Name(ARN).</p>
     * 
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }
    inline RequestPhoneNumberRequest& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}
    inline RequestPhoneNumberRequest& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}
    inline RequestPhoneNumberRequest& WithPoolId(const char* value) { SetPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this field to attach your phone number for an external registration
     * process.</p>
     */
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
    inline void SetRegistrationId(const Aws::String& value) { m_registrationIdHasBeenSet = true; m_registrationId = value; }
    inline void SetRegistrationId(Aws::String&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::move(value); }
    inline void SetRegistrationId(const char* value) { m_registrationIdHasBeenSet = true; m_registrationId.assign(value); }
    inline RequestPhoneNumberRequest& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}
    inline RequestPhoneNumberRequest& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}
    inline RequestPhoneNumberRequest& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true the phone number can't be
     * deleted.</p>
     */
    inline bool GetDeletionProtectionEnabled() const{ return m_deletionProtectionEnabled; }
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline RequestPhoneNumberRequest& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of tags (key and value pairs) associate with the requested phone
     * number. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RequestPhoneNumberRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline RequestPhoneNumberRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline RequestPhoneNumberRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline RequestPhoneNumberRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline RequestPhoneNumberRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline RequestPhoneNumberRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline RequestPhoneNumberRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet = false;

    Aws::Vector<NumberCapability> m_numberCapabilities;
    bool m_numberCapabilitiesHasBeenSet = false;

    RequestableNumberType m_numberType;
    bool m_numberTypeHasBeenSet = false;

    Aws::String m_optOutListName;
    bool m_optOutListNameHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    bool m_deletionProtectionEnabled;
    bool m_deletionProtectionEnabledHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
