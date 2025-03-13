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
    AWS_SAGEMAKER_API ListComputeQuotasResult() = default;
    AWS_SAGEMAKER_API ListComputeQuotasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListComputeQuotasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summaries of the compute allocation definitions.</p>
     */
    inline const Aws::Vector<ComputeQuotaSummary>& GetComputeQuotaSummaries() const { return m_computeQuotaSummaries; }
    template<typename ComputeQuotaSummariesT = Aws::Vector<ComputeQuotaSummary>>
    void SetComputeQuotaSummaries(ComputeQuotaSummariesT&& value) { m_computeQuotaSummariesHasBeenSet = true; m_computeQuotaSummaries = std::forward<ComputeQuotaSummariesT>(value); }
    template<typename ComputeQuotaSummariesT = Aws::Vector<ComputeQuotaSummary>>
    ListComputeQuotasResult& WithComputeQuotaSummaries(ComputeQuotaSummariesT&& value) { SetComputeQuotaSummaries(std::forward<ComputeQuotaSummariesT>(value)); return *this;}
    template<typename ComputeQuotaSummariesT = ComputeQuotaSummary>
    ListComputeQuotasResult& AddComputeQuotaSummaries(ComputeQuotaSummariesT&& value) { m_computeQuotaSummariesHasBeenSet = true; m_computeQuotaSummaries.emplace_back(std::forward<ComputeQuotaSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListComputeQuotasResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListComputeQuotasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComputeQuotaSummary> m_computeQuotaSummaries;
    bool m_computeQuotaSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
