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
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationAttachmentRequest() = default;

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
    inline const Aws::Utils::ByteBuffer& GetAttachmentBody() const { return m_attachmentBody; }
    inline bool AttachmentBodyHasBeenSet() const { return m_attachmentBodyHasBeenSet; }
    template<typename AttachmentBodyT = Aws::Utils::ByteBuffer>
    void SetAttachmentBody(AttachmentBodyT&& value) { m_attachmentBodyHasBeenSet = true; m_attachmentBody = std::forward<AttachmentBodyT>(value); }
    template<typename AttachmentBodyT = Aws::Utils::ByteBuffer>
    CreateRegistrationAttachmentRequest& WithAttachmentBody(AttachmentBodyT&& value) { SetAttachmentBody(std::forward<AttachmentBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Registration files have to be stored in an Amazon S3 bucket. The URI to use
     * when sending is in the format <code>s3://BucketName/FileName</code>.</p>
     */
    inline const Aws::String& GetAttachmentUrl() const { return m_attachmentUrl; }
    inline bool AttachmentUrlHasBeenSet() const { return m_attachmentUrlHasBeenSet; }
    template<typename AttachmentUrlT = Aws::String>
    void SetAttachmentUrl(AttachmentUrlT&& value) { m_attachmentUrlHasBeenSet = true; m_attachmentUrl = std::forward<AttachmentUrlT>(value); }
    template<typename AttachmentUrlT = Aws::String>
    CreateRegistrationAttachmentRequest& WithAttachmentUrl(AttachmentUrlT&& value) { SetAttachmentUrl(std::forward<AttachmentUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of tags (key and value pairs) to associate with the registration
     * attachment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateRegistrationAttachmentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateRegistrationAttachmentRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    CreateRegistrationAttachmentRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_attachmentBody{};
    bool m_attachmentBodyHasBeenSet = false;

    Aws::String m_attachmentUrl;
    bool m_attachmentUrlHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
