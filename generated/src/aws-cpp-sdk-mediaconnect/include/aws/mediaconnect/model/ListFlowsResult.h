/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/ListedFlow.h>
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
namespace MediaConnect
{
namespace Model
{
  class ListFlowsResult
  {
  public:
    AWS_MEDIACONNECT_API ListFlowsResult() = default;
    AWS_MEDIACONNECT_API ListFlowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API ListFlowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of flow summaries.</p>
     */
    inline const Aws::Vector<ListedFlow>& GetFlows() const { return m_flows; }
    template<typename FlowsT = Aws::Vector<ListedFlow>>
    void SetFlows(FlowsT&& value) { m_flowsHasBeenSet = true; m_flows = std::forward<FlowsT>(value); }
    template<typename FlowsT = Aws::Vector<ListedFlow>>
    ListFlowsResult& WithFlows(FlowsT&& value) { SetFlows(std::forward<FlowsT>(value)); return *this;}
    template<typename FlowsT = ListedFlow>
    ListFlowsResult& AddFlows(FlowsT&& value) { m_flowsHasBeenSet = true; m_flows.emplace_back(std::forward<FlowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token that identifies the batch of results that you want to see. </p>
     * <p>For example, you submit a <code>ListFlows</code> request with MaxResults set
     * at 5. The service returns the first batch of results (up to 5) and a
     * <code>NextToken</code> value. To see the next batch of results, you can submit
     * the <code>ListFlows</code> request a second time and specify the
     * <code>NextToken</code> value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFlowsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFlowsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListedFlow> m_flows;
    bool m_flowsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
