/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/Comment.h>
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
namespace WorkDocs
{
namespace Model
{
  class CreateCommentResult
  {
  public:
    AWS_WORKDOCS_API CreateCommentResult();
    AWS_WORKDOCS_API CreateCommentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API CreateCommentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The comment that has been created.</p>
     */
    inline const Comment& GetComment() const{ return m_comment; }

    /**
     * <p>The comment that has been created.</p>
     */
    inline void SetComment(const Comment& value) { m_comment = value; }

    /**
     * <p>The comment that has been created.</p>
     */
    inline void SetComment(Comment&& value) { m_comment = std::move(value); }

    /**
     * <p>The comment that has been created.</p>
     */
    inline CreateCommentResult& WithComment(const Comment& value) { SetComment(value); return *this;}

    /**
     * <p>The comment that has been created.</p>
     */
    inline CreateCommentResult& WithComment(Comment&& value) { SetComment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateCommentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateCommentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateCommentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Comment m_comment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
