/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TransformJobSummary.h>
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
  class ListTransformJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListTransformJobsResult() = default;
    AWS_SAGEMAKER_API ListTransformJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListTransformJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>TransformJobSummary</code> objects.</p>
     */
    inline const Aws::Vector<TransformJobSummary>& GetTransformJobSummaries() const { return m_transformJobSummaries; }
    template<typename TransformJobSummariesT = Aws::Vector<TransformJobSummary>>
    void SetTransformJobSummaries(TransformJobSummariesT&& value) { m_transformJobSummariesHasBeenSet = true; m_transformJobSummaries = std::forward<TransformJobSummariesT>(value); }
    template<typename TransformJobSummariesT = Aws::Vector<TransformJobSummary>>
    ListTransformJobsResult& WithTransformJobSummaries(TransformJobSummariesT&& value) { SetTransformJobSummaries(std::forward<TransformJobSummariesT>(value)); return *this;}
    template<typename TransformJobSummariesT = TransformJobSummary>
    ListTransformJobsResult& AddTransformJobSummaries(TransformJobSummariesT&& value) { m_transformJobSummariesHasBeenSet = true; m_transformJobSummaries.emplace_back(std::forward<TransformJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of transform jobs, use it in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTransformJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTransformJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransformJobSummary> m_transformJobSummaries;
    bool m_transformJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
