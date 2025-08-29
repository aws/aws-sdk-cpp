/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>

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
namespace XRay
{
namespace Model
{

  /**
   * <p>Enable temporary sampling rate increases when you detect anomalies to improve
   * visibility.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/SamplingRateBoost">AWS
   * API Reference</a></p>
   */
  class SamplingRateBoost
  {
  public:
    AWS_XRAY_API SamplingRateBoost() = default;
    AWS_XRAY_API SamplingRateBoost(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API SamplingRateBoost& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines max temporary sampling rate to apply when a boost is triggered.
     * Calculated boost rate by X-Ray will be less than or equal to this max rate.</p>
     */
    inline double GetMaxRate() const { return m_maxRate; }
    inline bool MaxRateHasBeenSet() const { return m_maxRateHasBeenSet; }
    inline void SetMaxRate(double value) { m_maxRateHasBeenSet = true; m_maxRate = value; }
    inline SamplingRateBoost& WithMaxRate(double value) { SetMaxRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the time window (in minutes) in which only one sampling rate boost can
     * be triggered. After a boost occurs, no further boosts are allowed until the next
     * window.</p>
     */
    inline int GetCooldownWindowMinutes() const { return m_cooldownWindowMinutes; }
    inline bool CooldownWindowMinutesHasBeenSet() const { return m_cooldownWindowMinutesHasBeenSet; }
    inline void SetCooldownWindowMinutes(int value) { m_cooldownWindowMinutesHasBeenSet = true; m_cooldownWindowMinutes = value; }
    inline SamplingRateBoost& WithCooldownWindowMinutes(int value) { SetCooldownWindowMinutes(value); return *this;}
    ///@}
  private:

    double m_maxRate{0.0};
    bool m_maxRateHasBeenSet = false;

    int m_cooldownWindowMinutes{0};
    bool m_cooldownWindowMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
