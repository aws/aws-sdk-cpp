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
    AWS_SESV2_API EmailInsights();
    AWS_SESV2_API EmailInsights(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API EmailInsights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The recipient of the email.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The recipient of the email.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The recipient of the email.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The recipient of the email.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The recipient of the email.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The recipient of the email.</p>
     */
    inline EmailInsights& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The recipient of the email.</p>
     */
    inline EmailInsights& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The recipient of the email.</p>
     */
    inline EmailInsights& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The recipient's ISP (e.g., <code>Gmail</code>, <code>Yahoo</code>, etc.).</p>
     */
    inline const Aws::String& GetIsp() const{ return m_isp; }

    /**
     * <p>The recipient's ISP (e.g., <code>Gmail</code>, <code>Yahoo</code>, etc.).</p>
     */
    inline bool IspHasBeenSet() const { return m_ispHasBeenSet; }

    /**
     * <p>The recipient's ISP (e.g., <code>Gmail</code>, <code>Yahoo</code>, etc.).</p>
     */
    inline void SetIsp(const Aws::String& value) { m_ispHasBeenSet = true; m_isp = value; }

    /**
     * <p>The recipient's ISP (e.g., <code>Gmail</code>, <code>Yahoo</code>, etc.).</p>
     */
    inline void SetIsp(Aws::String&& value) { m_ispHasBeenSet = true; m_isp = std::move(value); }

    /**
     * <p>The recipient's ISP (e.g., <code>Gmail</code>, <code>Yahoo</code>, etc.).</p>
     */
    inline void SetIsp(const char* value) { m_ispHasBeenSet = true; m_isp.assign(value); }

    /**
     * <p>The recipient's ISP (e.g., <code>Gmail</code>, <code>Yahoo</code>, etc.).</p>
     */
    inline EmailInsights& WithIsp(const Aws::String& value) { SetIsp(value); return *this;}

    /**
     * <p>The recipient's ISP (e.g., <code>Gmail</code>, <code>Yahoo</code>, etc.).</p>
     */
    inline EmailInsights& WithIsp(Aws::String&& value) { SetIsp(std::move(value)); return *this;}

    /**
     * <p>The recipient's ISP (e.g., <code>Gmail</code>, <code>Yahoo</code>, etc.).</p>
     */
    inline EmailInsights& WithIsp(const char* value) { SetIsp(value); return *this;}


    /**
     * <p>A list of events associated with the sent email.</p>
     */
    inline const Aws::Vector<InsightsEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>A list of events associated with the sent email.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>A list of events associated with the sent email.</p>
     */
    inline void SetEvents(const Aws::Vector<InsightsEvent>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>A list of events associated with the sent email.</p>
     */
    inline void SetEvents(Aws::Vector<InsightsEvent>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>A list of events associated with the sent email.</p>
     */
    inline EmailInsights& WithEvents(const Aws::Vector<InsightsEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>A list of events associated with the sent email.</p>
     */
    inline EmailInsights& WithEvents(Aws::Vector<InsightsEvent>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>A list of events associated with the sent email.</p>
     */
    inline EmailInsights& AddEvents(const InsightsEvent& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>A list of events associated with the sent email.</p>
     */
    inline EmailInsights& AddEvents(InsightsEvent&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }

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
