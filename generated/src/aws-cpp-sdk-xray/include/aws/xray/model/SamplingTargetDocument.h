/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/SamplingBoost.h>
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
   * <p>Temporary changes to a sampling rule configuration. To meet the global
   * sampling target for a rule, X-Ray calculates a new reservoir for each service
   * based on the recent sampling results of all services that called <a
   * href="https://docs.aws.amazon.com/xray/latest/api/API_GetSamplingTargets.html">GetSamplingTargets</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/SamplingTargetDocument">AWS
   * API Reference</a></p>
   */
  class SamplingTargetDocument
  {
  public:
    AWS_XRAY_API SamplingTargetDocument() = default;
    AWS_XRAY_API SamplingTargetDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API SamplingTargetDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the sampling rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    SamplingTargetDocument& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of matching requests to instrument, after the reservoir is
     * exhausted.</p>
     */
    inline double GetFixedRate() const { return m_fixedRate; }
    inline bool FixedRateHasBeenSet() const { return m_fixedRateHasBeenSet; }
    inline void SetFixedRate(double value) { m_fixedRateHasBeenSet = true; m_fixedRate = value; }
    inline SamplingTargetDocument& WithFixedRate(double value) { SetFixedRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests per second that X-Ray allocated for this service.</p>
     */
    inline int GetReservoirQuota() const { return m_reservoirQuota; }
    inline bool ReservoirQuotaHasBeenSet() const { return m_reservoirQuotaHasBeenSet; }
    inline void SetReservoirQuota(int value) { m_reservoirQuotaHasBeenSet = true; m_reservoirQuota = value; }
    inline SamplingTargetDocument& WithReservoirQuota(int value) { SetReservoirQuota(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the reservoir quota expires.</p>
     */
    inline const Aws::Utils::DateTime& GetReservoirQuotaTTL() const { return m_reservoirQuotaTTL; }
    inline bool ReservoirQuotaTTLHasBeenSet() const { return m_reservoirQuotaTTLHasBeenSet; }
    template<typename ReservoirQuotaTTLT = Aws::Utils::DateTime>
    void SetReservoirQuotaTTL(ReservoirQuotaTTLT&& value) { m_reservoirQuotaTTLHasBeenSet = true; m_reservoirQuotaTTL = std::forward<ReservoirQuotaTTLT>(value); }
    template<typename ReservoirQuotaTTLT = Aws::Utils::DateTime>
    SamplingTargetDocument& WithReservoirQuotaTTL(ReservoirQuotaTTLT&& value) { SetReservoirQuotaTTL(std::forward<ReservoirQuotaTTLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds for the service to wait before getting sampling targets
     * again.</p>
     */
    inline int GetInterval() const { return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline SamplingTargetDocument& WithInterval(int value) { SetInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sampling boost that X-Ray allocated for this service.</p>
     */
    inline const SamplingBoost& GetSamplingBoost() const { return m_samplingBoost; }
    inline bool SamplingBoostHasBeenSet() const { return m_samplingBoostHasBeenSet; }
    template<typename SamplingBoostT = SamplingBoost>
    void SetSamplingBoost(SamplingBoostT&& value) { m_samplingBoostHasBeenSet = true; m_samplingBoost = std::forward<SamplingBoostT>(value); }
    template<typename SamplingBoostT = SamplingBoost>
    SamplingTargetDocument& WithSamplingBoost(SamplingBoostT&& value) { SetSamplingBoost(std::forward<SamplingBoostT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    double m_fixedRate{0.0};
    bool m_fixedRateHasBeenSet = false;

    int m_reservoirQuota{0};
    bool m_reservoirQuotaHasBeenSet = false;

    Aws::Utils::DateTime m_reservoirQuotaTTL{};
    bool m_reservoirQuotaTTLHasBeenSet = false;

    int m_interval{0};
    bool m_intervalHasBeenSet = false;

    SamplingBoost m_samplingBoost;
    bool m_samplingBoostHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
