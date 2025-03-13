/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/SocialMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SocialMessaging
{
namespace Model
{

  /**
   */
  class DeleteWhatsAppMessageMediaRequest : public SocialMessagingRequest
  {
  public:
    AWS_SOCIALMESSAGING_API DeleteWhatsAppMessageMediaRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWhatsAppMessageMedia"; }

    AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;

    AWS_SOCIALMESSAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier of the media file to delete. Use the
     * <code>mediaId</code> returned from <a
     * href="https://console.aws.amazon.com/social-messaging/latest/APIReference/API_PostWhatsAppMessageMedia.html">PostWhatsAppMessageMedia</a>.</p>
     */
    inline const Aws::String& GetMediaId() const { return m_mediaId; }
    inline bool MediaIdHasBeenSet() const { return m_mediaIdHasBeenSet; }
    template<typename MediaIdT = Aws::String>
    void SetMediaId(MediaIdT&& value) { m_mediaIdHasBeenSet = true; m_mediaId = std::forward<MediaIdT>(value); }
    template<typename MediaIdT = Aws::String>
    DeleteWhatsAppMessageMediaRequest& WithMediaId(MediaIdT&& value) { SetMediaId(std::forward<MediaIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the originating phone number associated with the
     * media. Phone number identifiers are formatted as
     * <code>phone-number-id-01234567890123456789012345678901</code>. Use <a
     * href="https://docs.aws.amazon.com/social-messaging/latest/APIReference/API_GetLinkedWhatsAppBusinessAccountPhoneNumber.html">GetLinkedWhatsAppBusinessAccount</a>
     * to find a phone number's id.</p>
     */
    inline const Aws::String& GetOriginationPhoneNumberId() const { return m_originationPhoneNumberId; }
    inline bool OriginationPhoneNumberIdHasBeenSet() const { return m_originationPhoneNumberIdHasBeenSet; }
    template<typename OriginationPhoneNumberIdT = Aws::String>
    void SetOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) { m_originationPhoneNumberIdHasBeenSet = true; m_originationPhoneNumberId = std::forward<OriginationPhoneNumberIdT>(value); }
    template<typename OriginationPhoneNumberIdT = Aws::String>
    DeleteWhatsAppMessageMediaRequest& WithOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) { SetOriginationPhoneNumberId(std::forward<OriginationPhoneNumberIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mediaId;
    bool m_mediaIdHasBeenSet = false;

    Aws::String m_originationPhoneNumberId;
    bool m_originationPhoneNumberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
