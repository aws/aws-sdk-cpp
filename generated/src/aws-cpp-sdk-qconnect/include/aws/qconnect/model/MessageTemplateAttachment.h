/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ContentDisposition.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QConnect
{
namespace Model
{

  /**
   * <p>Information about the message template attachment.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageTemplateAttachment">AWS
   * API Reference</a></p>
   */
  class MessageTemplateAttachment
  {
  public:
    AWS_QCONNECT_API MessageTemplateAttachment();
    AWS_QCONNECT_API MessageTemplateAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageTemplateAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the attachment file.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }
    inline MessageTemplateAttachment& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}
    inline MessageTemplateAttachment& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}
    inline MessageTemplateAttachment& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The presentation information for the attachment file.</p>
     */
    inline const ContentDisposition& GetContentDisposition() const{ return m_contentDisposition; }
    inline bool ContentDispositionHasBeenSet() const { return m_contentDispositionHasBeenSet; }
    inline void SetContentDisposition(const ContentDisposition& value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = value; }
    inline void SetContentDisposition(ContentDisposition&& value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = std::move(value); }
    inline MessageTemplateAttachment& WithContentDisposition(const ContentDisposition& value) { SetContentDisposition(value); return *this;}
    inline MessageTemplateAttachment& WithContentDisposition(ContentDisposition&& value) { SetContentDisposition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attachment file being uploaded. The name should include the
     * file extension.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MessageTemplateAttachment& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MessageTemplateAttachment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MessageTemplateAttachment& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the attachment file was uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetUploadedTime() const{ return m_uploadedTime; }
    inline bool UploadedTimeHasBeenSet() const { return m_uploadedTimeHasBeenSet; }
    inline void SetUploadedTime(const Aws::Utils::DateTime& value) { m_uploadedTimeHasBeenSet = true; m_uploadedTime = value; }
    inline void SetUploadedTime(Aws::Utils::DateTime&& value) { m_uploadedTimeHasBeenSet = true; m_uploadedTime = std::move(value); }
    inline MessageTemplateAttachment& WithUploadedTime(const Aws::Utils::DateTime& value) { SetUploadedTime(value); return *this;}
    inline MessageTemplateAttachment& WithUploadedTime(Aws::Utils::DateTime&& value) { SetUploadedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pre-signed Amazon S3 URL that can be used to download the attachment
     * file.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline MessageTemplateAttachment& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline MessageTemplateAttachment& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline MessageTemplateAttachment& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration time of the pre-signed Amazon S3 URL.</p>
     */
    inline const Aws::Utils::DateTime& GetUrlExpiry() const{ return m_urlExpiry; }
    inline bool UrlExpiryHasBeenSet() const { return m_urlExpiryHasBeenSet; }
    inline void SetUrlExpiry(const Aws::Utils::DateTime& value) { m_urlExpiryHasBeenSet = true; m_urlExpiry = value; }
    inline void SetUrlExpiry(Aws::Utils::DateTime&& value) { m_urlExpiryHasBeenSet = true; m_urlExpiry = std::move(value); }
    inline MessageTemplateAttachment& WithUrlExpiry(const Aws::Utils::DateTime& value) { SetUrlExpiry(value); return *this;}
    inline MessageTemplateAttachment& WithUrlExpiry(Aws::Utils::DateTime&& value) { SetUrlExpiry(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    ContentDisposition m_contentDisposition;
    bool m_contentDispositionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_uploadedTime;
    bool m_uploadedTimeHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::Utils::DateTime m_urlExpiry;
    bool m_urlExpiryHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
