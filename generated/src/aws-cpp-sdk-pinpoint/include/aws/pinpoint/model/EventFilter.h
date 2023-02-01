/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EventDimensions.h>
#include <aws/pinpoint/model/FilterType.h>
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
   * <p>Specifies the settings for an event that causes a campaign to be sent or a
   * journey activity to be performed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EventFilter">AWS
   * API Reference</a></p>
   */
  class EventFilter
  {
  public:
    AWS_PINPOINT_API EventFilter();
    AWS_PINPOINT_API EventFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EventFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dimensions for the event filter to use for the campaign or the journey
     * activity.</p>
     */
    inline const EventDimensions& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimensions for the event filter to use for the campaign or the journey
     * activity.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The dimensions for the event filter to use for the campaign or the journey
     * activity.</p>
     */
    inline void SetDimensions(const EventDimensions& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimensions for the event filter to use for the campaign or the journey
     * activity.</p>
     */
    inline void SetDimensions(EventDimensions&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimensions for the event filter to use for the campaign or the journey
     * activity.</p>
     */
    inline EventFilter& WithDimensions(const EventDimensions& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimensions for the event filter to use for the campaign or the journey
     * activity.</p>
     */
    inline EventFilter& WithDimensions(EventDimensions&& value) { SetDimensions(std::move(value)); return *this;}


    /**
     * <p>The type of event that causes the campaign to be sent or the journey activity
     * to be performed. Valid values are: SYSTEM, sends the campaign or performs the
     * activity when a system event occurs; and, ENDPOINT, sends the campaign or
     * performs the activity when an endpoint event (<link 
     * linkend="apps-application-id-events">Events resource</link>) occurs.</p>
     */
    inline const FilterType& GetFilterType() const{ return m_filterType; }

    /**
     * <p>The type of event that causes the campaign to be sent or the journey activity
     * to be performed. Valid values are: SYSTEM, sends the campaign or performs the
     * activity when a system event occurs; and, ENDPOINT, sends the campaign or
     * performs the activity when an endpoint event (<link 
     * linkend="apps-application-id-events">Events resource</link>) occurs.</p>
     */
    inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }

    /**
     * <p>The type of event that causes the campaign to be sent or the journey activity
     * to be performed. Valid values are: SYSTEM, sends the campaign or performs the
     * activity when a system event occurs; and, ENDPOINT, sends the campaign or
     * performs the activity when an endpoint event (<link 
     * linkend="apps-application-id-events">Events resource</link>) occurs.</p>
     */
    inline void SetFilterType(const FilterType& value) { m_filterTypeHasBeenSet = true; m_filterType = value; }

    /**
     * <p>The type of event that causes the campaign to be sent or the journey activity
     * to be performed. Valid values are: SYSTEM, sends the campaign or performs the
     * activity when a system event occurs; and, ENDPOINT, sends the campaign or
     * performs the activity when an endpoint event (<link 
     * linkend="apps-application-id-events">Events resource</link>) occurs.</p>
     */
    inline void SetFilterType(FilterType&& value) { m_filterTypeHasBeenSet = true; m_filterType = std::move(value); }

    /**
     * <p>The type of event that causes the campaign to be sent or the journey activity
     * to be performed. Valid values are: SYSTEM, sends the campaign or performs the
     * activity when a system event occurs; and, ENDPOINT, sends the campaign or
     * performs the activity when an endpoint event (<link 
     * linkend="apps-application-id-events">Events resource</link>) occurs.</p>
     */
    inline EventFilter& WithFilterType(const FilterType& value) { SetFilterType(value); return *this;}

    /**
     * <p>The type of event that causes the campaign to be sent or the journey activity
     * to be performed. Valid values are: SYSTEM, sends the campaign or performs the
     * activity when a system event occurs; and, ENDPOINT, sends the campaign or
     * performs the activity when an endpoint event (<link 
     * linkend="apps-application-id-events">Events resource</link>) occurs.</p>
     */
    inline EventFilter& WithFilterType(FilterType&& value) { SetFilterType(std::move(value)); return *this;}

  private:

    EventDimensions m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    FilterType m_filterType;
    bool m_filterTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
