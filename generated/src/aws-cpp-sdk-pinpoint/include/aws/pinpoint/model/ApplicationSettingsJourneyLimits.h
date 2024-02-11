/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/JourneyTimeframeCap.h>
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
   * <p>The default sending limits for journeys in the application. To override these
   * limits and define custom limits for a specific journey, use the Journey
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ApplicationSettingsJourneyLimits">AWS
   * API Reference</a></p>
   */
  class ApplicationSettingsJourneyLimits
  {
  public:
    AWS_PINPOINT_API ApplicationSettingsJourneyLimits();
    AWS_PINPOINT_API ApplicationSettingsJourneyLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ApplicationSettingsJourneyLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The daily number of messages that an endpoint can receive from all journeys.
     * The maximum value is 100. If set to 0, this limit will not apply.</p>
     */
    inline int GetDailyCap() const{ return m_dailyCap; }

    /**
     * <p>The daily number of messages that an endpoint can receive from all journeys.
     * The maximum value is 100. If set to 0, this limit will not apply.</p>
     */
    inline bool DailyCapHasBeenSet() const { return m_dailyCapHasBeenSet; }

    /**
     * <p>The daily number of messages that an endpoint can receive from all journeys.
     * The maximum value is 100. If set to 0, this limit will not apply.</p>
     */
    inline void SetDailyCap(int value) { m_dailyCapHasBeenSet = true; m_dailyCap = value; }

    /**
     * <p>The daily number of messages that an endpoint can receive from all journeys.
     * The maximum value is 100. If set to 0, this limit will not apply.</p>
     */
    inline ApplicationSettingsJourneyLimits& WithDailyCap(int value) { SetDailyCap(value); return *this;}


    /**
     * <p>The default maximum number of messages that can be sent to an endpoint during
     * the specified timeframe for all journeys.</p>
     */
    inline const JourneyTimeframeCap& GetTimeframeCap() const{ return m_timeframeCap; }

    /**
     * <p>The default maximum number of messages that can be sent to an endpoint during
     * the specified timeframe for all journeys.</p>
     */
    inline bool TimeframeCapHasBeenSet() const { return m_timeframeCapHasBeenSet; }

    /**
     * <p>The default maximum number of messages that can be sent to an endpoint during
     * the specified timeframe for all journeys.</p>
     */
    inline void SetTimeframeCap(const JourneyTimeframeCap& value) { m_timeframeCapHasBeenSet = true; m_timeframeCap = value; }

    /**
     * <p>The default maximum number of messages that can be sent to an endpoint during
     * the specified timeframe for all journeys.</p>
     */
    inline void SetTimeframeCap(JourneyTimeframeCap&& value) { m_timeframeCapHasBeenSet = true; m_timeframeCap = std::move(value); }

    /**
     * <p>The default maximum number of messages that can be sent to an endpoint during
     * the specified timeframe for all journeys.</p>
     */
    inline ApplicationSettingsJourneyLimits& WithTimeframeCap(const JourneyTimeframeCap& value) { SetTimeframeCap(value); return *this;}

    /**
     * <p>The default maximum number of messages that can be sent to an endpoint during
     * the specified timeframe for all journeys.</p>
     */
    inline ApplicationSettingsJourneyLimits& WithTimeframeCap(JourneyTimeframeCap&& value) { SetTimeframeCap(std::move(value)); return *this;}


    /**
     * <p>The default maximum number of messages that a single journey can sent to a
     * single endpoint. The maximum value is 100. If set to 0, this limit will not
     * apply.</p>
     */
    inline int GetTotalCap() const{ return m_totalCap; }

    /**
     * <p>The default maximum number of messages that a single journey can sent to a
     * single endpoint. The maximum value is 100. If set to 0, this limit will not
     * apply.</p>
     */
    inline bool TotalCapHasBeenSet() const { return m_totalCapHasBeenSet; }

    /**
     * <p>The default maximum number of messages that a single journey can sent to a
     * single endpoint. The maximum value is 100. If set to 0, this limit will not
     * apply.</p>
     */
    inline void SetTotalCap(int value) { m_totalCapHasBeenSet = true; m_totalCap = value; }

    /**
     * <p>The default maximum number of messages that a single journey can sent to a
     * single endpoint. The maximum value is 100. If set to 0, this limit will not
     * apply.</p>
     */
    inline ApplicationSettingsJourneyLimits& WithTotalCap(int value) { SetTotalCap(value); return *this;}

  private:

    int m_dailyCap;
    bool m_dailyCapHasBeenSet = false;

    JourneyTimeframeCap m_timeframeCap;
    bool m_timeframeCapHasBeenSet = false;

    int m_totalCap;
    bool m_totalCapHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
