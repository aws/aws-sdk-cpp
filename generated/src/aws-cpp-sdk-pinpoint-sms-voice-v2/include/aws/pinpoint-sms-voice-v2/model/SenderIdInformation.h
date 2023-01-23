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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>The information for all SenderIds in an Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SenderIdInformation">AWS
   * API Reference</a></p>
   */
  class SenderIdInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SenderIdInformation();
    AWS_PINPOINTSMSVOICEV2_API SenderIdInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API SenderIdInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline const Aws::String& GetSenderIdArn() const{ return m_senderIdArn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline bool SenderIdArnHasBeenSet() const { return m_senderIdArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline void SetSenderIdArn(const Aws::String& value) { m_senderIdArnHasBeenSet = true; m_senderIdArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline void SetSenderIdArn(Aws::String&& value) { m_senderIdArnHasBeenSet = true; m_senderIdArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline void SetSenderIdArn(const char* value) { m_senderIdArnHasBeenSet = true; m_senderIdArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline SenderIdInformation& WithSenderIdArn(const Aws::String& value) { SetSenderIdArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline SenderIdInformation& WithSenderIdArn(Aws::String&& value) { SetSenderIdArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline SenderIdInformation& WithSenderIdArn(const char* value) { SetSenderIdArn(value); return *this;}


    /**
     * <p>The alphanumeric sender ID in a specific country that you'd like to
     * describe.</p>
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }

    /**
     * <p>The alphanumeric sender ID in a specific country that you'd like to
     * describe.</p>
     */
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }

    /**
     * <p>The alphanumeric sender ID in a specific country that you'd like to
     * describe.</p>
     */
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }

    /**
     * <p>The alphanumeric sender ID in a specific country that you'd like to
     * describe.</p>
     */
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }

    /**
     * <p>The alphanumeric sender ID in a specific country that you'd like to
     * describe.</p>
     */
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }

    /**
     * <p>The alphanumeric sender ID in a specific country that you'd like to
     * describe.</p>
     */
    inline SenderIdInformation& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}

    /**
     * <p>The alphanumeric sender ID in a specific country that you'd like to
     * describe.</p>
     */
    inline SenderIdInformation& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}

    /**
     * <p>The alphanumeric sender ID in a specific country that you'd like to
     * describe.</p>
     */
    inline SenderIdInformation& WithSenderId(const char* value) { SetSenderId(value); return *this;}


    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = value; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::move(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode.assign(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline SenderIdInformation& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline SenderIdInformation& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline SenderIdInformation& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}


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
    inline bool MessageTypesHasBeenSet() const { return m_messageTypesHasBeenSet; }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline void SetMessageTypes(const Aws::Vector<MessageType>& value) { m_messageTypesHasBeenSet = true; m_messageTypes = value; }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline void SetMessageTypes(Aws::Vector<MessageType>&& value) { m_messageTypesHasBeenSet = true; m_messageTypes = std::move(value); }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline SenderIdInformation& WithMessageTypes(const Aws::Vector<MessageType>& value) { SetMessageTypes(value); return *this;}

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline SenderIdInformation& WithMessageTypes(Aws::Vector<MessageType>&& value) { SetMessageTypes(std::move(value)); return *this;}

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline SenderIdInformation& AddMessageTypes(const MessageType& value) { m_messageTypesHasBeenSet = true; m_messageTypes.push_back(value); return *this; }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline SenderIdInformation& AddMessageTypes(MessageType&& value) { m_messageTypesHasBeenSet = true; m_messageTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The monthly leasing price, in US dollars.</p>
     */
    inline const Aws::String& GetMonthlyLeasingPrice() const{ return m_monthlyLeasingPrice; }

    /**
     * <p>The monthly leasing price, in US dollars.</p>
     */
    inline bool MonthlyLeasingPriceHasBeenSet() const { return m_monthlyLeasingPriceHasBeenSet; }

    /**
     * <p>The monthly leasing price, in US dollars.</p>
     */
    inline void SetMonthlyLeasingPrice(const Aws::String& value) { m_monthlyLeasingPriceHasBeenSet = true; m_monthlyLeasingPrice = value; }

    /**
     * <p>The monthly leasing price, in US dollars.</p>
     */
    inline void SetMonthlyLeasingPrice(Aws::String&& value) { m_monthlyLeasingPriceHasBeenSet = true; m_monthlyLeasingPrice = std::move(value); }

    /**
     * <p>The monthly leasing price, in US dollars.</p>
     */
    inline void SetMonthlyLeasingPrice(const char* value) { m_monthlyLeasingPriceHasBeenSet = true; m_monthlyLeasingPrice.assign(value); }

    /**
     * <p>The monthly leasing price, in US dollars.</p>
     */
    inline SenderIdInformation& WithMonthlyLeasingPrice(const Aws::String& value) { SetMonthlyLeasingPrice(value); return *this;}

    /**
     * <p>The monthly leasing price, in US dollars.</p>
     */
    inline SenderIdInformation& WithMonthlyLeasingPrice(Aws::String&& value) { SetMonthlyLeasingPrice(std::move(value)); return *this;}

    /**
     * <p>The monthly leasing price, in US dollars.</p>
     */
    inline SenderIdInformation& WithMonthlyLeasingPrice(const char* value) { SetMonthlyLeasingPrice(value); return *this;}

  private:

    Aws::String m_senderIdArn;
    bool m_senderIdArnHasBeenSet = false;

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet = false;

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;

    Aws::Vector<MessageType> m_messageTypes;
    bool m_messageTypesHasBeenSet = false;

    Aws::String m_monthlyLeasingPrice;
    bool m_monthlyLeasingPriceHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
