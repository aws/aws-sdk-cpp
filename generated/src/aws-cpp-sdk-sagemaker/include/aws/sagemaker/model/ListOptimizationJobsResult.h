/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/OptimizationJobSummary.h>
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
  class ListOptimizationJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListOptimizationJobsResult() = default;
    AWS_SAGEMAKER_API ListOptimizationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListOptimizationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of optimization jobs and their properties that matches any of the
     * filters you specified in the request.</p>
     */
    inline const Aws::Vector<OptimizationJobSummary>& GetOptimizationJobSummaries() const { return m_optimizationJobSummaries; }
    template<typename OptimizationJobSummariesT = Aws::Vector<OptimizationJobSummary>>
    void SetOptimizationJobSummaries(OptimizationJobSummariesT&& value) { m_optimizationJobSummariesHasBeenSet = true; m_optimizationJobSummaries = std::forward<OptimizationJobSummariesT>(value); }
    template<typename OptimizationJobSummariesT = Aws::Vector<OptimizationJobSummary>>
    ListOptimizationJobsResult& WithOptimizationJobSummaries(OptimizationJobSummariesT&& value) { SetOptimizationJobSummaries(std::forward<OptimizationJobSummariesT>(value)); return *this;}
    template<typename OptimizationJobSummariesT = OptimizationJobSummary>
    ListOptimizationJobsResult& AddOptimizationJobSummaries(OptimizationJobSummariesT&& value) { m_optimizationJobSummariesHasBeenSet = true; m_optimizationJobSummaries.emplace_back(std::forward<OptimizationJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use in a subsequent request to get the next set of results
     * following a truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOptimizationJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOptimizationJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OptimizationJobSummary> m_optimizationJobSummaries;
    bool m_optimizationJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
