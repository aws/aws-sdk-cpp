/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/SecurityIRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

  /**
   */
  class GetCaseAttachmentDownloadUrlRequest : public SecurityIRRequest
  {
  public:
    AWS_SECURITYIR_API GetCaseAttachmentDownloadUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCaseAttachmentDownloadUrl"; }

    AWS_SECURITYIR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Required element for GetCaseAttachmentDownloadUrl to identify the case ID for
     * downloading an attachment from. </p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }
    inline GetCaseAttachmentDownloadUrlRequest& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}
    inline GetCaseAttachmentDownloadUrlRequest& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}
    inline GetCaseAttachmentDownloadUrlRequest& WithCaseId(const char* value) { SetCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element for GetCaseAttachmentDownloadUrl to identify the attachment
     * ID for downloading an attachment. </p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }
    inline GetCaseAttachmentDownloadUrlRequest& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}
    inline GetCaseAttachmentDownloadUrlRequest& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}
    inline GetCaseAttachmentDownloadUrlRequest& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
