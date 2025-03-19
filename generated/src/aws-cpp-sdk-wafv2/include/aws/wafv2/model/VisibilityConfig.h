/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Defines and enables Amazon CloudWatch metrics and web request sample
   * collection. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/VisibilityConfig">AWS
   * API Reference</a></p>
   */
  class VisibilityConfig
  {
  public:
    AWS_WAFV2_API VisibilityConfig() = default;
    AWS_WAFV2_API VisibilityConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API VisibilityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether WAF should store a sampling of the web requests that match
     * the rules. You can view the sampled requests through the WAF console. </p> <p>If
     * you configure data protection for the web ACL, the protection applies to the web
     * ACL's sampled web request data. </p>  <p>Request sampling doesn't provide
     * a field redaction option, and any field redaction that you specify in your
     * logging configuration doesn't affect sampling. You can only exclude fields from
     * request sampling by disabling sampling in the web ACL visibility configuration
     * or by configuring data protection for the web ACL.</p> 
     */
    inline bool GetSampledRequestsEnabled() const { return m_sampledRequestsEnabled; }
    inline bool SampledRequestsEnabledHasBeenSet() const { return m_sampledRequestsEnabledHasBeenSet; }
    inline void SetSampledRequestsEnabled(bool value) { m_sampledRequestsEnabledHasBeenSet = true; m_sampledRequestsEnabled = value; }
    inline VisibilityConfig& WithSampledRequestsEnabled(bool value) { SetSampledRequestsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the associated resource sends metrics to Amazon CloudWatch.
     * For the list of available metrics, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#waf-metrics">WAF
     * Metrics</a> in the <i>WAF Developer Guide</i>.</p> <p>For web ACLs, the metrics
     * are for web requests that have the web ACL default action applied. WAF applies
     * the default action to web requests that pass the inspection of all rules in the
     * web ACL without being either allowed or blocked. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/web-acl-default-action.html">The
     * web ACL default action</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline bool GetCloudWatchMetricsEnabled() const { return m_cloudWatchMetricsEnabled; }
    inline bool CloudWatchMetricsEnabledHasBeenSet() const { return m_cloudWatchMetricsEnabledHasBeenSet; }
    inline void SetCloudWatchMetricsEnabled(bool value) { m_cloudWatchMetricsEnabledHasBeenSet = true; m_cloudWatchMetricsEnabled = value; }
    inline VisibilityConfig& WithCloudWatchMetricsEnabled(bool value) { SetCloudWatchMetricsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name of the Amazon CloudWatch metric dimension. The name can contain only
     * the characters: A-Z, a-z, 0-9, - (hyphen), and _ (underscore). The name can be
     * from one to 128 characters long. It can't contain whitespace or metric names
     * that are reserved for WAF, for example <code>All</code> and
     * <code>Default_Action</code>. </p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    VisibilityConfig& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}
  private:

    bool m_sampledRequestsEnabled{false};
    bool m_sampledRequestsEnabledHasBeenSet = false;

    bool m_cloudWatchMetricsEnabled{false};
    bool m_cloudWatchMetricsEnabledHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
