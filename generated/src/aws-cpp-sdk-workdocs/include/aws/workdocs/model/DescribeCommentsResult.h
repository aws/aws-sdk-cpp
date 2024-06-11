/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/Comment.h>
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
  class DescribeCommentsResult
  {
  public:
    AWS_WORKDOCS_API DescribeCommentsResult();
    AWS_WORKDOCS_API DescribeCommentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API DescribeCommentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of comments for the specified document version.</p>
     */
    inline const Aws::Vector<Comment>& GetComments() const{ return m_comments; }
    inline void SetComments(const Aws::Vector<Comment>& value) { m_comments = value; }
    inline void SetComments(Aws::Vector<Comment>&& value) { m_comments = std::move(value); }
    inline DescribeCommentsResult& WithComments(const Aws::Vector<Comment>& value) { SetComments(value); return *this;}
    inline DescribeCommentsResult& WithComments(Aws::Vector<Comment>&& value) { SetComments(std::move(value)); return *this;}
    inline DescribeCommentsResult& AddComments(const Comment& value) { m_comments.push_back(value); return *this; }
    inline DescribeCommentsResult& AddComments(Comment&& value) { m_comments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeCommentsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeCommentsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeCommentsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeCommentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeCommentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeCommentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Comment> m_comments;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
