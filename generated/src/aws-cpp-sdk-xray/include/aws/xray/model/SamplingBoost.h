/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Temporary boost sampling rate. X-Ray calculates sampling boost for each
   * service based on the recent sampling boost stats of all services that called <a
   * href="https://docs.aws.amazon.com/xray/latest/api/API_GetSamplingTargets.html">GetSamplingTargets</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/SamplingBoost">AWS
   * API Reference</a></p>
   */
  class SamplingBoost
  {
  public:
    AWS_XRAY_API SamplingBoost() = default;
    AWS_XRAY_API SamplingBoost(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API SamplingBoost& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The calculated sampling boost rate for this service </p>
     */
    inline double GetBoostRate() const { return m_boostRate; }
    inline bool BoostRateHasBeenSet() const { return m_boostRateHasBeenSet; }
    inline void SetBoostRate(double value) { m_boostRateHasBeenSet = true; m_boostRate = value; }
    inline SamplingBoost& WithBoostRate(double value) { SetBoostRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the sampling boost expires.</p>
     */
    inline const Aws::Utils::DateTime& GetBoostRateTTL() const { return m_boostRateTTL; }
    inline bool BoostRateTTLHasBeenSet() const { return m_boostRateTTLHasBeenSet; }
    template<typename BoostRateTTLT = Aws::Utils::DateTime>
    void SetBoostRateTTL(BoostRateTTLT&& value) { m_boostRateTTLHasBeenSet = true; m_boostRateTTL = std::forward<BoostRateTTLT>(value); }
    template<typename BoostRateTTLT = Aws::Utils::DateTime>
    SamplingBoost& WithBoostRateTTL(BoostRateTTLT&& value) { SetBoostRateTTL(std::forward<BoostRateTTLT>(value)); return *this;}
    ///@}
  private:

    double m_boostRate{0.0};
    bool m_boostRateHasBeenSet = false;

    Aws::Utils::DateTime m_boostRateTTL{};
    bool m_boostRateTTLHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
