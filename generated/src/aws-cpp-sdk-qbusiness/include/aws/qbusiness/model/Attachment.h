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
    AWS_QBUSINESS_API Attachment();
    AWS_QBUSINESS_API Attachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Attachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }
    inline Attachment& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}
    inline Attachment& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}
    inline Attachment& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business conversation the attachment is
     * associated with.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }
    inline Attachment& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}
    inline Attachment& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}
    inline Attachment& WithConversationId(const char* value) { SetConversationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filename of the Amazon Q Business attachment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Attachment& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Attachment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Attachment& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A CopyFromSource containing a reference to the original source of the Amazon
     * Q Business attachment.</p>
     */
    inline const CopyFromSource& GetCopyFrom() const{ return m_copyFrom; }
    inline bool CopyFromHasBeenSet() const { return m_copyFromHasBeenSet; }
    inline void SetCopyFrom(const CopyFromSource& value) { m_copyFromHasBeenSet = true; m_copyFrom = value; }
    inline void SetCopyFrom(CopyFromSource&& value) { m_copyFromHasBeenSet = true; m_copyFrom = std::move(value); }
    inline Attachment& WithCopyFrom(const CopyFromSource& value) { SetCopyFrom(value); return *this;}
    inline Attachment& WithCopyFrom(CopyFromSource&& value) { SetCopyFrom(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filetype of the Amazon Q Business attachment.</p>
     */
    inline const Aws::String& GetFileType() const{ return m_fileType; }
    inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }
    inline void SetFileType(const Aws::String& value) { m_fileTypeHasBeenSet = true; m_fileType = value; }
    inline void SetFileType(Aws::String&& value) { m_fileTypeHasBeenSet = true; m_fileType = std::move(value); }
    inline void SetFileType(const char* value) { m_fileTypeHasBeenSet = true; m_fileType.assign(value); }
    inline Attachment& WithFileType(const Aws::String& value) { SetFileType(value); return *this;}
    inline Attachment& WithFileType(Aws::String&& value) { SetFileType(std::move(value)); return *this;}
    inline Attachment& WithFileType(const char* value) { SetFileType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Size in bytes of the Amazon Q Business attachment.</p>
     */
    inline int GetFileSize() const{ return m_fileSize; }
    inline bool FileSizeHasBeenSet() const { return m_fileSizeHasBeenSet; }
    inline void SetFileSize(int value) { m_fileSizeHasBeenSet = true; m_fileSize = value; }
    inline Attachment& WithFileSize(int value) { SetFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>MD5 checksum of the Amazon Q Business attachment contents.</p>
     */
    inline const Aws::String& GetMd5chksum() const{ return m_md5chksum; }
    inline bool Md5chksumHasBeenSet() const { return m_md5chksumHasBeenSet; }
    inline void SetMd5chksum(const Aws::String& value) { m_md5chksumHasBeenSet = true; m_md5chksum = value; }
    inline void SetMd5chksum(Aws::String&& value) { m_md5chksumHasBeenSet = true; m_md5chksum = std::move(value); }
    inline void SetMd5chksum(const char* value) { m_md5chksumHasBeenSet = true; m_md5chksum.assign(value); }
    inline Attachment& WithMd5chksum(const Aws::String& value) { SetMd5chksum(value); return *this;}
    inline Attachment& WithMd5chksum(Aws::String&& value) { SetMd5chksum(std::move(value)); return *this;}
    inline Attachment& WithMd5chksum(const char* value) { SetMd5chksum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business attachment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Attachment& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Attachment& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AttachmentStatus of the Amazon Q Business attachment.</p>
     */
    inline const AttachmentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AttachmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AttachmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Attachment& WithStatus(const AttachmentStatus& value) { SetStatus(value); return *this;}
    inline Attachment& WithStatus(AttachmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ErrorDetail providing information about a Amazon Q Business attachment error.
     * </p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const ErrorDetail& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(ErrorDetail&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline Attachment& WithError(const ErrorDetail& value) { SetError(value); return *this;}
    inline Attachment& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}
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

    int m_fileSize;
    bool m_fileSizeHasBeenSet = false;

    Aws::String m_md5chksum;
    bool m_md5chksumHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    AttachmentStatus m_status;
    bool m_statusHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
