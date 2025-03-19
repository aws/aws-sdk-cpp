/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/SocialMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/model/S3PresignedUrl.h>
#include <aws/socialmessaging/model/S3File.h>
#include <utility>

namespace Aws
{
namespace SocialMessaging
{
namespace Model
{

  /**
   */
  class GetWhatsAppMessageMediaRequest : public SocialMessagingRequest
  {
  public:
    AWS_SOCIALMESSAGING_API GetWhatsAppMessageMediaRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWhatsAppMessageMedia"; }

    AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the media file.</p>
     */
    inline const Aws::String& GetMediaId() const { return m_mediaId; }
    inline bool MediaIdHasBeenSet() const { return m_mediaIdHasBeenSet; }
    template<typename MediaIdT = Aws::String>
    void SetMediaId(MediaIdT&& value) { m_mediaIdHasBeenSet = true; m_mediaId = std::forward<MediaIdT>(value); }
    template<typename MediaIdT = Aws::String>
    GetWhatsAppMessageMediaRequest& WithMediaId(MediaIdT&& value) { SetMediaId(std::forward<MediaIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the originating phone number for the WhatsApp
     * message media. The phone number identifiers are formatted as
     * <code>phone-number-id-01234567890123456789012345678901</code>. Use <a
     * href="https://docs.aws.amazon.com/social-messaging/latest/APIReference/API_GetLinkedWhatsAppBusinessAccountPhoneNumber.html">GetLinkedWhatsAppBusinessAccount</a>
     * to find a phone number's id.</p>
     */
    inline const Aws::String& GetOriginationPhoneNumberId() const { return m_originationPhoneNumberId; }
    inline bool OriginationPhoneNumberIdHasBeenSet() const { return m_originationPhoneNumberIdHasBeenSet; }
    template<typename OriginationPhoneNumberIdT = Aws::String>
    void SetOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) { m_originationPhoneNumberIdHasBeenSet = true; m_originationPhoneNumberId = std::forward<OriginationPhoneNumberIdT>(value); }
    template<typename OriginationPhoneNumberIdT = Aws::String>
    GetWhatsAppMessageMediaRequest& WithOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) { SetOriginationPhoneNumberId(std::forward<OriginationPhoneNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>True</code> to get only the metadata for the file.</p>
     */
    inline bool GetMetadataOnly() const { return m_metadataOnly; }
    inline bool MetadataOnlyHasBeenSet() const { return m_metadataOnlyHasBeenSet; }
    inline void SetMetadataOnly(bool value) { m_metadataOnlyHasBeenSet = true; m_metadataOnly = value; }
    inline GetWhatsAppMessageMediaRequest& WithMetadataOnly(bool value) { SetMetadataOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The presign url of the media file.</p>
     */
    inline const S3PresignedUrl& GetDestinationS3PresignedUrl() const { return m_destinationS3PresignedUrl; }
    inline bool DestinationS3PresignedUrlHasBeenSet() const { return m_destinationS3PresignedUrlHasBeenSet; }
    template<typename DestinationS3PresignedUrlT = S3PresignedUrl>
    void SetDestinationS3PresignedUrl(DestinationS3PresignedUrlT&& value) { m_destinationS3PresignedUrlHasBeenSet = true; m_destinationS3PresignedUrl = std::forward<DestinationS3PresignedUrlT>(value); }
    template<typename DestinationS3PresignedUrlT = S3PresignedUrl>
    GetWhatsAppMessageMediaRequest& WithDestinationS3PresignedUrl(DestinationS3PresignedUrlT&& value) { SetDestinationS3PresignedUrl(std::forward<DestinationS3PresignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>bucketName</code> and <code>key</code> of the S3 media file.</p>
     */
    inline const S3File& GetDestinationS3File() const { return m_destinationS3File; }
    inline bool DestinationS3FileHasBeenSet() const { return m_destinationS3FileHasBeenSet; }
    template<typename DestinationS3FileT = S3File>
    void SetDestinationS3File(DestinationS3FileT&& value) { m_destinationS3FileHasBeenSet = true; m_destinationS3File = std::forward<DestinationS3FileT>(value); }
    template<typename DestinationS3FileT = S3File>
    GetWhatsAppMessageMediaRequest& WithDestinationS3File(DestinationS3FileT&& value) { SetDestinationS3File(std::forward<DestinationS3FileT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mediaId;
    bool m_mediaIdHasBeenSet = false;

    Aws::String m_originationPhoneNumberId;
    bool m_originationPhoneNumberIdHasBeenSet = false;

    bool m_metadataOnly{false};
    bool m_metadataOnlyHasBeenSet = false;

    S3PresignedUrl m_destinationS3PresignedUrl;
    bool m_destinationS3PresignedUrlHasBeenSet = false;

    S3File m_destinationS3File;
    bool m_destinationS3FileHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
