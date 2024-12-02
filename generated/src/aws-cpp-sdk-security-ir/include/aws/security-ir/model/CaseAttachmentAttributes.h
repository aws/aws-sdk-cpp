/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/model/CaseAttachmentStatus.h>
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
namespace SecurityIR
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/CaseAttachmentAttributes">AWS
   * API Reference</a></p>
   */
  class CaseAttachmentAttributes
  {
  public:
    AWS_SECURITYIR_API CaseAttachmentAttributes();
    AWS_SECURITYIR_API CaseAttachmentAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API CaseAttachmentAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }
    inline CaseAttachmentAttributes& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}
    inline CaseAttachmentAttributes& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}
    inline CaseAttachmentAttributes& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }
    inline CaseAttachmentAttributes& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}
    inline CaseAttachmentAttributes& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}
    inline CaseAttachmentAttributes& WithFileName(const char* value) { SetFileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const CaseAttachmentStatus& GetAttachmentStatus() const{ return m_attachmentStatus; }
    inline bool AttachmentStatusHasBeenSet() const { return m_attachmentStatusHasBeenSet; }
    inline void SetAttachmentStatus(const CaseAttachmentStatus& value) { m_attachmentStatusHasBeenSet = true; m_attachmentStatus = value; }
    inline void SetAttachmentStatus(CaseAttachmentStatus&& value) { m_attachmentStatusHasBeenSet = true; m_attachmentStatus = std::move(value); }
    inline CaseAttachmentAttributes& WithAttachmentStatus(const CaseAttachmentStatus& value) { SetAttachmentStatus(value); return *this;}
    inline CaseAttachmentAttributes& WithAttachmentStatus(CaseAttachmentStatus&& value) { SetAttachmentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetCreator() const{ return m_creator; }
    inline bool CreatorHasBeenSet() const { return m_creatorHasBeenSet; }
    inline void SetCreator(const Aws::String& value) { m_creatorHasBeenSet = true; m_creator = value; }
    inline void SetCreator(Aws::String&& value) { m_creatorHasBeenSet = true; m_creator = std::move(value); }
    inline void SetCreator(const char* value) { m_creatorHasBeenSet = true; m_creator.assign(value); }
    inline CaseAttachmentAttributes& WithCreator(const Aws::String& value) { SetCreator(value); return *this;}
    inline CaseAttachmentAttributes& WithCreator(Aws::String&& value) { SetCreator(std::move(value)); return *this;}
    inline CaseAttachmentAttributes& WithCreator(const char* value) { SetCreator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline CaseAttachmentAttributes& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline CaseAttachmentAttributes& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    CaseAttachmentStatus m_attachmentStatus;
    bool m_attachmentStatusHasBeenSet = false;

    Aws::String m_creator;
    bool m_creatorHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
