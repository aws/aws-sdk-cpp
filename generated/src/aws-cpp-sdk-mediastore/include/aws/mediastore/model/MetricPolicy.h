/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/model/ContainerLevelMetrics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediastore/model/MetricPolicyRule.h>
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
namespace MediaStore
{
namespace Model
{

  /**
   * <p>The metric policy that is associated with the container. A metric policy
   * allows AWS Elemental MediaStore to send metrics to Amazon CloudWatch. In the
   * policy, you must indicate whether you want MediaStore to send container-level
   * metrics. You can also include rules to define groups of objects that you want
   * MediaStore to send object-level metrics for.</p> <p>To view examples of how to
   * construct a metric policy for your use case, see <a
   * href="https://docs.aws.amazon.com/mediastore/latest/ug/policies-metric-examples.html">Example
   * Metric Policies</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/MetricPolicy">AWS
   * API Reference</a></p>
   */
  class MetricPolicy
  {
  public:
    AWS_MEDIASTORE_API MetricPolicy();
    AWS_MEDIASTORE_API MetricPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIASTORE_API MetricPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIASTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A setting to enable or disable metrics at the container level.</p>
     */
    inline const ContainerLevelMetrics& GetContainerLevelMetrics() const{ return m_containerLevelMetrics; }

    /**
     * <p>A setting to enable or disable metrics at the container level.</p>
     */
    inline bool ContainerLevelMetricsHasBeenSet() const { return m_containerLevelMetricsHasBeenSet; }

    /**
     * <p>A setting to enable or disable metrics at the container level.</p>
     */
    inline void SetContainerLevelMetrics(const ContainerLevelMetrics& value) { m_containerLevelMetricsHasBeenSet = true; m_containerLevelMetrics = value; }

    /**
     * <p>A setting to enable or disable metrics at the container level.</p>
     */
    inline void SetContainerLevelMetrics(ContainerLevelMetrics&& value) { m_containerLevelMetricsHasBeenSet = true; m_containerLevelMetrics = std::move(value); }

    /**
     * <p>A setting to enable or disable metrics at the container level.</p>
     */
    inline MetricPolicy& WithContainerLevelMetrics(const ContainerLevelMetrics& value) { SetContainerLevelMetrics(value); return *this;}

    /**
     * <p>A setting to enable or disable metrics at the container level.</p>
     */
    inline MetricPolicy& WithContainerLevelMetrics(ContainerLevelMetrics&& value) { SetContainerLevelMetrics(std::move(value)); return *this;}


    /**
     * <p>A parameter that holds an array of rules that enable metrics at the object
     * level. This parameter is optional, but if you choose to include it, you must
     * also include at least one rule. By default, you can include up to five rules.
     * You can also <a
     * href="https://console.aws.amazon.com/servicequotas/home?region=us-east-1#!/services/mediastore/quotas">request
     * a quota increase</a> to allow up to 300 rules per policy.</p>
     */
    inline const Aws::Vector<MetricPolicyRule>& GetMetricPolicyRules() const{ return m_metricPolicyRules; }

    /**
     * <p>A parameter that holds an array of rules that enable metrics at the object
     * level. This parameter is optional, but if you choose to include it, you must
     * also include at least one rule. By default, you can include up to five rules.
     * You can also <a
     * href="https://console.aws.amazon.com/servicequotas/home?region=us-east-1#!/services/mediastore/quotas">request
     * a quota increase</a> to allow up to 300 rules per policy.</p>
     */
    inline bool MetricPolicyRulesHasBeenSet() const { return m_metricPolicyRulesHasBeenSet; }

    /**
     * <p>A parameter that holds an array of rules that enable metrics at the object
     * level. This parameter is optional, but if you choose to include it, you must
     * also include at least one rule. By default, you can include up to five rules.
     * You can also <a
     * href="https://console.aws.amazon.com/servicequotas/home?region=us-east-1#!/services/mediastore/quotas">request
     * a quota increase</a> to allow up to 300 rules per policy.</p>
     */
    inline void SetMetricPolicyRules(const Aws::Vector<MetricPolicyRule>& value) { m_metricPolicyRulesHasBeenSet = true; m_metricPolicyRules = value; }

    /**
     * <p>A parameter that holds an array of rules that enable metrics at the object
     * level. This parameter is optional, but if you choose to include it, you must
     * also include at least one rule. By default, you can include up to five rules.
     * You can also <a
     * href="https://console.aws.amazon.com/servicequotas/home?region=us-east-1#!/services/mediastore/quotas">request
     * a quota increase</a> to allow up to 300 rules per policy.</p>
     */
    inline void SetMetricPolicyRules(Aws::Vector<MetricPolicyRule>&& value) { m_metricPolicyRulesHasBeenSet = true; m_metricPolicyRules = std::move(value); }

    /**
     * <p>A parameter that holds an array of rules that enable metrics at the object
     * level. This parameter is optional, but if you choose to include it, you must
     * also include at least one rule. By default, you can include up to five rules.
     * You can also <a
     * href="https://console.aws.amazon.com/servicequotas/home?region=us-east-1#!/services/mediastore/quotas">request
     * a quota increase</a> to allow up to 300 rules per policy.</p>
     */
    inline MetricPolicy& WithMetricPolicyRules(const Aws::Vector<MetricPolicyRule>& value) { SetMetricPolicyRules(value); return *this;}

    /**
     * <p>A parameter that holds an array of rules that enable metrics at the object
     * level. This parameter is optional, but if you choose to include it, you must
     * also include at least one rule. By default, you can include up to five rules.
     * You can also <a
     * href="https://console.aws.amazon.com/servicequotas/home?region=us-east-1#!/services/mediastore/quotas">request
     * a quota increase</a> to allow up to 300 rules per policy.</p>
     */
    inline MetricPolicy& WithMetricPolicyRules(Aws::Vector<MetricPolicyRule>&& value) { SetMetricPolicyRules(std::move(value)); return *this;}

    /**
     * <p>A parameter that holds an array of rules that enable metrics at the object
     * level. This parameter is optional, but if you choose to include it, you must
     * also include at least one rule. By default, you can include up to five rules.
     * You can also <a
     * href="https://console.aws.amazon.com/servicequotas/home?region=us-east-1#!/services/mediastore/quotas">request
     * a quota increase</a> to allow up to 300 rules per policy.</p>
     */
    inline MetricPolicy& AddMetricPolicyRules(const MetricPolicyRule& value) { m_metricPolicyRulesHasBeenSet = true; m_metricPolicyRules.push_back(value); return *this; }

    /**
     * <p>A parameter that holds an array of rules that enable metrics at the object
     * level. This parameter is optional, but if you choose to include it, you must
     * also include at least one rule. By default, you can include up to five rules.
     * You can also <a
     * href="https://console.aws.amazon.com/servicequotas/home?region=us-east-1#!/services/mediastore/quotas">request
     * a quota increase</a> to allow up to 300 rules per policy.</p>
     */
    inline MetricPolicy& AddMetricPolicyRules(MetricPolicyRule&& value) { m_metricPolicyRulesHasBeenSet = true; m_metricPolicyRules.push_back(std::move(value)); return *this; }

  private:

    ContainerLevelMetrics m_containerLevelMetrics;
    bool m_containerLevelMetricsHasBeenSet = false;

    Aws::Vector<MetricPolicyRule> m_metricPolicyRules;
    bool m_metricPolicyRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
