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
    AWS_SECURITYIR_API CaseAttachmentAttributes() = default;
    AWS_SECURITYIR_API CaseAttachmentAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API CaseAttachmentAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    template<typename AttachmentIdT = Aws::String>
    void SetAttachmentId(AttachmentIdT&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::forward<AttachmentIdT>(value); }
    template<typename AttachmentIdT = Aws::String>
    CaseAttachmentAttributes& WithAttachmentId(AttachmentIdT&& value) { SetAttachmentId(std::forward<AttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    CaseAttachmentAttributes& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline CaseAttachmentStatus GetAttachmentStatus() const { return m_attachmentStatus; }
    inline bool AttachmentStatusHasBeenSet() const { return m_attachmentStatusHasBeenSet; }
    inline void SetAttachmentStatus(CaseAttachmentStatus value) { m_attachmentStatusHasBeenSet = true; m_attachmentStatus = value; }
    inline CaseAttachmentAttributes& WithAttachmentStatus(CaseAttachmentStatus value) { SetAttachmentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetCreator() const { return m_creator; }
    inline bool CreatorHasBeenSet() const { return m_creatorHasBeenSet; }
    template<typename CreatorT = Aws::String>
    void SetCreator(CreatorT&& value) { m_creatorHasBeenSet = true; m_creator = std::forward<CreatorT>(value); }
    template<typename CreatorT = Aws::String>
    CaseAttachmentAttributes& WithCreator(CreatorT&& value) { SetCreator(std::forward<CreatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    CaseAttachmentAttributes& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    CaseAttachmentStatus m_attachmentStatus{CaseAttachmentStatus::NOT_SET};
    bool m_attachmentStatusHasBeenSet = false;

    Aws::String m_creator;
    bool m_creatorHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
