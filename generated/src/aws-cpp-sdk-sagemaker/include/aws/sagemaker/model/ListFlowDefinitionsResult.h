/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/FlowDefinitionSummary.h>
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
  class ListFlowDefinitionsResult
  {
  public:
    AWS_SAGEMAKER_API ListFlowDefinitionsResult() = default;
    AWS_SAGEMAKER_API ListFlowDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListFlowDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects describing the flow definitions.</p>
     */
    inline const Aws::Vector<FlowDefinitionSummary>& GetFlowDefinitionSummaries() const { return m_flowDefinitionSummaries; }
    template<typename FlowDefinitionSummariesT = Aws::Vector<FlowDefinitionSummary>>
    void SetFlowDefinitionSummaries(FlowDefinitionSummariesT&& value) { m_flowDefinitionSummariesHasBeenSet = true; m_flowDefinitionSummaries = std::forward<FlowDefinitionSummariesT>(value); }
    template<typename FlowDefinitionSummariesT = Aws::Vector<FlowDefinitionSummary>>
    ListFlowDefinitionsResult& WithFlowDefinitionSummaries(FlowDefinitionSummariesT&& value) { SetFlowDefinitionSummaries(std::forward<FlowDefinitionSummariesT>(value)); return *this;}
    template<typename FlowDefinitionSummariesT = FlowDefinitionSummary>
    ListFlowDefinitionsResult& AddFlowDefinitionSummaries(FlowDefinitionSummariesT&& value) { m_flowDefinitionSummariesHasBeenSet = true; m_flowDefinitionSummaries.emplace_back(std::forward<FlowDefinitionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to resume pagination.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFlowDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFlowDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FlowDefinitionSummary> m_flowDefinitionSummaries;
    bool m_flowDefinitionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
