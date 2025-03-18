/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-query/model/ScheduledQuery.h>
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
namespace TimestreamQuery
{
namespace Model
{
  class ListScheduledQueriesResult
  {
  public:
    AWS_TIMESTREAMQUERY_API ListScheduledQueriesResult() = default;
    AWS_TIMESTREAMQUERY_API ListScheduledQueriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMQUERY_API ListScheduledQueriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of scheduled queries.</p>
     */
    inline const Aws::Vector<ScheduledQuery>& GetScheduledQueries() const { return m_scheduledQueries; }
    template<typename ScheduledQueriesT = Aws::Vector<ScheduledQuery>>
    void SetScheduledQueries(ScheduledQueriesT&& value) { m_scheduledQueriesHasBeenSet = true; m_scheduledQueries = std::forward<ScheduledQueriesT>(value); }
    template<typename ScheduledQueriesT = Aws::Vector<ScheduledQuery>>
    ListScheduledQueriesResult& WithScheduledQueries(ScheduledQueriesT&& value) { SetScheduledQueries(std::forward<ScheduledQueriesT>(value)); return *this;}
    template<typename ScheduledQueriesT = ScheduledQuery>
    ListScheduledQueriesResult& AddScheduledQueries(ScheduledQueriesT&& value) { m_scheduledQueriesHasBeenSet = true; m_scheduledQueries.emplace_back(std::forward<ScheduledQueriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListScheduledQueriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListScheduledQueriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ScheduledQuery> m_scheduledQueries;
    bool m_scheduledQueriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
