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
    AWS_PINPOINT_API EventsBatch();
    AWS_PINPOINT_API EventsBatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EventsBatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A set of properties and attributes that are associated with the endpoint.</p>
     */
    inline const PublicEndpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>A set of properties and attributes that are associated with the endpoint.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>A set of properties and attributes that are associated with the endpoint.</p>
     */
    inline void SetEndpoint(const PublicEndpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>A set of properties and attributes that are associated with the endpoint.</p>
     */
    inline void SetEndpoint(PublicEndpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>A set of properties and attributes that are associated with the endpoint.</p>
     */
    inline EventsBatch& WithEndpoint(const PublicEndpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>A set of properties and attributes that are associated with the endpoint.</p>
     */
    inline EventsBatch& WithEndpoint(PublicEndpoint&& value) { SetEndpoint(std::move(value)); return *this;}


    /**
     * <p>A set of properties that are associated with the event.</p>
     */
    inline const Aws::Map<Aws::String, Event>& GetEvents() const{ return m_events; }

    /**
     * <p>A set of properties that are associated with the event.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>A set of properties that are associated with the event.</p>
     */
    inline void SetEvents(const Aws::Map<Aws::String, Event>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>A set of properties that are associated with the event.</p>
     */
    inline void SetEvents(Aws::Map<Aws::String, Event>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>A set of properties that are associated with the event.</p>
     */
    inline EventsBatch& WithEvents(const Aws::Map<Aws::String, Event>& value) { SetEvents(value); return *this;}

    /**
     * <p>A set of properties that are associated with the event.</p>
     */
    inline EventsBatch& WithEvents(Aws::Map<Aws::String, Event>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>A set of properties that are associated with the event.</p>
     */
    inline EventsBatch& AddEvents(const Aws::String& key, const Event& value) { m_eventsHasBeenSet = true; m_events.emplace(key, value); return *this; }

    /**
     * <p>A set of properties that are associated with the event.</p>
     */
    inline EventsBatch& AddEvents(Aws::String&& key, const Event& value) { m_eventsHasBeenSet = true; m_events.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of properties that are associated with the event.</p>
     */
    inline EventsBatch& AddEvents(const Aws::String& key, Event&& value) { m_eventsHasBeenSet = true; m_events.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of properties that are associated with the event.</p>
     */
    inline EventsBatch& AddEvents(Aws::String&& key, Event&& value) { m_eventsHasBeenSet = true; m_events.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of properties that are associated with the event.</p>
     */
    inline EventsBatch& AddEvents(const char* key, Event&& value) { m_eventsHasBeenSet = true; m_events.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of properties that are associated with the event.</p>
     */
    inline EventsBatch& AddEvents(const char* key, const Event& value) { m_eventsHasBeenSet = true; m_events.emplace(key, value); return *this; }

  private:

    PublicEndpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Map<Aws::String, Event> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
