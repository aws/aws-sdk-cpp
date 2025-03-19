/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardVersionSummary.h>
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
  class ListModelCardVersionsResult
  {
  public:
    AWS_SAGEMAKER_API ListModelCardVersionsResult() = default;
    AWS_SAGEMAKER_API ListModelCardVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelCardVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of the listed versions of the model card.</p>
     */
    inline const Aws::Vector<ModelCardVersionSummary>& GetModelCardVersionSummaryList() const { return m_modelCardVersionSummaryList; }
    template<typename ModelCardVersionSummaryListT = Aws::Vector<ModelCardVersionSummary>>
    void SetModelCardVersionSummaryList(ModelCardVersionSummaryListT&& value) { m_modelCardVersionSummaryListHasBeenSet = true; m_modelCardVersionSummaryList = std::forward<ModelCardVersionSummaryListT>(value); }
    template<typename ModelCardVersionSummaryListT = Aws::Vector<ModelCardVersionSummary>>
    ListModelCardVersionsResult& WithModelCardVersionSummaryList(ModelCardVersionSummaryListT&& value) { SetModelCardVersionSummaryList(std::forward<ModelCardVersionSummaryListT>(value)); return *this;}
    template<typename ModelCardVersionSummaryListT = ModelCardVersionSummary>
    ListModelCardVersionsResult& AddModelCardVersionSummaryList(ModelCardVersionSummaryListT&& value) { m_modelCardVersionSummaryListHasBeenSet = true; m_modelCardVersionSummaryList.emplace_back(std::forward<ModelCardVersionSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card versions, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelCardVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListModelCardVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ModelCardVersionSummary> m_modelCardVersionSummaryList;
    bool m_modelCardVersionSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
