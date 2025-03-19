/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Defines and enables Amazon CloudWatch metrics and web request sample
   * collection. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafv2VisibilityConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafv2VisibilityConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafv2VisibilityConfigDetails() = default;
    AWS_SECURITYHUB_API AwsWafv2VisibilityConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2VisibilityConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A boolean indicating whether the associated resource sends metrics to Amazon
     * CloudWatch. For the list of available metrics, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#waf-metrics">WAF
     * metrics and dimensions</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline bool GetCloudWatchMetricsEnabled() const { return m_cloudWatchMetricsEnabled; }
    inline bool CloudWatchMetricsEnabledHasBeenSet() const { return m_cloudWatchMetricsEnabledHasBeenSet; }
    inline void SetCloudWatchMetricsEnabled(bool value) { m_cloudWatchMetricsEnabledHasBeenSet = true; m_cloudWatchMetricsEnabled = value; }
    inline AwsWafv2VisibilityConfigDetails& WithCloudWatchMetricsEnabled(bool value) { SetCloudWatchMetricsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A name of the Amazon CloudWatch metric. </p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    AwsWafv2VisibilityConfigDetails& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A boolean indicating whether WAF should store a sampling of the web requests
     * that match the rules. You can view the sampled requests through the WAF console.
     * </p>
     */
    inline bool GetSampledRequestsEnabled() const { return m_sampledRequestsEnabled; }
    inline bool SampledRequestsEnabledHasBeenSet() const { return m_sampledRequestsEnabledHasBeenSet; }
    inline void SetSampledRequestsEnabled(bool value) { m_sampledRequestsEnabledHasBeenSet = true; m_sampledRequestsEnabled = value; }
    inline AwsWafv2VisibilityConfigDetails& WithSampledRequestsEnabled(bool value) { SetSampledRequestsEnabled(value); return *this;}
    ///@}
  private:

    bool m_cloudWatchMetricsEnabled{false};
    bool m_cloudWatchMetricsEnabledHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    bool m_sampledRequestsEnabled{false};
    bool m_sampledRequestsEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
