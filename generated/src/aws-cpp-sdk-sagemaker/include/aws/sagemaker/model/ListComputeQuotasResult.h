/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ComputeQuotaSummary.h>
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
  class ListComputeQuotasResult
  {
  public:
    AWS_SAGEMAKER_API ListComputeQuotasResult();
    AWS_SAGEMAKER_API ListComputeQuotasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListComputeQuotasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summaries of the compute allocation definitions.</p>
     */
    inline const Aws::Vector<ComputeQuotaSummary>& GetComputeQuotaSummaries() const{ return m_computeQuotaSummaries; }
    inline void SetComputeQuotaSummaries(const Aws::Vector<ComputeQuotaSummary>& value) { m_computeQuotaSummaries = value; }
    inline void SetComputeQuotaSummaries(Aws::Vector<ComputeQuotaSummary>&& value) { m_computeQuotaSummaries = std::move(value); }
    inline ListComputeQuotasResult& WithComputeQuotaSummaries(const Aws::Vector<ComputeQuotaSummary>& value) { SetComputeQuotaSummaries(value); return *this;}
    inline ListComputeQuotasResult& WithComputeQuotaSummaries(Aws::Vector<ComputeQuotaSummary>&& value) { SetComputeQuotaSummaries(std::move(value)); return *this;}
    inline ListComputeQuotasResult& AddComputeQuotaSummaries(const ComputeQuotaSummary& value) { m_computeQuotaSummaries.push_back(value); return *this; }
    inline ListComputeQuotasResult& AddComputeQuotaSummaries(ComputeQuotaSummary&& value) { m_computeQuotaSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListComputeQuotasResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListComputeQuotasResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListComputeQuotasResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListComputeQuotasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListComputeQuotasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListComputeQuotasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ComputeQuotaSummary> m_computeQuotaSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
