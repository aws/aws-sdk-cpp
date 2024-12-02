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
  class UpdateCaseCommentRequest : public SecurityIRRequest
  {
  public:
    AWS_SECURITYIR_API UpdateCaseCommentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCaseComment"; }

    AWS_SECURITYIR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Required element for UpdateCaseComment to identify the case ID containing the
     * comment to be updated. </p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }
    inline UpdateCaseCommentRequest& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}
    inline UpdateCaseCommentRequest& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}
    inline UpdateCaseCommentRequest& WithCaseId(const char* value) { SetCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element for UpdateCaseComment to identify the case ID to be
     * updated.</p>
     */
    inline const Aws::String& GetCommentId() const{ return m_commentId; }
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }
    inline void SetCommentId(const Aws::String& value) { m_commentIdHasBeenSet = true; m_commentId = value; }
    inline void SetCommentId(Aws::String&& value) { m_commentIdHasBeenSet = true; m_commentId = std::move(value); }
    inline void SetCommentId(const char* value) { m_commentIdHasBeenSet = true; m_commentId.assign(value); }
    inline UpdateCaseCommentRequest& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}
    inline UpdateCaseCommentRequest& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}
    inline UpdateCaseCommentRequest& WithCommentId(const char* value) { SetCommentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element for UpdateCaseComment to identify the content for the
     * comment to be updated.</p>
     */
    inline const Aws::String& GetRequestBody() const{ return m_requestBody; }
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
    inline void SetRequestBody(const Aws::String& value) { m_requestBodyHasBeenSet = true; m_requestBody = value; }
    inline void SetRequestBody(Aws::String&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::move(value); }
    inline void SetRequestBody(const char* value) { m_requestBodyHasBeenSet = true; m_requestBody.assign(value); }
    inline UpdateCaseCommentRequest& WithRequestBody(const Aws::String& value) { SetRequestBody(value); return *this;}
    inline UpdateCaseCommentRequest& WithRequestBody(Aws::String&& value) { SetRequestBody(std::move(value)); return *this;}
    inline UpdateCaseCommentRequest& WithRequestBody(const char* value) { SetRequestBody(value); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet = false;

    Aws::String m_requestBody;
    bool m_requestBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
