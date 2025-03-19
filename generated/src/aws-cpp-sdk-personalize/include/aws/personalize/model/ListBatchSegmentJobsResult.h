/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/BatchSegmentJobSummary.h>
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
namespace Personalize
{
namespace Model
{
  class ListBatchSegmentJobsResult
  {
  public:
    AWS_PERSONALIZE_API ListBatchSegmentJobsResult() = default;
    AWS_PERSONALIZE_API ListBatchSegmentJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListBatchSegmentJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline const Aws::Vector<BatchSegmentJobSummary>& GetBatchSegmentJobs() const { return m_batchSegmentJobs; }
    template<typename BatchSegmentJobsT = Aws::Vector<BatchSegmentJobSummary>>
    void SetBatchSegmentJobs(BatchSegmentJobsT&& value) { m_batchSegmentJobsHasBeenSet = true; m_batchSegmentJobs = std::forward<BatchSegmentJobsT>(value); }
    template<typename BatchSegmentJobsT = Aws::Vector<BatchSegmentJobSummary>>
    ListBatchSegmentJobsResult& WithBatchSegmentJobs(BatchSegmentJobsT&& value) { SetBatchSegmentJobs(std::forward<BatchSegmentJobsT>(value)); return *this;}
    template<typename BatchSegmentJobsT = BatchSegmentJobSummary>
    ListBatchSegmentJobsResult& AddBatchSegmentJobs(BatchSegmentJobsT&& value) { m_batchSegmentJobsHasBeenSet = true; m_batchSegmentJobs.emplace_back(std::forward<BatchSegmentJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBatchSegmentJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBatchSegmentJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchSegmentJobSummary> m_batchSegmentJobs;
    bool m_batchSegmentJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
