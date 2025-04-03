/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/sesv2/model/AttachmentContentDisposition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/AttachmentContentTransferEncoding.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p> Contains metadata and attachment raw content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/Attachment">AWS
   * API Reference</a></p>
   */
  class Attachment
  {
  public:
    AWS_SESV2_API Attachment() = default;
    AWS_SESV2_API Attachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Attachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The raw data of the attachment. It needs to be base64-encoded if you are
     * accessing Amazon SES directly through the HTTPS interface. If you are accessing
     * Amazon SES using an Amazon Web Services SDK, the SDK takes care of the base
     * 64-encoding for you.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetRawContent() const { return m_rawContent; }
    inline bool RawContentHasBeenSet() const { return m_rawContentHasBeenSet; }
    template<typename RawContentT = Aws::Utils::ByteBuffer>
    void SetRawContent(RawContentT&& value) { m_rawContentHasBeenSet = true; m_rawContent = std::forward<RawContentT>(value); }
    template<typename RawContentT = Aws::Utils::ByteBuffer>
    Attachment& WithRawContent(RawContentT&& value) { SetRawContent(std::forward<RawContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A standard descriptor indicating how the attachment should be rendered in
     * the email. Supported values: <code>ATTACHMENT</code> or <code>INLINE</code>.</p>
     */
    inline AttachmentContentDisposition GetContentDisposition() const { return m_contentDisposition; }
    inline bool ContentDispositionHasBeenSet() const { return m_contentDispositionHasBeenSet; }
    inline void SetContentDisposition(AttachmentContentDisposition value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = value; }
    inline Attachment& WithContentDisposition(AttachmentContentDisposition value) { SetContentDisposition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file name for the attachment as it will appear in the email. Amazon SES
     * restricts certain file extensions. To ensure attachments are accepted, check the
     * <a href="https://docs.aws.amazon.com/ses/latest/dg/mime-types.html">Unsupported
     * attachment types</a> in the Amazon SES Developer Guide.</p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    Attachment& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A brief description of the attachment content.</p>
     */
    inline const Aws::String& GetContentDescription() const { return m_contentDescription; }
    inline bool ContentDescriptionHasBeenSet() const { return m_contentDescriptionHasBeenSet; }
    template<typename ContentDescriptionT = Aws::String>
    void SetContentDescription(ContentDescriptionT&& value) { m_contentDescriptionHasBeenSet = true; m_contentDescription = std::forward<ContentDescriptionT>(value); }
    template<typename ContentDescriptionT = Aws::String>
    Attachment& WithContentDescription(ContentDescriptionT&& value) { SetContentDescription(std::forward<ContentDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Unique identifier for the attachment, used for referencing attachments with
     * INLINE disposition in HTML content.</p>
     */
    inline const Aws::String& GetContentId() const { return m_contentId; }
    inline bool ContentIdHasBeenSet() const { return m_contentIdHasBeenSet; }
    template<typename ContentIdT = Aws::String>
    void SetContentId(ContentIdT&& value) { m_contentIdHasBeenSet = true; m_contentId = std::forward<ContentIdT>(value); }
    template<typename ContentIdT = Aws::String>
    Attachment& WithContentId(ContentIdT&& value) { SetContentId(std::forward<ContentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies how the attachment is encoded. Supported values:
     * <code>BASE64</code>, <code>QUOTED_PRINTABLE</code>, <code>SEVEN_BIT</code>.</p>
     */
    inline AttachmentContentTransferEncoding GetContentTransferEncoding() const { return m_contentTransferEncoding; }
    inline bool ContentTransferEncodingHasBeenSet() const { return m_contentTransferEncodingHasBeenSet; }
    inline void SetContentTransferEncoding(AttachmentContentTransferEncoding value) { m_contentTransferEncodingHasBeenSet = true; m_contentTransferEncoding = value; }
    inline Attachment& WithContentTransferEncoding(AttachmentContentTransferEncoding value) { SetContentTransferEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The MIME type of the attachment.</p>  <p>Example:
     * <code>application/pdf</code>, <code>image/jpeg</code> </p> 
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    Attachment& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_rawContent{};
    bool m_rawContentHasBeenSet = false;

    AttachmentContentDisposition m_contentDisposition{AttachmentContentDisposition::NOT_SET};
    bool m_contentDispositionHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    Aws::String m_contentDescription;
    bool m_contentDescriptionHasBeenSet = false;

    Aws::String m_contentId;
    bool m_contentIdHasBeenSet = false;

    AttachmentContentTransferEncoding m_contentTransferEncoding{AttachmentContentTransferEncoding::NOT_SET};
    bool m_contentTransferEncodingHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
