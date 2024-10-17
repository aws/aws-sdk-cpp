/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateRegistrationAttachmentRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRegistrationAttachment"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The registration file to upload. The maximum file size is 500KB and valid
     * file extensions are PDF, JPEG and PNG.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetAttachmentBody() const{ return m_attachmentBody; }
    inline bool AttachmentBodyHasBeenSet() const { return m_attachmentBodyHasBeenSet; }
    inline void SetAttachmentBody(const Aws::Utils::ByteBuffer& value) { m_attachmentBodyHasBeenSet = true; m_attachmentBody = value; }
    inline void SetAttachmentBody(Aws::Utils::ByteBuffer&& value) { m_attachmentBodyHasBeenSet = true; m_attachmentBody = std::move(value); }
    inline CreateRegistrationAttachmentRequest& WithAttachmentBody(const Aws::Utils::ByteBuffer& value) { SetAttachmentBody(value); return *this;}
    inline CreateRegistrationAttachmentRequest& WithAttachmentBody(Aws::Utils::ByteBuffer&& value) { SetAttachmentBody(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Registration files have to be stored in an Amazon S3 bucket. The URI to use
     * when sending is in the format <code>s3://BucketName/FileName</code>.</p>
     */
    inline const Aws::String& GetAttachmentUrl() const{ return m_attachmentUrl; }
    inline bool AttachmentUrlHasBeenSet() const { return m_attachmentUrlHasBeenSet; }
    inline void SetAttachmentUrl(const Aws::String& value) { m_attachmentUrlHasBeenSet = true; m_attachmentUrl = value; }
    inline void SetAttachmentUrl(Aws::String&& value) { m_attachmentUrlHasBeenSet = true; m_attachmentUrl = std::move(value); }
    inline void SetAttachmentUrl(const char* value) { m_attachmentUrlHasBeenSet = true; m_attachmentUrl.assign(value); }
    inline CreateRegistrationAttachmentRequest& WithAttachmentUrl(const Aws::String& value) { SetAttachmentUrl(value); return *this;}
    inline CreateRegistrationAttachmentRequest& WithAttachmentUrl(Aws::String&& value) { SetAttachmentUrl(std::move(value)); return *this;}
    inline CreateRegistrationAttachmentRequest& WithAttachmentUrl(const char* value) { SetAttachmentUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of tags (key and value pairs) to associate with the registration
     * attachment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateRegistrationAttachmentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateRegistrationAttachmentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateRegistrationAttachmentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateRegistrationAttachmentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
    inline CreateRegistrationAttachmentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateRegistrationAttachmentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateRegistrationAttachmentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_attachmentBody;
    bool m_attachmentBodyHasBeenSet = false;

    Aws::String m_attachmentUrl;
    bool m_attachmentUrlHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
