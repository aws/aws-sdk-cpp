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
    AWS_SECURITYHUB_API AwsWafv2VisibilityConfigDetails();
    AWS_SECURITYHUB_API AwsWafv2VisibilityConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2VisibilityConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A boolean indicating whether the associated resource sends metrics to Amazon
     * CloudWatch. For the list of available metrics, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#waf-metrics">WAF
     * metrics and dimensions</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline bool GetCloudWatchMetricsEnabled() const{ return m_cloudWatchMetricsEnabled; }

    /**
     * <p> A boolean indicating whether the associated resource sends metrics to Amazon
     * CloudWatch. For the list of available metrics, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#waf-metrics">WAF
     * metrics and dimensions</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline bool CloudWatchMetricsEnabledHasBeenSet() const { return m_cloudWatchMetricsEnabledHasBeenSet; }

    /**
     * <p> A boolean indicating whether the associated resource sends metrics to Amazon
     * CloudWatch. For the list of available metrics, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#waf-metrics">WAF
     * metrics and dimensions</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline void SetCloudWatchMetricsEnabled(bool value) { m_cloudWatchMetricsEnabledHasBeenSet = true; m_cloudWatchMetricsEnabled = value; }

    /**
     * <p> A boolean indicating whether the associated resource sends metrics to Amazon
     * CloudWatch. For the list of available metrics, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#waf-metrics">WAF
     * metrics and dimensions</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline AwsWafv2VisibilityConfigDetails& WithCloudWatchMetricsEnabled(bool value) { SetCloudWatchMetricsEnabled(value); return *this;}


    /**
     * <p> A name of the Amazon CloudWatch metric. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p> A name of the Amazon CloudWatch metric. </p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p> A name of the Amazon CloudWatch metric. </p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p> A name of the Amazon CloudWatch metric. </p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p> A name of the Amazon CloudWatch metric. </p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p> A name of the Amazon CloudWatch metric. </p>
     */
    inline AwsWafv2VisibilityConfigDetails& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p> A name of the Amazon CloudWatch metric. </p>
     */
    inline AwsWafv2VisibilityConfigDetails& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p> A name of the Amazon CloudWatch metric. </p>
     */
    inline AwsWafv2VisibilityConfigDetails& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p> A boolean indicating whether WAF should store a sampling of the web requests
     * that match the rules. You can view the sampled requests through the WAF console.
     * </p>
     */
    inline bool GetSampledRequestsEnabled() const{ return m_sampledRequestsEnabled; }

    /**
     * <p> A boolean indicating whether WAF should store a sampling of the web requests
     * that match the rules. You can view the sampled requests through the WAF console.
     * </p>
     */
    inline bool SampledRequestsEnabledHasBeenSet() const { return m_sampledRequestsEnabledHasBeenSet; }

    /**
     * <p> A boolean indicating whether WAF should store a sampling of the web requests
     * that match the rules. You can view the sampled requests through the WAF console.
     * </p>
     */
    inline void SetSampledRequestsEnabled(bool value) { m_sampledRequestsEnabledHasBeenSet = true; m_sampledRequestsEnabled = value; }

    /**
     * <p> A boolean indicating whether WAF should store a sampling of the web requests
     * that match the rules. You can view the sampled requests through the WAF console.
     * </p>
     */
    inline AwsWafv2VisibilityConfigDetails& WithSampledRequestsEnabled(bool value) { SetSampledRequestsEnabled(value); return *this;}

  private:

    bool m_cloudWatchMetricsEnabled;
    bool m_cloudWatchMetricsEnabledHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    bool m_sampledRequestsEnabled;
    bool m_sampledRequestsEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
