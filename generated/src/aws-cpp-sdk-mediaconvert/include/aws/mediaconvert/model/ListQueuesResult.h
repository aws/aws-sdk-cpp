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
    AWS_MEDIACONVERT_API ListQueuesResult();
    AWS_MEDIACONVERT_API ListQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API ListQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Use this string to request the next batch of queues.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListQueuesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListQueuesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListQueuesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * List of queues.
     */
    inline const Aws::Vector<Queue>& GetQueues() const{ return m_queues; }
    inline void SetQueues(const Aws::Vector<Queue>& value) { m_queues = value; }
    inline void SetQueues(Aws::Vector<Queue>&& value) { m_queues = std::move(value); }
    inline ListQueuesResult& WithQueues(const Aws::Vector<Queue>& value) { SetQueues(value); return *this;}
    inline ListQueuesResult& WithQueues(Aws::Vector<Queue>&& value) { SetQueues(std::move(value)); return *this;}
    inline ListQueuesResult& AddQueues(const Queue& value) { m_queues.push_back(value); return *this; }
    inline ListQueuesResult& AddQueues(Queue&& value) { m_queues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The maximum number of jobs that MediaConvert can process at one time, across all
     * of your on-demand queues in the current AWS Region.
     */
    inline int GetTotalConcurrentJobs() const{ return m_totalConcurrentJobs; }
    inline void SetTotalConcurrentJobs(int value) { m_totalConcurrentJobs = value; }
    inline ListQueuesResult& WithTotalConcurrentJobs(int value) { SetTotalConcurrentJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * The remaining number of concurrent jobs that are not associated with a queue and
     * are available to allocate to a queue. You can allocate these jobs when you
     * create or update a queue.
     */
    inline int GetUnallocatedConcurrentJobs() const{ return m_unallocatedConcurrentJobs; }
    inline void SetUnallocatedConcurrentJobs(int value) { m_unallocatedConcurrentJobs = value; }
    inline ListQueuesResult& WithUnallocatedConcurrentJobs(int value) { SetUnallocatedConcurrentJobs(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListQueuesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListQueuesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListQueuesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Queue> m_queues;

    int m_totalConcurrentJobs;

    int m_unallocatedConcurrentJobs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
