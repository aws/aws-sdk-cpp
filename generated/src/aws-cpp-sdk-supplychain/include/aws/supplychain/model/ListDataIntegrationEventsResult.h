/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataIntegrationEvent.h>
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
namespace SupplyChain
{
namespace Model
{
  /**
   * <p>The response parameters for ListDataIntegrationEvents.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/ListDataIntegrationEventsResponse">AWS
   * API Reference</a></p>
   */
  class ListDataIntegrationEventsResult
  {
  public:
    AWS_SUPPLYCHAIN_API ListDataIntegrationEventsResult() = default;
    AWS_SUPPLYCHAIN_API ListDataIntegrationEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API ListDataIntegrationEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of data integration events.</p>
     */
    inline const Aws::Vector<DataIntegrationEvent>& GetEvents() const { return m_events; }
    template<typename EventsT = Aws::Vector<DataIntegrationEvent>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<DataIntegrationEvent>>
    ListDataIntegrationEventsResult& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = DataIntegrationEvent>
    ListDataIntegrationEventsResult& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to fetch the next page of the
     * ListDataIntegrationEvents.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataIntegrationEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataIntegrationEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataIntegrationEvent> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
