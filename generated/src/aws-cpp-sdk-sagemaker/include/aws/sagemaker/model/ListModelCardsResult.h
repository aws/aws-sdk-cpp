/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardSummary.h>
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
  class ListModelCardsResult
  {
  public:
    AWS_SAGEMAKER_API ListModelCardsResult() = default;
    AWS_SAGEMAKER_API ListModelCardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelCardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of the listed model cards.</p>
     */
    inline const Aws::Vector<ModelCardSummary>& GetModelCardSummaries() const { return m_modelCardSummaries; }
    template<typename ModelCardSummariesT = Aws::Vector<ModelCardSummary>>
    void SetModelCardSummaries(ModelCardSummariesT&& value) { m_modelCardSummariesHasBeenSet = true; m_modelCardSummaries = std::forward<ModelCardSummariesT>(value); }
    template<typename ModelCardSummariesT = Aws::Vector<ModelCardSummary>>
    ListModelCardsResult& WithModelCardSummaries(ModelCardSummariesT&& value) { SetModelCardSummaries(std::forward<ModelCardSummariesT>(value)); return *this;}
    template<typename ModelCardSummariesT = ModelCardSummary>
    ListModelCardsResult& AddModelCardSummaries(ModelCardSummariesT&& value) { m_modelCardSummariesHasBeenSet = true; m_modelCardSummaries.emplace_back(std::forward<ModelCardSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model cards, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelCardsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListModelCardsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ModelCardSummary> m_modelCardSummaries;
    bool m_modelCardSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
