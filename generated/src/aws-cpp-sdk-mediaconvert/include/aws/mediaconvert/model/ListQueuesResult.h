/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/Queue.h>
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
namespace MediaConvert
{
namespace Model
{
  class ListQueuesResult
  {
  public:
    AWS_MEDIACONVERT_API ListQueuesResult() = default;
    AWS_MEDIACONVERT_API ListQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API ListQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Use this string to request the next batch of queues.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListQueuesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * List of queues.
     */
    inline const Aws::Vector<Queue>& GetQueues() const { return m_queues; }
    template<typename QueuesT = Aws::Vector<Queue>>
    void SetQueues(QueuesT&& value) { m_queuesHasBeenSet = true; m_queues = std::forward<QueuesT>(value); }
    template<typename QueuesT = Aws::Vector<Queue>>
    ListQueuesResult& WithQueues(QueuesT&& value) { SetQueues(std::forward<QueuesT>(value)); return *this;}
    template<typename QueuesT = Queue>
    ListQueuesResult& AddQueues(QueuesT&& value) { m_queuesHasBeenSet = true; m_queues.emplace_back(std::forward<QueuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The maximum number of jobs that MediaConvert can process at one time, across all
     * of your on-demand queues in the current AWS Region.
     */
    inline int GetTotalConcurrentJobs() const { return m_totalConcurrentJobs; }
    inline void SetTotalConcurrentJobs(int value) { m_totalConcurrentJobsHasBeenSet = true; m_totalConcurrentJobs = value; }
    inline ListQueuesResult& WithTotalConcurrentJobs(int value) { SetTotalConcurrentJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * The remaining number of concurrent jobs that are not associated with a queue and
     * are available to allocate to a queue. You can allocate these jobs when you
     * create or update a queue.
     */
    inline int GetUnallocatedConcurrentJobs() const { return m_unallocatedConcurrentJobs; }
    inline void SetUnallocatedConcurrentJobs(int value) { m_unallocatedConcurrentJobsHasBeenSet = true; m_unallocatedConcurrentJobs = value; }
    inline ListQueuesResult& WithUnallocatedConcurrentJobs(int value) { SetUnallocatedConcurrentJobs(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListQueuesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Queue> m_queues;
    bool m_queuesHasBeenSet = false;

    int m_totalConcurrentJobs{0};
    bool m_totalConcurrentJobsHasBeenSet = false;

    int m_unallocatedConcurrentJobs{0};
    bool m_unallocatedConcurrentJobsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
