/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingJobSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListProcessingJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListProcessingJobsResult() = default;
    AWS_SAGEMAKER_API ListProcessingJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListProcessingJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>ProcessingJobSummary</code> objects, each listing a
     * processing job.</p>
     */
    inline const Aws::Vector<ProcessingJobSummary>& GetProcessingJobSummaries() const { return m_processingJobSummaries; }
    template<typename ProcessingJobSummariesT = Aws::Vector<ProcessingJobSummary>>
    void SetProcessingJobSummaries(ProcessingJobSummariesT&& value) { m_processingJobSummariesHasBeenSet = true; m_processingJobSummaries = std::forward<ProcessingJobSummariesT>(value); }
    template<typename ProcessingJobSummariesT = Aws::Vector<ProcessingJobSummary>>
    ListProcessingJobsResult& WithProcessingJobSummaries(ProcessingJobSummariesT&& value) { SetProcessingJobSummaries(std::forward<ProcessingJobSummariesT>(value)); return *this;}
    template<typename ProcessingJobSummariesT = ProcessingJobSummary>
    ListProcessingJobsResult& AddProcessingJobSummaries(ProcessingJobSummariesT&& value) { m_processingJobSummariesHasBeenSet = true; m_processingJobSummaries.emplace_back(std::forward<ProcessingJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of processing jobs, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProcessingJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProcessingJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProcessingJobSummary> m_processingJobSummaries;
    bool m_processingJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
