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
  class ListTopicsResult
  {
  public:
    AWS_QUICKSIGHT_API ListTopicsResult();
    AWS_QUICKSIGHT_API ListTopicsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListTopicsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of topic summaries.</p>
     */
    inline const Aws::Vector<TopicSummary>& GetTopicsSummaries() const{ return m_topicsSummaries; }
    inline void SetTopicsSummaries(const Aws::Vector<TopicSummary>& value) { m_topicsSummaries = value; }
    inline void SetTopicsSummaries(Aws::Vector<TopicSummary>&& value) { m_topicsSummaries = std::move(value); }
    inline ListTopicsResult& WithTopicsSummaries(const Aws::Vector<TopicSummary>& value) { SetTopicsSummaries(value); return *this;}
    inline ListTopicsResult& WithTopicsSummaries(Aws::Vector<TopicSummary>&& value) { SetTopicsSummaries(std::move(value)); return *this;}
    inline ListTopicsResult& AddTopicsSummaries(const TopicSummary& value) { m_topicsSummaries.push_back(value); return *this; }
    inline ListTopicsResult& AddTopicsSummaries(TopicSummary&& value) { m_topicsSummaries.push_back(std::move(value)); return *this; }
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
    inline ListTopicsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTopicsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTopicsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTopicsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTopicsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTopicsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline ListTopicsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<TopicSummary> m_topicsSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
