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
    AWS_SAGEMAKER_API ListOptimizationJobsResult();
    AWS_SAGEMAKER_API ListOptimizationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListOptimizationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of optimization jobs and their properties that matches any of the
     * filters you specified in the request.</p>
     */
    inline const Aws::Vector<OptimizationJobSummary>& GetOptimizationJobSummaries() const{ return m_optimizationJobSummaries; }
    inline void SetOptimizationJobSummaries(const Aws::Vector<OptimizationJobSummary>& value) { m_optimizationJobSummaries = value; }
    inline void SetOptimizationJobSummaries(Aws::Vector<OptimizationJobSummary>&& value) { m_optimizationJobSummaries = std::move(value); }
    inline ListOptimizationJobsResult& WithOptimizationJobSummaries(const Aws::Vector<OptimizationJobSummary>& value) { SetOptimizationJobSummaries(value); return *this;}
    inline ListOptimizationJobsResult& WithOptimizationJobSummaries(Aws::Vector<OptimizationJobSummary>&& value) { SetOptimizationJobSummaries(std::move(value)); return *this;}
    inline ListOptimizationJobsResult& AddOptimizationJobSummaries(const OptimizationJobSummary& value) { m_optimizationJobSummaries.push_back(value); return *this; }
    inline ListOptimizationJobsResult& AddOptimizationJobSummaries(OptimizationJobSummary&& value) { m_optimizationJobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use in a subsequent request to get the next set of results
     * following a truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListOptimizationJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOptimizationJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOptimizationJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListOptimizationJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListOptimizationJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListOptimizationJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<OptimizationJobSummary> m_optimizationJobSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
