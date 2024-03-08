/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class ReleaseSenderIdResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API ReleaseSenderIdResult();
    AWS_PINPOINTSMSVOICEV2_API ReleaseSenderIdResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API ReleaseSenderIdResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline const Aws::String& GetSenderIdArn() const{ return m_senderIdArn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline void SetSenderIdArn(const Aws::String& value) { m_senderIdArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline void SetSenderIdArn(Aws::String&& value) { m_senderIdArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline void SetSenderIdArn(const char* value) { m_senderIdArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline ReleaseSenderIdResult& WithSenderIdArn(const Aws::String& value) { SetSenderIdArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline ReleaseSenderIdResult& WithSenderIdArn(Aws::String&& value) { SetSenderIdArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline ReleaseSenderIdResult& WithSenderIdArn(const char* value) { SetSenderIdArn(value); return *this;}


    /**
     * <p>The sender ID that was released.</p>
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }

    /**
     * <p>The sender ID that was released.</p>
     */
    inline void SetSenderId(const Aws::String& value) { m_senderId = value; }

    /**
     * <p>The sender ID that was released.</p>
     */
    inline void SetSenderId(Aws::String&& value) { m_senderId = std::move(value); }

    /**
     * <p>The sender ID that was released.</p>
     */
    inline void SetSenderId(const char* value) { m_senderId.assign(value); }

    /**
     * <p>The sender ID that was released.</p>
     */
    inline ReleaseSenderIdResult& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}

    /**
     * <p>The sender ID that was released.</p>
     */
    inline ReleaseSenderIdResult& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}

    /**
     * <p>The sender ID that was released.</p>
     */
    inline ReleaseSenderIdResult& WithSenderId(const char* value) { SetSenderId(value); return *this;}


    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCode = value; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCode = std::move(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCode.assign(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline ReleaseSenderIdResult& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline ReleaseSenderIdResult& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline ReleaseSenderIdResult& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}


    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline const Aws::Vector<MessageType>& GetMessageTypes() const{ return m_messageTypes; }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline void SetMessageTypes(const Aws::Vector<MessageType>& value) { m_messageTypes = value; }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline void SetMessageTypes(Aws::Vector<MessageType>&& value) { m_messageTypes = std::move(value); }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline ReleaseSenderIdResult& WithMessageTypes(const Aws::Vector<MessageType>& value) { SetMessageTypes(value); return *this;}

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline ReleaseSenderIdResult& WithMessageTypes(Aws::Vector<MessageType>&& value) { SetMessageTypes(std::move(value)); return *this;}

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline ReleaseSenderIdResult& AddMessageTypes(const MessageType& value) { m_messageTypes.push_back(value); return *this; }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline ReleaseSenderIdResult& AddMessageTypes(MessageType&& value) { m_messageTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The monthly price, in US dollars, to lease the sender ID.</p>
     */
    inline const Aws::String& GetMonthlyLeasingPrice() const{ return m_monthlyLeasingPrice; }

    /**
     * <p>The monthly price, in US dollars, to lease the sender ID.</p>
     */
    inline void SetMonthlyLeasingPrice(const Aws::String& value) { m_monthlyLeasingPrice = value; }

    /**
     * <p>The monthly price, in US dollars, to lease the sender ID.</p>
     */
    inline void SetMonthlyLeasingPrice(Aws::String&& value) { m_monthlyLeasingPrice = std::move(value); }

    /**
     * <p>The monthly price, in US dollars, to lease the sender ID.</p>
     */
    inline void SetMonthlyLeasingPrice(const char* value) { m_monthlyLeasingPrice.assign(value); }

    /**
     * <p>The monthly price, in US dollars, to lease the sender ID.</p>
     */
    inline ReleaseSenderIdResult& WithMonthlyLeasingPrice(const Aws::String& value) { SetMonthlyLeasingPrice(value); return *this;}

    /**
     * <p>The monthly price, in US dollars, to lease the sender ID.</p>
     */
    inline ReleaseSenderIdResult& WithMonthlyLeasingPrice(Aws::String&& value) { SetMonthlyLeasingPrice(std::move(value)); return *this;}

    /**
     * <p>The monthly price, in US dollars, to lease the sender ID.</p>
     */
    inline ReleaseSenderIdResult& WithMonthlyLeasingPrice(const char* value) { SetMonthlyLeasingPrice(value); return *this;}


    /**
     * <p>True if the sender ID is registered.</p>
     */
    inline bool GetRegistered() const{ return m_registered; }

    /**
     * <p>True if the sender ID is registered.</p>
     */
    inline void SetRegistered(bool value) { m_registered = value; }

    /**
     * <p>True if the sender ID is registered.</p>
     */
    inline ReleaseSenderIdResult& WithRegistered(bool value) { SetRegistered(value); return *this;}


    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline void SetRegistrationId(const Aws::String& value) { m_registrationId = value; }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline void SetRegistrationId(Aws::String&& value) { m_registrationId = std::move(value); }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline void SetRegistrationId(const char* value) { m_registrationId.assign(value); }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline ReleaseSenderIdResult& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline ReleaseSenderIdResult& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline ReleaseSenderIdResult& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ReleaseSenderIdResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ReleaseSenderIdResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ReleaseSenderIdResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_senderIdArn;

    Aws::String m_senderId;

    Aws::String m_isoCountryCode;

    Aws::Vector<MessageType> m_messageTypes;

    Aws::String m_monthlyLeasingPrice;

    bool m_registered;

    Aws::String m_registrationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
