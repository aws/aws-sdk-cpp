/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AlgorithmSummary.h>
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
  class ListAlgorithmsResult
  {
  public:
    AWS_SAGEMAKER_API ListAlgorithmsResult() = default;
    AWS_SAGEMAKER_API ListAlgorithmsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListAlgorithmsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>&gt;An array of <code>AlgorithmSummary</code> objects, each of which lists an
     * algorithm.</p>
     */
    inline const Aws::Vector<AlgorithmSummary>& GetAlgorithmSummaryList() const { return m_algorithmSummaryList; }
    template<typename AlgorithmSummaryListT = Aws::Vector<AlgorithmSummary>>
    void SetAlgorithmSummaryList(AlgorithmSummaryListT&& value) { m_algorithmSummaryListHasBeenSet = true; m_algorithmSummaryList = std::forward<AlgorithmSummaryListT>(value); }
    template<typename AlgorithmSummaryListT = Aws::Vector<AlgorithmSummary>>
    ListAlgorithmsResult& WithAlgorithmSummaryList(AlgorithmSummaryListT&& value) { SetAlgorithmSummaryList(std::forward<AlgorithmSummaryListT>(value)); return *this;}
    template<typename AlgorithmSummaryListT = AlgorithmSummary>
    ListAlgorithmsResult& AddAlgorithmSummaryList(AlgorithmSummaryListT&& value) { m_algorithmSummaryListHasBeenSet = true; m_algorithmSummaryList.emplace_back(std::forward<AlgorithmSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of algorithms, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAlgorithmsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAlgorithmsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AlgorithmSummary> m_algorithmSummaryList;
    bool m_algorithmSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
