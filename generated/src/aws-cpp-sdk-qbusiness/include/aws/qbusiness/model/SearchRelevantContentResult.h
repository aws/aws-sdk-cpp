/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/RelevantContent.h>
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
namespace QBusiness
{
namespace Model
{
  class SearchRelevantContentResult
  {
  public:
    AWS_QBUSINESS_API SearchRelevantContentResult();
    AWS_QBUSINESS_API SearchRelevantContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API SearchRelevantContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of relevant content items found.</p>
     */
    inline const Aws::Vector<RelevantContent>& GetRelevantContent() const{ return m_relevantContent; }
    inline void SetRelevantContent(const Aws::Vector<RelevantContent>& value) { m_relevantContent = value; }
    inline void SetRelevantContent(Aws::Vector<RelevantContent>&& value) { m_relevantContent = std::move(value); }
    inline SearchRelevantContentResult& WithRelevantContent(const Aws::Vector<RelevantContent>& value) { SetRelevantContent(value); return *this;}
    inline SearchRelevantContentResult& WithRelevantContent(Aws::Vector<RelevantContent>&& value) { SetRelevantContent(std::move(value)); return *this;}
    inline SearchRelevantContentResult& AddRelevantContent(const RelevantContent& value) { m_relevantContent.push_back(value); return *this; }
    inline SearchRelevantContentResult& AddRelevantContent(RelevantContent&& value) { m_relevantContent.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next set of results, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchRelevantContentResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchRelevantContentResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchRelevantContentResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchRelevantContentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchRelevantContentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchRelevantContentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RelevantContent> m_relevantContent;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
