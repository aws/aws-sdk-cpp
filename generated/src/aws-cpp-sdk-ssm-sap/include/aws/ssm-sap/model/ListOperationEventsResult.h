/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/OperationEvent.h>
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
namespace SsmSap
{
namespace Model
{
  class ListOperationEventsResult
  {
  public:
    AWS_SSMSAP_API ListOperationEventsResult() = default;
    AWS_SSMSAP_API ListOperationEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API ListOperationEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A returned list of operation events that meet the filter criteria.</p>
     */
    inline const Aws::Vector<OperationEvent>& GetOperationEvents() const { return m_operationEvents; }
    template<typename OperationEventsT = Aws::Vector<OperationEvent>>
    void SetOperationEvents(OperationEventsT&& value) { m_operationEventsHasBeenSet = true; m_operationEvents = std::forward<OperationEventsT>(value); }
    template<typename OperationEventsT = Aws::Vector<OperationEvent>>
    ListOperationEventsResult& WithOperationEvents(OperationEventsT&& value) { SetOperationEvents(std::forward<OperationEventsT>(value)); return *this;}
    template<typename OperationEventsT = OperationEvent>
    ListOperationEventsResult& AddOperationEvents(OperationEventsT&& value) { m_operationEventsHasBeenSet = true; m_operationEvents.emplace_back(std::forward<OperationEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOperationEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOperationEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OperationEvent> m_operationEvents;
    bool m_operationEventsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
