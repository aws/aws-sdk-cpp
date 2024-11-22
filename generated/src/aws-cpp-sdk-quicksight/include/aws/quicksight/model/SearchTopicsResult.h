/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TopicSummary.h>
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
namespace QuickSight
{
namespace Model
{
  class SearchTopicsResult
  {
  public:
    AWS_QUICKSIGHT_API SearchTopicsResult();
    AWS_QUICKSIGHT_API SearchTopicsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API SearchTopicsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of topic summaries that is returned by the search topic request.</p>
     */
    inline const Aws::Vector<TopicSummary>& GetTopicSummaryList() const{ return m_topicSummaryList; }
    inline void SetTopicSummaryList(const Aws::Vector<TopicSummary>& value) { m_topicSummaryList = value; }
    inline void SetTopicSummaryList(Aws::Vector<TopicSummary>&& value) { m_topicSummaryList = std::move(value); }
    inline SearchTopicsResult& WithTopicSummaryList(const Aws::Vector<TopicSummary>& value) { SetTopicSummaryList(value); return *this;}
    inline SearchTopicsResult& WithTopicSummaryList(Aws::Vector<TopicSummary>&& value) { SetTopicSummaryList(std::move(value)); return *this;}
    inline SearchTopicsResult& AddTopicSummaryList(const TopicSummary& value) { m_topicSummaryList.push_back(value); return *this; }
    inline SearchTopicsResult& AddTopicSummaryList(TopicSummary&& value) { m_topicSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchTopicsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchTopicsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchTopicsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline SearchTopicsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchTopicsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchTopicsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchTopicsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TopicSummary> m_topicSummaryList;

    Aws::String m_nextToken;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
