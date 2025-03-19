/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
#include <aws/pinpoint-sms-voice-v2/model/Tag.h>
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
  class RequestSenderIdResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API RequestSenderIdResult() = default;
    AWS_PINPOINTSMSVOICEV2_API RequestSenderIdResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API RequestSenderIdResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline const Aws::String& GetSenderIdArn() const { return m_senderIdArn; }
    template<typename SenderIdArnT = Aws::String>
    void SetSenderIdArn(SenderIdArnT&& value) { m_senderIdArnHasBeenSet = true; m_senderIdArn = std::forward<SenderIdArnT>(value); }
    template<typename SenderIdArnT = Aws::String>
    RequestSenderIdResult& WithSenderIdArn(SenderIdArnT&& value) { SetSenderIdArn(std::forward<SenderIdArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sender ID that was requested.</p>
     */
    inline const Aws::String& GetSenderId() const { return m_senderId; }
    template<typename SenderIdT = Aws::String>
    void SetSenderId(SenderIdT&& value) { m_senderIdHasBeenSet = true; m_senderId = std::forward<SenderIdT>(value); }
    template<typename SenderIdT = Aws::String>
    RequestSenderIdResult& WithSenderId(SenderIdT&& value) { SetSenderId(std::forward<SenderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const { return m_isoCountryCode; }
    template<typename IsoCountryCodeT = Aws::String>
    void SetIsoCountryCode(IsoCountryCodeT&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::forward<IsoCountryCodeT>(value); }
    template<typename IsoCountryCodeT = Aws::String>
    RequestSenderIdResult& WithIsoCountryCode(IsoCountryCodeT&& value) { SetIsoCountryCode(std::forward<IsoCountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline const Aws::Vector<MessageType>& GetMessageTypes() const { return m_messageTypes; }
    template<typename MessageTypesT = Aws::Vector<MessageType>>
    void SetMessageTypes(MessageTypesT&& value) { m_messageTypesHasBeenSet = true; m_messageTypes = std::forward<MessageTypesT>(value); }
    template<typename MessageTypesT = Aws::Vector<MessageType>>
    RequestSenderIdResult& WithMessageTypes(MessageTypesT&& value) { SetMessageTypes(std::forward<MessageTypesT>(value)); return *this;}
    inline RequestSenderIdResult& AddMessageTypes(MessageType value) { m_messageTypesHasBeenSet = true; m_messageTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The monthly price, in US dollars, to lease the sender ID.</p>
     */
    inline const Aws::String& GetMonthlyLeasingPrice() const { return m_monthlyLeasingPrice; }
    template<typename MonthlyLeasingPriceT = Aws::String>
    void SetMonthlyLeasingPrice(MonthlyLeasingPriceT&& value) { m_monthlyLeasingPriceHasBeenSet = true; m_monthlyLeasingPrice = std::forward<MonthlyLeasingPriceT>(value); }
    template<typename MonthlyLeasingPriceT = Aws::String>
    RequestSenderIdResult& WithMonthlyLeasingPrice(MonthlyLeasingPriceT&& value) { SetMonthlyLeasingPrice(std::forward<MonthlyLeasingPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true the sender ID can't be
     * deleted.</p>
     */
    inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline RequestSenderIdResult& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the sender ID is registered.</p>
     */
    inline bool GetRegistered() const { return m_registered; }
    inline void SetRegistered(bool value) { m_registeredHasBeenSet = true; m_registered = value; }
    inline RequestSenderIdResult& WithRegistered(bool value) { SetRegistered(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of tags (key and value pairs) to associate with the sender ID.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RequestSenderIdResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RequestSenderIdResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RequestSenderIdResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
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

    bool m_deletionProtectionEnabled{false};
    bool m_deletionProtectionEnabledHasBeenSet = false;

    bool m_registered{false};
    bool m_registeredHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
