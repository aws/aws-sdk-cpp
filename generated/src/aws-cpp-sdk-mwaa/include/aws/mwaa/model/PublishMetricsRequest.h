/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/MWAARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mwaa/model/MetricDatum.h>
#include <utility>

namespace Aws
{
namespace MWAA
{
namespace Model
{

  /**
   */
  class PublishMetricsRequest : public MWAARequest
  {
  public:
    AWS_MWAA_API PublishMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PublishMetrics"; }

    AWS_MWAA_API Aws::String SerializePayload() const override;


    /**
     * <p> <b>Internal only</b>. The name of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p> <b>Internal only</b>. The name of the environment.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p> <b>Internal only</b>. The name of the environment.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p> <b>Internal only</b>. The name of the environment.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p> <b>Internal only</b>. The name of the environment.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p> <b>Internal only</b>. The name of the environment.</p>
     */
    inline PublishMetricsRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p> <b>Internal only</b>. The name of the environment.</p>
     */
    inline PublishMetricsRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p> <b>Internal only</b>. The name of the environment.</p>
     */
    inline PublishMetricsRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p> <b>Internal only</b>. Publishes metrics to Amazon CloudWatch. To learn more
     * about the metrics published to Amazon CloudWatch, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/cw-metrics.html">Amazon
     * MWAA performance metrics in Amazon CloudWatch</a>.</p>
     */
    inline const Aws::Vector<MetricDatum>& GetMetricData() const{ return m_metricData; }

    /**
     * <p> <b>Internal only</b>. Publishes metrics to Amazon CloudWatch. To learn more
     * about the metrics published to Amazon CloudWatch, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/cw-metrics.html">Amazon
     * MWAA performance metrics in Amazon CloudWatch</a>.</p>
     */
    inline bool MetricDataHasBeenSet() const { return m_metricDataHasBeenSet; }

    /**
     * <p> <b>Internal only</b>. Publishes metrics to Amazon CloudWatch. To learn more
     * about the metrics published to Amazon CloudWatch, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/cw-metrics.html">Amazon
     * MWAA performance metrics in Amazon CloudWatch</a>.</p>
     */
    inline void SetMetricData(const Aws::Vector<MetricDatum>& value) { m_metricDataHasBeenSet = true; m_metricData = value; }

    /**
     * <p> <b>Internal only</b>. Publishes metrics to Amazon CloudWatch. To learn more
     * about the metrics published to Amazon CloudWatch, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/cw-metrics.html">Amazon
     * MWAA performance metrics in Amazon CloudWatch</a>.</p>
     */
    inline void SetMetricData(Aws::Vector<MetricDatum>&& value) { m_metricDataHasBeenSet = true; m_metricData = std::move(value); }

    /**
     * <p> <b>Internal only</b>. Publishes metrics to Amazon CloudWatch. To learn more
     * about the metrics published to Amazon CloudWatch, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/cw-metrics.html">Amazon
     * MWAA performance metrics in Amazon CloudWatch</a>.</p>
     */
    inline PublishMetricsRequest& WithMetricData(const Aws::Vector<MetricDatum>& value) { SetMetricData(value); return *this;}

    /**
     * <p> <b>Internal only</b>. Publishes metrics to Amazon CloudWatch. To learn more
     * about the metrics published to Amazon CloudWatch, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/cw-metrics.html">Amazon
     * MWAA performance metrics in Amazon CloudWatch</a>.</p>
     */
    inline PublishMetricsRequest& WithMetricData(Aws::Vector<MetricDatum>&& value) { SetMetricData(std::move(value)); return *this;}

    /**
     * <p> <b>Internal only</b>. Publishes metrics to Amazon CloudWatch. To learn more
     * about the metrics published to Amazon CloudWatch, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/cw-metrics.html">Amazon
     * MWAA performance metrics in Amazon CloudWatch</a>.</p>
     */
    inline PublishMetricsRequest& AddMetricData(const MetricDatum& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(value); return *this; }

    /**
     * <p> <b>Internal only</b>. Publishes metrics to Amazon CloudWatch. To learn more
     * about the metrics published to Amazon CloudWatch, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/cw-metrics.html">Amazon
     * MWAA performance metrics in Amazon CloudWatch</a>.</p>
     */
    inline PublishMetricsRequest& AddMetricData(MetricDatum&& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::Vector<MetricDatum> m_metricData;
    bool m_metricDataHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
