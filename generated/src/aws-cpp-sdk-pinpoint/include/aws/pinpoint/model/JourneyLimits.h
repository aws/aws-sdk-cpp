/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies limits on the messages that a journey can send and the number of
   * times participants can enter a journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyLimits">AWS
   * API Reference</a></p>
   */
  class JourneyLimits
  {
  public:
    AWS_PINPOINT_API JourneyLimits();
    AWS_PINPOINT_API JourneyLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of messages that the journey can send to a single
     * participant during a 24-hour period. The maximum value is 100.</p>
     */
    inline int GetDailyCap() const{ return m_dailyCap; }

    /**
     * <p>The maximum number of messages that the journey can send to a single
     * participant during a 24-hour period. The maximum value is 100.</p>
     */
    inline bool DailyCapHasBeenSet() const { return m_dailyCapHasBeenSet; }

    /**
     * <p>The maximum number of messages that the journey can send to a single
     * participant during a 24-hour period. The maximum value is 100.</p>
     */
    inline void SetDailyCap(int value) { m_dailyCapHasBeenSet = true; m_dailyCap = value; }

    /**
     * <p>The maximum number of messages that the journey can send to a single
     * participant during a 24-hour period. The maximum value is 100.</p>
     */
    inline JourneyLimits& WithDailyCap(int value) { SetDailyCap(value); return *this;}


    /**
     * <p>The maximum number of times that a participant can enter the journey. The
     * maximum value is 100. To allow participants to enter the journey an unlimited
     * number of times, set this value to 0.</p>
     */
    inline int GetEndpointReentryCap() const{ return m_endpointReentryCap; }

    /**
     * <p>The maximum number of times that a participant can enter the journey. The
     * maximum value is 100. To allow participants to enter the journey an unlimited
     * number of times, set this value to 0.</p>
     */
    inline bool EndpointReentryCapHasBeenSet() const { return m_endpointReentryCapHasBeenSet; }

    /**
     * <p>The maximum number of times that a participant can enter the journey. The
     * maximum value is 100. To allow participants to enter the journey an unlimited
     * number of times, set this value to 0.</p>
     */
    inline void SetEndpointReentryCap(int value) { m_endpointReentryCapHasBeenSet = true; m_endpointReentryCap = value; }

    /**
     * <p>The maximum number of times that a participant can enter the journey. The
     * maximum value is 100. To allow participants to enter the journey an unlimited
     * number of times, set this value to 0.</p>
     */
    inline JourneyLimits& WithEndpointReentryCap(int value) { SetEndpointReentryCap(value); return *this;}


    /**
     * <p>The maximum number of messages that the journey can send each second.</p>
     */
    inline int GetMessagesPerSecond() const{ return m_messagesPerSecond; }

    /**
     * <p>The maximum number of messages that the journey can send each second.</p>
     */
    inline bool MessagesPerSecondHasBeenSet() const { return m_messagesPerSecondHasBeenSet; }

    /**
     * <p>The maximum number of messages that the journey can send each second.</p>
     */
    inline void SetMessagesPerSecond(int value) { m_messagesPerSecondHasBeenSet = true; m_messagesPerSecond = value; }

    /**
     * <p>The maximum number of messages that the journey can send each second.</p>
     */
    inline JourneyLimits& WithMessagesPerSecond(int value) { SetMessagesPerSecond(value); return *this;}


    /**
     * <p>Minimum time that must pass before an endpoint can re-enter a given journey.
     * The duration should use an ISO 8601 format, such as PT1H. </p>
     */
    inline const Aws::String& GetEndpointReentryInterval() const{ return m_endpointReentryInterval; }

    /**
     * <p>Minimum time that must pass before an endpoint can re-enter a given journey.
     * The duration should use an ISO 8601 format, such as PT1H. </p>
     */
    inline bool EndpointReentryIntervalHasBeenSet() const { return m_endpointReentryIntervalHasBeenSet; }

    /**
     * <p>Minimum time that must pass before an endpoint can re-enter a given journey.
     * The duration should use an ISO 8601 format, such as PT1H. </p>
     */
    inline void SetEndpointReentryInterval(const Aws::String& value) { m_endpointReentryIntervalHasBeenSet = true; m_endpointReentryInterval = value; }

    /**
     * <p>Minimum time that must pass before an endpoint can re-enter a given journey.
     * The duration should use an ISO 8601 format, such as PT1H. </p>
     */
    inline void SetEndpointReentryInterval(Aws::String&& value) { m_endpointReentryIntervalHasBeenSet = true; m_endpointReentryInterval = std::move(value); }

    /**
     * <p>Minimum time that must pass before an endpoint can re-enter a given journey.
     * The duration should use an ISO 8601 format, such as PT1H. </p>
     */
    inline void SetEndpointReentryInterval(const char* value) { m_endpointReentryIntervalHasBeenSet = true; m_endpointReentryInterval.assign(value); }

    /**
     * <p>Minimum time that must pass before an endpoint can re-enter a given journey.
     * The duration should use an ISO 8601 format, such as PT1H. </p>
     */
    inline JourneyLimits& WithEndpointReentryInterval(const Aws::String& value) { SetEndpointReentryInterval(value); return *this;}

    /**
     * <p>Minimum time that must pass before an endpoint can re-enter a given journey.
     * The duration should use an ISO 8601 format, such as PT1H. </p>
     */
    inline JourneyLimits& WithEndpointReentryInterval(Aws::String&& value) { SetEndpointReentryInterval(std::move(value)); return *this;}

    /**
     * <p>Minimum time that must pass before an endpoint can re-enter a given journey.
     * The duration should use an ISO 8601 format, such as PT1H. </p>
     */
    inline JourneyLimits& WithEndpointReentryInterval(const char* value) { SetEndpointReentryInterval(value); return *this;}


    /**
     * <p>The number of messages that an endpoint can receive during the specified
     * timeframe.</p>
     */
    inline const JourneyTimeframeCap& GetTimeframeCap() const{ return m_timeframeCap; }

    /**
     * <p>The number of messages that an endpoint can receive during the specified
     * timeframe.</p>
     */
    inline bool TimeframeCapHasBeenSet() const { return m_timeframeCapHasBeenSet; }

    /**
     * <p>The number of messages that an endpoint can receive during the specified
     * timeframe.</p>
     */
    inline void SetTimeframeCap(const JourneyTimeframeCap& value) { m_timeframeCapHasBeenSet = true; m_timeframeCap = value; }

    /**
     * <p>The number of messages that an endpoint can receive during the specified
     * timeframe.</p>
     */
    inline void SetTimeframeCap(JourneyTimeframeCap&& value) { m_timeframeCapHasBeenSet = true; m_timeframeCap = std::move(value); }

    /**
     * <p>The number of messages that an endpoint can receive during the specified
     * timeframe.</p>
     */
    inline JourneyLimits& WithTimeframeCap(const JourneyTimeframeCap& value) { SetTimeframeCap(value); return *this;}

    /**
     * <p>The number of messages that an endpoint can receive during the specified
     * timeframe.</p>
     */
    inline JourneyLimits& WithTimeframeCap(JourneyTimeframeCap&& value) { SetTimeframeCap(std::move(value)); return *this;}


    /**
     * <p>The maximum number of messages a journey can sent to a single endpoint. The
     * maximum value is 100. If set to 0, this limit will not apply.</p>
     */
    inline int GetTotalCap() const{ return m_totalCap; }

    /**
     * <p>The maximum number of messages a journey can sent to a single endpoint. The
     * maximum value is 100. If set to 0, this limit will not apply.</p>
     */
    inline bool TotalCapHasBeenSet() const { return m_totalCapHasBeenSet; }

    /**
     * <p>The maximum number of messages a journey can sent to a single endpoint. The
     * maximum value is 100. If set to 0, this limit will not apply.</p>
     */
    inline void SetTotalCap(int value) { m_totalCapHasBeenSet = true; m_totalCap = value; }

    /**
     * <p>The maximum number of messages a journey can sent to a single endpoint. The
     * maximum value is 100. If set to 0, this limit will not apply.</p>
     */
    inline JourneyLimits& WithTotalCap(int value) { SetTotalCap(value); return *this;}

  private:

    int m_dailyCap;
    bool m_dailyCapHasBeenSet = false;

    int m_endpointReentryCap;
    bool m_endpointReentryCapHasBeenSet = false;

    int m_messagesPerSecond;
    bool m_messagesPerSecondHasBeenSet = false;

    Aws::String m_endpointReentryInterval;
    bool m_endpointReentryIntervalHasBeenSet = false;

    JourneyTimeframeCap m_timeframeCap;
    bool m_timeframeCapHasBeenSet = false;

    int m_totalCap;
    bool m_totalCapHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
