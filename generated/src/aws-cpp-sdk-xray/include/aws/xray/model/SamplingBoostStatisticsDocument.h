/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Request anomaly stats for a single rule from a service. Results are for the
   * last 10 seconds unless the service has been assigned a longer reporting interval
   * after a previous call to <a
   * href="https://docs.aws.amazon.com/xray/latest/api/API_GetSamplingTargets.html">GetSamplingTargets</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/SamplingBoostStatisticsDocument">AWS
   * API Reference</a></p>
   */
  class SamplingBoostStatisticsDocument
  {
  public:
    AWS_XRAY_API SamplingBoostStatisticsDocument() = default;
    AWS_XRAY_API SamplingBoostStatisticsDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API SamplingBoostStatisticsDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    SamplingBoostStatisticsDocument& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matches the <code>name</code> that the service uses to identify itself in
     * segments.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    SamplingBoostStatisticsDocument& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current time.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    SamplingBoostStatisticsDocument& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests with anomaly.</p>
     */
    inline int GetAnomalyCount() const { return m_anomalyCount; }
    inline bool AnomalyCountHasBeenSet() const { return m_anomalyCountHasBeenSet; }
    inline void SetAnomalyCount(int value) { m_anomalyCountHasBeenSet = true; m_anomalyCount = value; }
    inline SamplingBoostStatisticsDocument& WithAnomalyCount(int value) { SetAnomalyCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests that associated to the rule.</p>
     */
    inline int GetTotalCount() const { return m_totalCount; }
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }
    inline void SetTotalCount(int value) { m_totalCountHasBeenSet = true; m_totalCount = value; }
    inline SamplingBoostStatisticsDocument& WithTotalCount(int value) { SetTotalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests with anomaly recorded.</p>
     */
    inline int GetSampledAnomalyCount() const { return m_sampledAnomalyCount; }
    inline bool SampledAnomalyCountHasBeenSet() const { return m_sampledAnomalyCountHasBeenSet; }
    inline void SetSampledAnomalyCount(int value) { m_sampledAnomalyCountHasBeenSet = true; m_sampledAnomalyCount = value; }
    inline SamplingBoostStatisticsDocument& WithSampledAnomalyCount(int value) { SetSampledAnomalyCount(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    int m_anomalyCount{0};
    bool m_anomalyCountHasBeenSet = false;

    int m_totalCount{0};
    bool m_totalCountHasBeenSet = false;

    int m_sampledAnomalyCount{0};
    bool m_sampledAnomalyCountHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
