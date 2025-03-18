/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardExportJobSummary.h>
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
  class ListModelCardExportJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListModelCardExportJobsResult() = default;
    AWS_SAGEMAKER_API ListModelCardExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelCardExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of the listed model card export jobs.</p>
     */
    inline const Aws::Vector<ModelCardExportJobSummary>& GetModelCardExportJobSummaries() const { return m_modelCardExportJobSummaries; }
    template<typename ModelCardExportJobSummariesT = Aws::Vector<ModelCardExportJobSummary>>
    void SetModelCardExportJobSummaries(ModelCardExportJobSummariesT&& value) { m_modelCardExportJobSummariesHasBeenSet = true; m_modelCardExportJobSummaries = std::forward<ModelCardExportJobSummariesT>(value); }
    template<typename ModelCardExportJobSummariesT = Aws::Vector<ModelCardExportJobSummary>>
    ListModelCardExportJobsResult& WithModelCardExportJobSummaries(ModelCardExportJobSummariesT&& value) { SetModelCardExportJobSummaries(std::forward<ModelCardExportJobSummariesT>(value)); return *this;}
    template<typename ModelCardExportJobSummariesT = ModelCardExportJobSummary>
    ListModelCardExportJobsResult& AddModelCardExportJobSummaries(ModelCardExportJobSummariesT&& value) { m_modelCardExportJobSummariesHasBeenSet = true; m_modelCardExportJobSummaries.emplace_back(std::forward<ModelCardExportJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card export jobs, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelCardExportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListModelCardExportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ModelCardExportJobSummary> m_modelCardExportJobSummaries;
    bool m_modelCardExportJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
