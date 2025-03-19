/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ActionSummary.h>
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
  class ListActionsResult
  {
  public:
    AWS_SAGEMAKER_API ListActionsResult() = default;
    AWS_SAGEMAKER_API ListActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of actions and their properties.</p>
     */
    inline const Aws::Vector<ActionSummary>& GetActionSummaries() const { return m_actionSummaries; }
    template<typename ActionSummariesT = Aws::Vector<ActionSummary>>
    void SetActionSummaries(ActionSummariesT&& value) { m_actionSummariesHasBeenSet = true; m_actionSummaries = std::forward<ActionSummariesT>(value); }
    template<typename ActionSummariesT = Aws::Vector<ActionSummary>>
    ListActionsResult& WithActionSummaries(ActionSummariesT&& value) { SetActionSummaries(std::forward<ActionSummariesT>(value)); return *this;}
    template<typename ActionSummariesT = ActionSummary>
    ListActionsResult& AddActionSummaries(ActionSummariesT&& value) { m_actionSummariesHasBeenSet = true; m_actionSummaries.emplace_back(std::forward<ActionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListActionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListActionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ActionSummary> m_actionSummaries;
    bool m_actionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
