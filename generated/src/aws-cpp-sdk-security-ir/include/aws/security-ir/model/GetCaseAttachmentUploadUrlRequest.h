/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/SecurityIRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

  /**
   */
  class GetCaseAttachmentUploadUrlRequest : public SecurityIRRequest
  {
  public:
    AWS_SECURITYIR_API GetCaseAttachmentUploadUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCaseAttachmentUploadUrl"; }

    AWS_SECURITYIR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Required element for GetCaseAttachmentUploadUrl to identify the case ID for
     * uploading an attachment to. </p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }
    inline GetCaseAttachmentUploadUrlRequest& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}
    inline GetCaseAttachmentUploadUrlRequest& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}
    inline GetCaseAttachmentUploadUrlRequest& WithCaseId(const char* value) { SetCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element for GetCaseAttachmentUploadUrl to identify the file name of
     * the attachment to upload. </p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }
    inline GetCaseAttachmentUploadUrlRequest& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}
    inline GetCaseAttachmentUploadUrlRequest& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}
    inline GetCaseAttachmentUploadUrlRequest& WithFileName(const char* value) { SetFileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element for GetCaseAttachmentUploadUrl to identify the size od the
     * file attachment.</p>
     */
    inline long long GetContentLength() const{ return m_contentLength; }
    inline bool ContentLengthHasBeenSet() const { return m_contentLengthHasBeenSet; }
    inline void SetContentLength(long long value) { m_contentLengthHasBeenSet = true; m_contentLength = value; }
    inline GetCaseAttachmentUploadUrlRequest& WithContentLength(long long value) { SetContentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for customer provided token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline GetCaseAttachmentUploadUrlRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline GetCaseAttachmentUploadUrlRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline GetCaseAttachmentUploadUrlRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    long long m_contentLength;
    bool m_contentLengthHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
