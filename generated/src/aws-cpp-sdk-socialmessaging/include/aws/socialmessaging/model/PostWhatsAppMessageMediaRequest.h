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
  class PostWhatsAppMessageMediaRequest : public SocialMessagingRequest
  {
  public:
    AWS_SOCIALMESSAGING_API PostWhatsAppMessageMediaRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PostWhatsAppMessageMedia"; }

    AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the phone number to associate with the WhatsApp media file. The
     * phone number identifiers are formatted as
     * <code>phone-number-id-01234567890123456789012345678901</code>. Use <a
     * href="https://docs.aws.amazon.com/social-messaging/latest/APIReference/API_GetLinkedWhatsAppBusinessAccountPhoneNumber.html">GetLinkedWhatsAppBusinessAccount</a>
     * to find a phone number's id.</p>
     */
    inline const Aws::String& GetOriginationPhoneNumberId() const { return m_originationPhoneNumberId; }
    inline bool OriginationPhoneNumberIdHasBeenSet() const { return m_originationPhoneNumberIdHasBeenSet; }
    template<typename OriginationPhoneNumberIdT = Aws::String>
    void SetOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) { m_originationPhoneNumberIdHasBeenSet = true; m_originationPhoneNumberId = std::forward<OriginationPhoneNumberIdT>(value); }
    template<typename OriginationPhoneNumberIdT = Aws::String>
    PostWhatsAppMessageMediaRequest& WithOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) { SetOriginationPhoneNumberId(std::forward<OriginationPhoneNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source presign url of the media file.</p>
     */
    inline const S3PresignedUrl& GetSourceS3PresignedUrl() const { return m_sourceS3PresignedUrl; }
    inline bool SourceS3PresignedUrlHasBeenSet() const { return m_sourceS3PresignedUrlHasBeenSet; }
    template<typename SourceS3PresignedUrlT = S3PresignedUrl>
    void SetSourceS3PresignedUrl(SourceS3PresignedUrlT&& value) { m_sourceS3PresignedUrlHasBeenSet = true; m_sourceS3PresignedUrl = std::forward<SourceS3PresignedUrlT>(value); }
    template<typename SourceS3PresignedUrlT = S3PresignedUrl>
    PostWhatsAppMessageMediaRequest& WithSourceS3PresignedUrl(SourceS3PresignedUrlT&& value) { SetSourceS3PresignedUrl(std::forward<SourceS3PresignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source S3 url for the media file.</p>
     */
    inline const S3File& GetSourceS3File() const { return m_sourceS3File; }
    inline bool SourceS3FileHasBeenSet() const { return m_sourceS3FileHasBeenSet; }
    template<typename SourceS3FileT = S3File>
    void SetSourceS3File(SourceS3FileT&& value) { m_sourceS3FileHasBeenSet = true; m_sourceS3File = std::forward<SourceS3FileT>(value); }
    template<typename SourceS3FileT = S3File>
    PostWhatsAppMessageMediaRequest& WithSourceS3File(SourceS3FileT&& value) { SetSourceS3File(std::forward<SourceS3FileT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_originationPhoneNumberId;
    bool m_originationPhoneNumberIdHasBeenSet = false;

    S3PresignedUrl m_sourceS3PresignedUrl;
    bool m_sourceS3PresignedUrlHasBeenSet = false;

    S3File m_sourceS3File;
    bool m_sourceS3FileHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
