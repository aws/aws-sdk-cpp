/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ContentDisposition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_QCONNECT_API MessageTemplateAttachment() = default;
    AWS_QCONNECT_API MessageTemplateAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageTemplateAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The presentation information for the attachment file.</p>
     */
    inline ContentDisposition GetContentDisposition() const { return m_contentDisposition; }
    inline bool ContentDispositionHasBeenSet() const { return m_contentDispositionHasBeenSet; }
    inline void SetContentDisposition(ContentDisposition value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = value; }
    inline MessageTemplateAttachment& WithContentDisposition(ContentDisposition value) { SetContentDisposition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attachment file being uploaded. The name should include the
     * file extension.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MessageTemplateAttachment& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the attachment file was uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetUploadedTime() const { return m_uploadedTime; }
    inline bool UploadedTimeHasBeenSet() const { return m_uploadedTimeHasBeenSet; }
    template<typename UploadedTimeT = Aws::Utils::DateTime>
    void SetUploadedTime(UploadedTimeT&& value) { m_uploadedTimeHasBeenSet = true; m_uploadedTime = std::forward<UploadedTimeT>(value); }
    template<typename UploadedTimeT = Aws::Utils::DateTime>
    MessageTemplateAttachment& WithUploadedTime(UploadedTimeT&& value) { SetUploadedTime(std::forward<UploadedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pre-signed Amazon S3 URL that can be used to download the attachment
     * file.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    MessageTemplateAttachment& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration time of the pre-signed Amazon S3 URL.</p>
     */
    inline const Aws::Utils::DateTime& GetUrlExpiry() const { return m_urlExpiry; }
    inline bool UrlExpiryHasBeenSet() const { return m_urlExpiryHasBeenSet; }
    template<typename UrlExpiryT = Aws::Utils::DateTime>
    void SetUrlExpiry(UrlExpiryT&& value) { m_urlExpiryHasBeenSet = true; m_urlExpiry = std::forward<UrlExpiryT>(value); }
    template<typename UrlExpiryT = Aws::Utils::DateTime>
    MessageTemplateAttachment& WithUrlExpiry(UrlExpiryT&& value) { SetUrlExpiry(std::forward<UrlExpiryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the attachment file.</p>
     */
    inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    template<typename AttachmentIdT = Aws::String>
    void SetAttachmentId(AttachmentIdT&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::forward<AttachmentIdT>(value); }
    template<typename AttachmentIdT = Aws::String>
    MessageTemplateAttachment& WithAttachmentId(AttachmentIdT&& value) { SetAttachmentId(std::forward<AttachmentIdT>(value)); return *this;}
    ///@}
  private:

    ContentDisposition m_contentDisposition{ContentDisposition::NOT_SET};
    bool m_contentDispositionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_uploadedTime{};
    bool m_uploadedTimeHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::Utils::DateTime m_urlExpiry{};
    bool m_urlExpiryHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
