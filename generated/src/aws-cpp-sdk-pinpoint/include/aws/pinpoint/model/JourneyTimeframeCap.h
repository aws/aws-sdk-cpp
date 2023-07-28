/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>

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
   * <p>The number of messages that can be sent to an endpoint during the specified
   * timeframe for all journeys.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyTimeframeCap">AWS
   * API Reference</a></p>
   */
  class JourneyTimeframeCap
  {
  public:
    AWS_PINPOINT_API JourneyTimeframeCap();
    AWS_PINPOINT_API JourneyTimeframeCap(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyTimeframeCap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of messages that all journeys can send to an endpoint
     * during the specified timeframe. The maximum value is 100. If set to 0, this
     * limit will not apply.</p>
     */
    inline int GetCap() const{ return m_cap; }

    /**
     * <p>The maximum number of messages that all journeys can send to an endpoint
     * during the specified timeframe. The maximum value is 100. If set to 0, this
     * limit will not apply.</p>
     */
    inline bool CapHasBeenSet() const { return m_capHasBeenSet; }

    /**
     * <p>The maximum number of messages that all journeys can send to an endpoint
     * during the specified timeframe. The maximum value is 100. If set to 0, this
     * limit will not apply.</p>
     */
    inline void SetCap(int value) { m_capHasBeenSet = true; m_cap = value; }

    /**
     * <p>The maximum number of messages that all journeys can send to an endpoint
     * during the specified timeframe. The maximum value is 100. If set to 0, this
     * limit will not apply.</p>
     */
    inline JourneyTimeframeCap& WithCap(int value) { SetCap(value); return *this;}


    /**
     * <p>The length of the timeframe in days. The maximum value is 30. If set to 0,
     * this limit will not apply.</p>
     */
    inline int GetDays() const{ return m_days; }

    /**
     * <p>The length of the timeframe in days. The maximum value is 30. If set to 0,
     * this limit will not apply.</p>
     */
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }

    /**
     * <p>The length of the timeframe in days. The maximum value is 30. If set to 0,
     * this limit will not apply.</p>
     */
    inline void SetDays(int value) { m_daysHasBeenSet = true; m_days = value; }

    /**
     * <p>The length of the timeframe in days. The maximum value is 30. If set to 0,
     * this limit will not apply.</p>
     */
    inline JourneyTimeframeCap& WithDays(int value) { SetDays(value); return *this;}

  private:

    int m_cap;
    bool m_capHasBeenSet = false;

    int m_days;
    bool m_daysHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
