/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/SocialMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace SocialMessaging
{
namespace Model
{

  /**
   */
  class SendWhatsAppMessageRequest : public SocialMessagingRequest
  {
  public:
    AWS_SOCIALMESSAGING_API SendWhatsAppMessageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendWhatsAppMessage"; }

    AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the phone number used to send the WhatsApp message. If you are
     * sending a media file only the <code>originationPhoneNumberId</code> used to
     * upload the file can be used. Phone number identifiers are formatted as
     * <code>phone-number-id-01234567890123456789012345678901</code>. Use <a
     * href="https://docs.aws.amazon.com/social-messaging/latest/APIReference/API_GetLinkedWhatsAppBusinessAccountPhoneNumber.html">GetLinkedWhatsAppBusinessAccount</a>
     * to find a phone number's id.</p>
     */
    inline const Aws::String& GetOriginationPhoneNumberId() const { return m_originationPhoneNumberId; }
    inline bool OriginationPhoneNumberIdHasBeenSet() const { return m_originationPhoneNumberIdHasBeenSet; }
    template<typename OriginationPhoneNumberIdT = Aws::String>
    void SetOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) { m_originationPhoneNumberIdHasBeenSet = true; m_originationPhoneNumberId = std::forward<OriginationPhoneNumberIdT>(value); }
    template<typename OriginationPhoneNumberIdT = Aws::String>
    SendWhatsAppMessageRequest& WithOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) { SetOriginationPhoneNumberId(std::forward<OriginationPhoneNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message to send through WhatsApp. The length is in KB. The message field
     * passes through a WhatsApp Message object, see <a
     * href="https://developers.facebook.com/docs/whatsapp/cloud-api/reference/messages">Messages</a>
     * in the <i>WhatsApp Business Platform Cloud API Reference</i>.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::Utils::CryptoBuffer>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::Utils::CryptoBuffer>
    SendWhatsAppMessageRequest& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API version for the request formatted as <code>v{VersionNumber}</code>.
     * For a list of supported API versions and Amazon Web Services Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/end-user-messaging.html">
     * <i>Amazon Web Services End User Messaging Social API</i> Service Endpoints</a>
     * in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline const Aws::String& GetMetaApiVersion() const { return m_metaApiVersion; }
    inline bool MetaApiVersionHasBeenSet() const { return m_metaApiVersionHasBeenSet; }
    template<typename MetaApiVersionT = Aws::String>
    void SetMetaApiVersion(MetaApiVersionT&& value) { m_metaApiVersionHasBeenSet = true; m_metaApiVersion = std::forward<MetaApiVersionT>(value); }
    template<typename MetaApiVersionT = Aws::String>
    SendWhatsAppMessageRequest& WithMetaApiVersion(MetaApiVersionT&& value) { SetMetaApiVersion(std::forward<MetaApiVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_originationPhoneNumberId;
    bool m_originationPhoneNumberIdHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_message{};
    bool m_messageHasBeenSet = false;

    Aws::String m_metaApiVersion;
    bool m_metaApiVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
