/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/model/QueueSummary.h>
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
namespace PCS
{
namespace Model
{
  class ListQueuesResult
  {
  public:
    AWS_PCS_API ListQueuesResult() = default;
    AWS_PCS_API ListQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCS_API ListQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of queues associated with the cluster.</p>
     */
    inline const Aws::Vector<QueueSummary>& GetQueues() const { return m_queues; }
    template<typename QueuesT = Aws::Vector<QueueSummary>>
    void SetQueues(QueuesT&& value) { m_queuesHasBeenSet = true; m_queues = std::forward<QueuesT>(value); }
    template<typename QueuesT = Aws::Vector<QueueSummary>>
    ListQueuesResult& WithQueues(QueuesT&& value) { SetQueues(std::forward<QueuesT>(value)); return *this;}
    template<typename QueuesT = QueueSummary>
    ListQueuesResult& AddQueues(QueuesT&& value) { m_queuesHasBeenSet = true; m_queues.emplace_back(std::forward<QueuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of <code>nextToken</code> is a unique pagination token for each
     * page of results returned. If <code>nextToken</code> is returned, there are more
     * results available. Make the call again using the returned token to retrieve the
     * next page. Keep all other arguments unchanged. Each pagination token expires
     * after 24 hours. Using an expired pagination token returns an <code>HTTP 400
     * InvalidToken</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListQueuesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListQueuesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<QueueSummary> m_queues;
    bool m_queuesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
