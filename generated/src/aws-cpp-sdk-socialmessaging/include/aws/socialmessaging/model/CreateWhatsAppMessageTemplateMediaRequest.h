/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/SocialMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateWhatsAppMessageTemplateMediaRequest : public SocialMessagingRequest
  {
  public:
    AWS_SOCIALMESSAGING_API CreateWhatsAppMessageTemplateMediaRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWhatsAppMessageTemplateMedia"; }

    AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the WhatsApp Business Account associated with this media
     * upload.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateWhatsAppMessageTemplateMediaRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3File& GetSourceS3File() const { return m_sourceS3File; }
    inline bool SourceS3FileHasBeenSet() const { return m_sourceS3FileHasBeenSet; }
    template<typename SourceS3FileT = S3File>
    void SetSourceS3File(SourceS3FileT&& value) { m_sourceS3FileHasBeenSet = true; m_sourceS3File = std::forward<SourceS3FileT>(value); }
    template<typename SourceS3FileT = S3File>
    CreateWhatsAppMessageTemplateMediaRequest& WithSourceS3File(SourceS3FileT&& value) { SetSourceS3File(std::forward<SourceS3FileT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    S3File m_sourceS3File;
    bool m_sourceS3FileHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
