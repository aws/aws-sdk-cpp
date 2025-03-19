/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/CopyFromSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/AttachmentStatus.h>
#include <aws/qbusiness/model/ErrorDetail.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>An attachment in an Amazon Q Business conversation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/Attachment">AWS
   * API Reference</a></p>
   */
  class Attachment
  {
  public:
    AWS_QBUSINESS_API Attachment() = default;
    AWS_QBUSINESS_API Attachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Attachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    template<typename AttachmentIdT = Aws::String>
    void SetAttachmentId(AttachmentIdT&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::forward<AttachmentIdT>(value); }
    template<typename AttachmentIdT = Aws::String>
    Attachment& WithAttachmentId(AttachmentIdT&& value) { SetAttachmentId(std::forward<AttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business conversation the attachment is
     * associated with.</p>
     */
    inline const Aws::String& GetConversationId() const { return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    template<typename ConversationIdT = Aws::String>
    void SetConversationId(ConversationIdT&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::forward<ConversationIdT>(value); }
    template<typename ConversationIdT = Aws::String>
    Attachment& WithConversationId(ConversationIdT&& value) { SetConversationId(std::forward<ConversationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filename of the Amazon Q Business attachment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Attachment& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A CopyFromSource containing a reference to the original source of the Amazon
     * Q Business attachment.</p>
     */
    inline const CopyFromSource& GetCopyFrom() const { return m_copyFrom; }
    inline bool CopyFromHasBeenSet() const { return m_copyFromHasBeenSet; }
    template<typename CopyFromT = CopyFromSource>
    void SetCopyFrom(CopyFromT&& value) { m_copyFromHasBeenSet = true; m_copyFrom = std::forward<CopyFromT>(value); }
    template<typename CopyFromT = CopyFromSource>
    Attachment& WithCopyFrom(CopyFromT&& value) { SetCopyFrom(std::forward<CopyFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filetype of the Amazon Q Business attachment.</p>
     */
    inline const Aws::String& GetFileType() const { return m_fileType; }
    inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }
    template<typename FileTypeT = Aws::String>
    void SetFileType(FileTypeT&& value) { m_fileTypeHasBeenSet = true; m_fileType = std::forward<FileTypeT>(value); }
    template<typename FileTypeT = Aws::String>
    Attachment& WithFileType(FileTypeT&& value) { SetFileType(std::forward<FileTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Size in bytes of the Amazon Q Business attachment.</p>
     */
    inline int GetFileSize() const { return m_fileSize; }
    inline bool FileSizeHasBeenSet() const { return m_fileSizeHasBeenSet; }
    inline void SetFileSize(int value) { m_fileSizeHasBeenSet = true; m_fileSize = value; }
    inline Attachment& WithFileSize(int value) { SetFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>MD5 checksum of the Amazon Q Business attachment contents.</p>
     */
    inline const Aws::String& GetMd5chksum() const { return m_md5chksum; }
    inline bool Md5chksumHasBeenSet() const { return m_md5chksumHasBeenSet; }
    template<typename Md5chksumT = Aws::String>
    void SetMd5chksum(Md5chksumT&& value) { m_md5chksumHasBeenSet = true; m_md5chksum = std::forward<Md5chksumT>(value); }
    template<typename Md5chksumT = Aws::String>
    Attachment& WithMd5chksum(Md5chksumT&& value) { SetMd5chksum(std::forward<Md5chksumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business attachment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Attachment& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AttachmentStatus of the Amazon Q Business attachment.</p>
     */
    inline AttachmentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AttachmentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Attachment& WithStatus(AttachmentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ErrorDetail providing information about a Amazon Q Business attachment error.
     * </p>
     */
    inline const ErrorDetail& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ErrorDetail>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorDetail>
    Attachment& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CopyFromSource m_copyFrom;
    bool m_copyFromHasBeenSet = false;

    Aws::String m_fileType;
    bool m_fileTypeHasBeenSet = false;

    int m_fileSize{0};
    bool m_fileSizeHasBeenSet = false;

    Aws::String m_md5chksum;
    bool m_md5chksumHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    AttachmentStatus m_status{AttachmentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
