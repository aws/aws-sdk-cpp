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
  class CreateCaseCommentRequest : public SecurityIRRequest
  {
  public:
    AWS_SECURITYIR_API CreateCaseCommentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCaseComment"; }

    AWS_SECURITYIR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Required element used in combination with CreateCaseComment to specify a case
     * ID.</p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }
    inline CreateCaseCommentRequest& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}
    inline CreateCaseCommentRequest& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}
    inline CreateCaseCommentRequest& WithCaseId(const char* value) { SetCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional element used in combination with CreateCaseComment.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateCaseCommentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateCaseCommentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateCaseCommentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateCaseComment to add content
     * for the new comment.</p>
     */
    inline const Aws::String& GetRequestBody() const{ return m_requestBody; }
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
    inline void SetRequestBody(const Aws::String& value) { m_requestBodyHasBeenSet = true; m_requestBody = value; }
    inline void SetRequestBody(Aws::String&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::move(value); }
    inline void SetRequestBody(const char* value) { m_requestBodyHasBeenSet = true; m_requestBody.assign(value); }
    inline CreateCaseCommentRequest& WithRequestBody(const Aws::String& value) { SetRequestBody(value); return *this;}
    inline CreateCaseCommentRequest& WithRequestBody(Aws::String&& value) { SetRequestBody(std::move(value)); return *this;}
    inline CreateCaseCommentRequest& WithRequestBody(const char* value) { SetRequestBody(value); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_requestBody;
    bool m_requestBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
