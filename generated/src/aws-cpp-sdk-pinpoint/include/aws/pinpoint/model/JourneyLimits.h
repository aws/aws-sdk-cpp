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
    AWS_PINPOINT_API JourneyLimits() = default;
    AWS_PINPOINT_API JourneyLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of messages that the journey can send to a single
     * participant during a 24-hour period. The maximum value is 100.</p>
     */
    inline int GetDailyCap() const { return m_dailyCap; }
    inline bool DailyCapHasBeenSet() const { return m_dailyCapHasBeenSet; }
    inline void SetDailyCap(int value) { m_dailyCapHasBeenSet = true; m_dailyCap = value; }
    inline JourneyLimits& WithDailyCap(int value) { SetDailyCap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of times that a participant can enter the journey. The
     * maximum value is 100. To allow participants to enter the journey an unlimited
     * number of times, set this value to 0.</p>
     */
    inline int GetEndpointReentryCap() const { return m_endpointReentryCap; }
    inline bool EndpointReentryCapHasBeenSet() const { return m_endpointReentryCapHasBeenSet; }
    inline void SetEndpointReentryCap(int value) { m_endpointReentryCapHasBeenSet = true; m_endpointReentryCap = value; }
    inline JourneyLimits& WithEndpointReentryCap(int value) { SetEndpointReentryCap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of messages that the journey can send each second.</p>
     */
    inline int GetMessagesPerSecond() const { return m_messagesPerSecond; }
    inline bool MessagesPerSecondHasBeenSet() const { return m_messagesPerSecondHasBeenSet; }
    inline void SetMessagesPerSecond(int value) { m_messagesPerSecondHasBeenSet = true; m_messagesPerSecond = value; }
    inline JourneyLimits& WithMessagesPerSecond(int value) { SetMessagesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum time that must pass before an endpoint can re-enter a given journey.
     * The duration should use an ISO 8601 format, such as PT1H. </p>
     */
    inline const Aws::String& GetEndpointReentryInterval() const { return m_endpointReentryInterval; }
    inline bool EndpointReentryIntervalHasBeenSet() const { return m_endpointReentryIntervalHasBeenSet; }
    template<typename EndpointReentryIntervalT = Aws::String>
    void SetEndpointReentryInterval(EndpointReentryIntervalT&& value) { m_endpointReentryIntervalHasBeenSet = true; m_endpointReentryInterval = std::forward<EndpointReentryIntervalT>(value); }
    template<typename EndpointReentryIntervalT = Aws::String>
    JourneyLimits& WithEndpointReentryInterval(EndpointReentryIntervalT&& value) { SetEndpointReentryInterval(std::forward<EndpointReentryIntervalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of messages that an endpoint can receive during the specified
     * timeframe.</p>
     */
    inline const JourneyTimeframeCap& GetTimeframeCap() const { return m_timeframeCap; }
    inline bool TimeframeCapHasBeenSet() const { return m_timeframeCapHasBeenSet; }
    template<typename TimeframeCapT = JourneyTimeframeCap>
    void SetTimeframeCap(TimeframeCapT&& value) { m_timeframeCapHasBeenSet = true; m_timeframeCap = std::forward<TimeframeCapT>(value); }
    template<typename TimeframeCapT = JourneyTimeframeCap>
    JourneyLimits& WithTimeframeCap(TimeframeCapT&& value) { SetTimeframeCap(std::forward<TimeframeCapT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of messages a journey can sent to a single endpoint. The
     * maximum value is 100. If set to 0, this limit will not apply.</p>
     */
    inline int GetTotalCap() const { return m_totalCap; }
    inline bool TotalCapHasBeenSet() const { return m_totalCapHasBeenSet; }
    inline void SetTotalCap(int value) { m_totalCapHasBeenSet = true; m_totalCap = value; }
    inline JourneyLimits& WithTotalCap(int value) { SetTotalCap(value); return *this;}
    ///@}
  private:

    int m_dailyCap{0};
    bool m_dailyCapHasBeenSet = false;

    int m_endpointReentryCap{0};
    bool m_endpointReentryCapHasBeenSet = false;

    int m_messagesPerSecond{0};
    bool m_messagesPerSecondHasBeenSet = false;

    Aws::String m_endpointReentryInterval;
    bool m_endpointReentryIntervalHasBeenSet = false;

    JourneyTimeframeCap m_timeframeCap;
    bool m_timeframeCapHasBeenSet = false;

    int m_totalCap{0};
    bool m_totalCapHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
