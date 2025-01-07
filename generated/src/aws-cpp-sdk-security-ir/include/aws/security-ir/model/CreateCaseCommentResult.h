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
  class CreateCaseCommentResult
  {
  public:
    AWS_SECURITYIR_API CreateCaseCommentResult();
    AWS_SECURITYIR_API CreateCaseCommentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API CreateCaseCommentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Response element indicating the new comment ID.</p>
     */
    inline const Aws::String& GetCommentId() const{ return m_commentId; }
    inline void SetCommentId(const Aws::String& value) { m_commentId = value; }
    inline void SetCommentId(Aws::String&& value) { m_commentId = std::move(value); }
    inline void SetCommentId(const char* value) { m_commentId.assign(value); }
    inline CreateCaseCommentResult& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}
    inline CreateCaseCommentResult& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}
    inline CreateCaseCommentResult& WithCommentId(const char* value) { SetCommentId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCaseCommentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCaseCommentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCaseCommentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_commentId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
