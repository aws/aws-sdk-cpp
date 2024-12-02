/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityIR
{
namespace Model
{
  class UpdateCaseCommentResult
  {
  public:
    AWS_SECURITYIR_API UpdateCaseCommentResult();
    AWS_SECURITYIR_API UpdateCaseCommentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API UpdateCaseCommentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Response element for UpdateCaseComment providing the updated comment ID.</p>
     */
    inline const Aws::String& GetCommentId() const{ return m_commentId; }
    inline void SetCommentId(const Aws::String& value) { m_commentId = value; }
    inline void SetCommentId(Aws::String&& value) { m_commentId = std::move(value); }
    inline void SetCommentId(const char* value) { m_commentId.assign(value); }
    inline UpdateCaseCommentResult& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}
    inline UpdateCaseCommentResult& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}
    inline UpdateCaseCommentResult& WithCommentId(const char* value) { SetCommentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for UpdateCaseComment providing the updated comment
     * content.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline void SetBody(const Aws::String& value) { m_body = value; }
    inline void SetBody(Aws::String&& value) { m_body = std::move(value); }
    inline void SetBody(const char* value) { m_body.assign(value); }
    inline UpdateCaseCommentResult& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline UpdateCaseCommentResult& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline UpdateCaseCommentResult& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateCaseCommentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateCaseCommentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateCaseCommentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_commentId;

    Aws::String m_body;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
