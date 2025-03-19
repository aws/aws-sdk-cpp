/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/BatchInferenceJobSummary.h>
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
  class ListBatchInferenceJobsResult
  {
  public:
    AWS_PERSONALIZE_API ListBatchInferenceJobsResult() = default;
    AWS_PERSONALIZE_API ListBatchInferenceJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListBatchInferenceJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline const Aws::Vector<BatchInferenceJobSummary>& GetBatchInferenceJobs() const { return m_batchInferenceJobs; }
    template<typename BatchInferenceJobsT = Aws::Vector<BatchInferenceJobSummary>>
    void SetBatchInferenceJobs(BatchInferenceJobsT&& value) { m_batchInferenceJobsHasBeenSet = true; m_batchInferenceJobs = std::forward<BatchInferenceJobsT>(value); }
    template<typename BatchInferenceJobsT = Aws::Vector<BatchInferenceJobSummary>>
    ListBatchInferenceJobsResult& WithBatchInferenceJobs(BatchInferenceJobsT&& value) { SetBatchInferenceJobs(std::forward<BatchInferenceJobsT>(value)); return *this;}
    template<typename BatchInferenceJobsT = BatchInferenceJobSummary>
    ListBatchInferenceJobsResult& AddBatchInferenceJobs(BatchInferenceJobsT&& value) { m_batchInferenceJobsHasBeenSet = true; m_batchInferenceJobs.emplace_back(std::forward<BatchInferenceJobsT>(value)); return *this; }
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
    ListBatchInferenceJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBatchInferenceJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchInferenceJobSummary> m_batchInferenceJobs;
    bool m_batchInferenceJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
