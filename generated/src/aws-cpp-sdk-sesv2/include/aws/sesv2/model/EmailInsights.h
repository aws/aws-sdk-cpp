/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/InsightsEvent.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An email's insights contain metadata and delivery information about a
   * specific email.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/EmailInsights">AWS
   * API Reference</a></p>
   */
  class EmailInsights
  {
  public:
    AWS_SESV2_API EmailInsights() = default;
    AWS_SESV2_API EmailInsights(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API EmailInsights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The recipient of the email.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    EmailInsights& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recipient's ISP (e.g., <code>Gmail</code>, <code>Yahoo</code>, etc.).</p>
     */
    inline const Aws::String& GetIsp() const { return m_isp; }
    inline bool IspHasBeenSet() const { return m_ispHasBeenSet; }
    template<typename IspT = Aws::String>
    void SetIsp(IspT&& value) { m_ispHasBeenSet = true; m_isp = std::forward<IspT>(value); }
    template<typename IspT = Aws::String>
    EmailInsights& WithIsp(IspT&& value) { SetIsp(std::forward<IspT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of events associated with the sent email.</p>
     */
    inline const Aws::Vector<InsightsEvent>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Vector<InsightsEvent>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<InsightsEvent>>
    EmailInsights& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = InsightsEvent>
    EmailInsights& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_isp;
    bool m_ispHasBeenSet = false;

    Aws::Vector<InsightsEvent> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
