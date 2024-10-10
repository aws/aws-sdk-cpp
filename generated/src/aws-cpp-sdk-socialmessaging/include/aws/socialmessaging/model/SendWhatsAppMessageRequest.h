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
    AWS_SOCIALMESSAGING_API SendWhatsAppMessageRequest();

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
    inline const Aws::String& GetOriginationPhoneNumberId() const{ return m_originationPhoneNumberId; }
    inline bool OriginationPhoneNumberIdHasBeenSet() const { return m_originationPhoneNumberIdHasBeenSet; }
    inline void SetOriginationPhoneNumberId(const Aws::String& value) { m_originationPhoneNumberIdHasBeenSet = true; m_originationPhoneNumberId = value; }
    inline void SetOriginationPhoneNumberId(Aws::String&& value) { m_originationPhoneNumberIdHasBeenSet = true; m_originationPhoneNumberId = std::move(value); }
    inline void SetOriginationPhoneNumberId(const char* value) { m_originationPhoneNumberIdHasBeenSet = true; m_originationPhoneNumberId.assign(value); }
    inline SendWhatsAppMessageRequest& WithOriginationPhoneNumberId(const Aws::String& value) { SetOriginationPhoneNumberId(value); return *this;}
    inline SendWhatsAppMessageRequest& WithOriginationPhoneNumberId(Aws::String&& value) { SetOriginationPhoneNumberId(std::move(value)); return *this;}
    inline SendWhatsAppMessageRequest& WithOriginationPhoneNumberId(const char* value) { SetOriginationPhoneNumberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message to send through WhatsApp. The length is in KB. The message field
     * passes through a WhatsApp Message object, see <a
     * href="https://developers.facebook.com/docs/whatsapp/cloud-api/reference/messages">Messages</a>
     * in the <i>WhatsApp Business Platform Cloud API Reference</i>.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::Utils::CryptoBuffer& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::Utils::CryptoBuffer&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline SendWhatsAppMessageRequest& WithMessage(const Aws::Utils::CryptoBuffer& value) { SetMessage(value); return *this;}
    inline SendWhatsAppMessageRequest& WithMessage(Aws::Utils::CryptoBuffer&& value) { SetMessage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API version for the request formatted as <code>v{VersionNumber}</code>.
     * For a list of supported API versions and Amazon Web Services Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/end-user-messaging.html">
     * <i>Amazon Web Services End User Messaging Social API</i> Service Endpoints</a>
     * in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline const Aws::String& GetMetaApiVersion() const{ return m_metaApiVersion; }
    inline bool MetaApiVersionHasBeenSet() const { return m_metaApiVersionHasBeenSet; }
    inline void SetMetaApiVersion(const Aws::String& value) { m_metaApiVersionHasBeenSet = true; m_metaApiVersion = value; }
    inline void SetMetaApiVersion(Aws::String&& value) { m_metaApiVersionHasBeenSet = true; m_metaApiVersion = std::move(value); }
    inline void SetMetaApiVersion(const char* value) { m_metaApiVersionHasBeenSet = true; m_metaApiVersion.assign(value); }
    inline SendWhatsAppMessageRequest& WithMetaApiVersion(const Aws::String& value) { SetMetaApiVersion(value); return *this;}
    inline SendWhatsAppMessageRequest& WithMetaApiVersion(Aws::String&& value) { SetMetaApiVersion(std::move(value)); return *this;}
    inline SendWhatsAppMessageRequest& WithMetaApiVersion(const char* value) { SetMetaApiVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_originationPhoneNumberId;
    bool m_originationPhoneNumberIdHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_metaApiVersion;
    bool m_metaApiVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
