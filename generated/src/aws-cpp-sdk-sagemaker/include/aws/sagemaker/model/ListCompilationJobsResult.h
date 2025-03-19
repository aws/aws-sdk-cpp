/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/CompilationJobSummary.h>
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
  class ListCompilationJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListCompilationJobsResult() = default;
    AWS_SAGEMAKER_API ListCompilationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListCompilationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CompilationJobSummary.html">CompilationJobSummary</a>
     * objects, each describing a model compilation job. </p>
     */
    inline const Aws::Vector<CompilationJobSummary>& GetCompilationJobSummaries() const { return m_compilationJobSummaries; }
    template<typename CompilationJobSummariesT = Aws::Vector<CompilationJobSummary>>
    void SetCompilationJobSummaries(CompilationJobSummariesT&& value) { m_compilationJobSummariesHasBeenSet = true; m_compilationJobSummaries = std::forward<CompilationJobSummariesT>(value); }
    template<typename CompilationJobSummariesT = Aws::Vector<CompilationJobSummary>>
    ListCompilationJobsResult& WithCompilationJobSummaries(CompilationJobSummariesT&& value) { SetCompilationJobSummaries(std::forward<CompilationJobSummariesT>(value)); return *this;}
    template<typename CompilationJobSummariesT = CompilationJobSummary>
    ListCompilationJobsResult& AddCompilationJobSummaries(CompilationJobSummariesT&& value) { m_compilationJobSummariesHasBeenSet = true; m_compilationJobSummaries.emplace_back(std::forward<CompilationJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon SageMaker AI returns this
     * <code>NextToken</code>. To retrieve the next set of model compilation jobs, use
     * this token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCompilationJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCompilationJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CompilationJobSummary> m_compilationJobSummaries;
    bool m_compilationJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
