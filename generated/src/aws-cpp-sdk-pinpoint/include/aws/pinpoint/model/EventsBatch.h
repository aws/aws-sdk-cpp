/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/PublicEndpoint.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/Event.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies a batch of endpoints and events to process.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EventsBatch">AWS
   * API Reference</a></p>
   */
  class EventsBatch
  {
  public:
    AWS_PINPOINT_API EventsBatch() = default;
    AWS_PINPOINT_API EventsBatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EventsBatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A set of properties and attributes that are associated with the endpoint.</p>
     */
    inline const PublicEndpoint& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = PublicEndpoint>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = PublicEndpoint>
    EventsBatch& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of properties that are associated with the event.</p>
     */
    inline const Aws::Map<Aws::String, Event>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Map<Aws::String, Event>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Map<Aws::String, Event>>
    EventsBatch& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsKeyT = Aws::String, typename EventsValueT = Event>
    EventsBatch& AddEvents(EventsKeyT&& key, EventsValueT&& value) {
      m_eventsHasBeenSet = true; m_events.emplace(std::forward<EventsKeyT>(key), std::forward<EventsValueT>(value)); return *this;
    }
    ///@}
  private:

    PublicEndpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Map<Aws::String, Event> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
