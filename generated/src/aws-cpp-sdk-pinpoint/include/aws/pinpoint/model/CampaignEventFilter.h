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
   * <p>Specifies the settings for events that cause a campaign to be
   * sent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignEventFilter">AWS
   * API Reference</a></p>
   */
  class CampaignEventFilter
  {
  public:
    AWS_PINPOINT_API CampaignEventFilter();
    AWS_PINPOINT_API CampaignEventFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API CampaignEventFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dimension settings of the event filter for the campaign.</p>
     */
    inline const EventDimensions& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimension settings of the event filter for the campaign.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The dimension settings of the event filter for the campaign.</p>
     */
    inline void SetDimensions(const EventDimensions& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimension settings of the event filter for the campaign.</p>
     */
    inline void SetDimensions(EventDimensions&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimension settings of the event filter for the campaign.</p>
     */
    inline CampaignEventFilter& WithDimensions(const EventDimensions& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimension settings of the event filter for the campaign.</p>
     */
    inline CampaignEventFilter& WithDimensions(EventDimensions&& value) { SetDimensions(std::move(value)); return *this;}


    /**
     * <p>The type of event that causes the campaign to be sent. Valid values are:
     * SYSTEM, sends the campaign when a system event occurs; and, ENDPOINT, sends the
     * campaign when an endpoint event (<link 
     * linkend="apps-application-id-events">Events</link> resource) occurs.</p>
     */
    inline const FilterType& GetFilterType() const{ return m_filterType; }

    /**
     * <p>The type of event that causes the campaign to be sent. Valid values are:
     * SYSTEM, sends the campaign when a system event occurs; and, ENDPOINT, sends the
     * campaign when an endpoint event (<link 
     * linkend="apps-application-id-events">Events</link> resource) occurs.</p>
     */
    inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }

    /**
     * <p>The type of event that causes the campaign to be sent. Valid values are:
     * SYSTEM, sends the campaign when a system event occurs; and, ENDPOINT, sends the
     * campaign when an endpoint event (<link 
     * linkend="apps-application-id-events">Events</link> resource) occurs.</p>
     */
    inline void SetFilterType(const FilterType& value) { m_filterTypeHasBeenSet = true; m_filterType = value; }

    /**
     * <p>The type of event that causes the campaign to be sent. Valid values are:
     * SYSTEM, sends the campaign when a system event occurs; and, ENDPOINT, sends the
     * campaign when an endpoint event (<link 
     * linkend="apps-application-id-events">Events</link> resource) occurs.</p>
     */
    inline void SetFilterType(FilterType&& value) { m_filterTypeHasBeenSet = true; m_filterType = std::move(value); }

    /**
     * <p>The type of event that causes the campaign to be sent. Valid values are:
     * SYSTEM, sends the campaign when a system event occurs; and, ENDPOINT, sends the
     * campaign when an endpoint event (<link 
     * linkend="apps-application-id-events">Events</link> resource) occurs.</p>
     */
    inline CampaignEventFilter& WithFilterType(const FilterType& value) { SetFilterType(value); return *this;}

    /**
     * <p>The type of event that causes the campaign to be sent. Valid values are:
     * SYSTEM, sends the campaign when a system event occurs; and, ENDPOINT, sends the
     * campaign when an endpoint event (<link 
     * linkend="apps-application-id-events">Events</link> resource) occurs.</p>
     */
    inline CampaignEventFilter& WithFilterType(FilterType&& value) { SetFilterType(std::move(value)); return *this;}

  private:

    EventDimensions m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    FilterType m_filterType;
    bool m_filterTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
