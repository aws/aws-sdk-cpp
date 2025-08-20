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
    AWS_PINPOINTSMSVOICEV2_API RequestPhoneNumberRequest() = default;

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
    inline const Aws::String& GetIsoCountryCode() const { return m_isoCountryCode; }
    inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }
    template<typename IsoCountryCodeT = Aws::String>
    void SetIsoCountryCode(IsoCountryCodeT&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::forward<IsoCountryCodeT>(value); }
    template<typename IsoCountryCodeT = Aws::String>
    RequestPhoneNumberRequest& WithIsoCountryCode(IsoCountryCodeT&& value) { SetIsoCountryCode(std::forward<IsoCountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of message. Valid values are <code>TRANSACTIONAL</code> for messages
     * that are critical or time-sensitive and <code>PROMOTIONAL</code> for messages
     * that aren't critical or time-sensitive.</p>
     */
    inline MessageType GetMessageType() const { return m_messageType; }
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }
    inline void SetMessageType(MessageType value) { m_messageTypeHasBeenSet = true; m_messageType = value; }
    inline RequestPhoneNumberRequest& WithMessageType(MessageType value) { SetMessageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the phone number will be used for text messages, voice messages,
     * or both. </p>
     */
    inline const Aws::Vector<NumberCapability>& GetNumberCapabilities() const { return m_numberCapabilities; }
    inline bool NumberCapabilitiesHasBeenSet() const { return m_numberCapabilitiesHasBeenSet; }
    template<typename NumberCapabilitiesT = Aws::Vector<NumberCapability>>
    void SetNumberCapabilities(NumberCapabilitiesT&& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities = std::forward<NumberCapabilitiesT>(value); }
    template<typename NumberCapabilitiesT = Aws::Vector<NumberCapability>>
    RequestPhoneNumberRequest& WithNumberCapabilities(NumberCapabilitiesT&& value) { SetNumberCapabilities(std::forward<NumberCapabilitiesT>(value)); return *this;}
    inline RequestPhoneNumberRequest& AddNumberCapabilities(NumberCapability value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of phone number to request.</p> <p>When you request a
     * <code>SIMULATOR</code> phone number, you must set <b>MessageType</b> as
     * <code>TRANSACTIONAL</code>. </p>
     */
    inline RequestableNumberType GetNumberType() const { return m_numberType; }
    inline bool NumberTypeHasBeenSet() const { return m_numberTypeHasBeenSet; }
    inline void SetNumberType(RequestableNumberType value) { m_numberTypeHasBeenSet = true; m_numberType = value; }
    inline RequestPhoneNumberRequest& WithNumberType(RequestableNumberType value) { SetNumberType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OptOutList to associate with the phone number. You can use
     * the OptOutListName or OptOutListArn.</p>  <p>If you are using a
     * shared AWS End User Messaging SMS and Voice resource then you must use the full
     * Amazon Resource Name(ARN).</p> 
     */
    inline const Aws::String& GetOptOutListName() const { return m_optOutListName; }
    inline bool OptOutListNameHasBeenSet() const { return m_optOutListNameHasBeenSet; }
    template<typename OptOutListNameT = Aws::String>
    void SetOptOutListName(OptOutListNameT&& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = std::forward<OptOutListNameT>(value); }
    template<typename OptOutListNameT = Aws::String>
    RequestPhoneNumberRequest& WithOptOutListName(OptOutListNameT&& value) { SetOptOutListName(std::forward<OptOutListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pool to associated with the phone number. You can use the PoolId or
     * PoolArn. </p>  <p>If you are using a shared AWS End User Messaging
     * SMS and Voice resource then you must use the full Amazon Resource Name(ARN).</p>
     * 
     */
    inline const Aws::String& GetPoolId() const { return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    template<typename PoolIdT = Aws::String>
    void SetPoolId(PoolIdT&& value) { m_poolIdHasBeenSet = true; m_poolId = std::forward<PoolIdT>(value); }
    template<typename PoolIdT = Aws::String>
    RequestPhoneNumberRequest& WithPoolId(PoolIdT&& value) { SetPoolId(std::forward<PoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this field to attach your phone number for an external registration
     * process.</p>
     */
    inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
    template<typename RegistrationIdT = Aws::String>
    void SetRegistrationId(RegistrationIdT&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::forward<RegistrationIdT>(value); }
    template<typename RegistrationIdT = Aws::String>
    RequestPhoneNumberRequest& WithRegistrationId(RegistrationIdT&& value) { SetRegistrationId(std::forward<RegistrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true the international sending
     * of phone number is Enabled. </p>
     */
    inline bool GetInternationalSendingEnabled() const { return m_internationalSendingEnabled; }
    inline bool InternationalSendingEnabledHasBeenSet() const { return m_internationalSendingEnabledHasBeenSet; }
    inline void SetInternationalSendingEnabled(bool value) { m_internationalSendingEnabledHasBeenSet = true; m_internationalSendingEnabled = value; }
    inline RequestPhoneNumberRequest& WithInternationalSendingEnabled(bool value) { SetInternationalSendingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true the phone number can't be
     * deleted.</p>
     */
    inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline RequestPhoneNumberRequest& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of tags (key and value pairs) associate with the requested phone
     * number. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RequestPhoneNumberRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RequestPhoneNumberRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    RequestPhoneNumberRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;

    MessageType m_messageType{MessageType::NOT_SET};
    bool m_messageTypeHasBeenSet = false;

    Aws::Vector<NumberCapability> m_numberCapabilities;
    bool m_numberCapabilitiesHasBeenSet = false;

    RequestableNumberType m_numberType{RequestableNumberType::NOT_SET};
    bool m_numberTypeHasBeenSet = false;

    Aws::String m_optOutListName;
    bool m_optOutListNameHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    bool m_internationalSendingEnabled{false};
    bool m_internationalSendingEnabledHasBeenSet = false;

    bool m_deletionProtectionEnabled{false};
    bool m_deletionProtectionEnabledHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
