/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EndpointItemResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/EventItemResponse.h>
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
   * <p>Provides information about the results of a request to create or update an
   * endpoint that's associated with an event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ItemResponse">AWS
   * API Reference</a></p>
   */
  class ItemResponse
  {
  public:
    AWS_PINPOINT_API ItemResponse() = default;
    AWS_PINPOINT_API ItemResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ItemResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The response that was received after the endpoint data was accepted.</p>
     */
    inline const EndpointItemResponse& GetEndpointItemResponse() const { return m_endpointItemResponse; }
    inline bool EndpointItemResponseHasBeenSet() const { return m_endpointItemResponseHasBeenSet; }
    template<typename EndpointItemResponseT = EndpointItemResponse>
    void SetEndpointItemResponse(EndpointItemResponseT&& value) { m_endpointItemResponseHasBeenSet = true; m_endpointItemResponse = std::forward<EndpointItemResponseT>(value); }
    template<typename EndpointItemResponseT = EndpointItemResponse>
    ItemResponse& WithEndpointItemResponse(EndpointItemResponseT&& value) { SetEndpointItemResponse(std::forward<EndpointItemResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A multipart response object that contains a key and a value for each event in
     * the request. In each object, the event ID is the key and an EventItemResponse
     * object is the value.</p>
     */
    inline const Aws::Map<Aws::String, EventItemResponse>& GetEventsItemResponse() const { return m_eventsItemResponse; }
    inline bool EventsItemResponseHasBeenSet() const { return m_eventsItemResponseHasBeenSet; }
    template<typename EventsItemResponseT = Aws::Map<Aws::String, EventItemResponse>>
    void SetEventsItemResponse(EventsItemResponseT&& value) { m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse = std::forward<EventsItemResponseT>(value); }
    template<typename EventsItemResponseT = Aws::Map<Aws::String, EventItemResponse>>
    ItemResponse& WithEventsItemResponse(EventsItemResponseT&& value) { SetEventsItemResponse(std::forward<EventsItemResponseT>(value)); return *this;}
    template<typename EventsItemResponseKeyT = Aws::String, typename EventsItemResponseValueT = EventItemResponse>
    ItemResponse& AddEventsItemResponse(EventsItemResponseKeyT&& key, EventsItemResponseValueT&& value) {
      m_eventsItemResponseHasBeenSet = true; m_eventsItemResponse.emplace(std::forward<EventsItemResponseKeyT>(key), std::forward<EventsItemResponseValueT>(value)); return *this;
    }
    ///@}
  private:

    EndpointItemResponse m_endpointItemResponse;
    bool m_endpointItemResponseHasBeenSet = false;

    Aws::Map<Aws::String, EventItemResponse> m_eventsItemResponse;
    bool m_eventsItemResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
