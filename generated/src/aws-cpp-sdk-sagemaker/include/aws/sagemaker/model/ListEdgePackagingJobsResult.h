/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EdgePackagingJobSummary.h>
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
  class ListEdgePackagingJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListEdgePackagingJobsResult() = default;
    AWS_SAGEMAKER_API ListEdgePackagingJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListEdgePackagingJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summaries of edge packaging jobs.</p>
     */
    inline const Aws::Vector<EdgePackagingJobSummary>& GetEdgePackagingJobSummaries() const { return m_edgePackagingJobSummaries; }
    template<typename EdgePackagingJobSummariesT = Aws::Vector<EdgePackagingJobSummary>>
    void SetEdgePackagingJobSummaries(EdgePackagingJobSummariesT&& value) { m_edgePackagingJobSummariesHasBeenSet = true; m_edgePackagingJobSummaries = std::forward<EdgePackagingJobSummariesT>(value); }
    template<typename EdgePackagingJobSummariesT = Aws::Vector<EdgePackagingJobSummary>>
    ListEdgePackagingJobsResult& WithEdgePackagingJobSummaries(EdgePackagingJobSummariesT&& value) { SetEdgePackagingJobSummaries(std::forward<EdgePackagingJobSummariesT>(value)); return *this;}
    template<typename EdgePackagingJobSummariesT = EdgePackagingJobSummary>
    ListEdgePackagingJobsResult& AddEdgePackagingJobSummaries(EdgePackagingJobSummariesT&& value) { m_edgePackagingJobSummariesHasBeenSet = true; m_edgePackagingJobSummaries.emplace_back(std::forward<EdgePackagingJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token to use when calling the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEdgePackagingJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEdgePackagingJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EdgePackagingJobSummary> m_edgePackagingJobSummaries;
    bool m_edgePackagingJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
