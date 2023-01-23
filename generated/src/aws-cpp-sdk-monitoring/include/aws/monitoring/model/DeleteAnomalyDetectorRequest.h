/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/monitoring/model/SingleMetricAnomalyDetector.h>
#include <aws/monitoring/model/MetricMathAnomalyDetector.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class DeleteAnomalyDetectorRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API DeleteAnomalyDetectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAnomalyDetector"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A single metric anomaly detector to be deleted.</p> <p>When using
     * <code>SingleMetricAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code>,</p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>MetricMathAnomalyDetector</code> parameters of
     * <code>DeleteAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * single metric anomaly detector attributes as part of the
     * <code>SingleMetricAnomalyDetector</code> property.</p>
     */
    inline const SingleMetricAnomalyDetector& GetSingleMetricAnomalyDetector() const{ return m_singleMetricAnomalyDetector; }

    /**
     * <p>A single metric anomaly detector to be deleted.</p> <p>When using
     * <code>SingleMetricAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code>,</p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>MetricMathAnomalyDetector</code> parameters of
     * <code>DeleteAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * single metric anomaly detector attributes as part of the
     * <code>SingleMetricAnomalyDetector</code> property.</p>
     */
    inline bool SingleMetricAnomalyDetectorHasBeenSet() const { return m_singleMetricAnomalyDetectorHasBeenSet; }

    /**
     * <p>A single metric anomaly detector to be deleted.</p> <p>When using
     * <code>SingleMetricAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code>,</p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>MetricMathAnomalyDetector</code> parameters of
     * <code>DeleteAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * single metric anomaly detector attributes as part of the
     * <code>SingleMetricAnomalyDetector</code> property.</p>
     */
    inline void SetSingleMetricAnomalyDetector(const SingleMetricAnomalyDetector& value) { m_singleMetricAnomalyDetectorHasBeenSet = true; m_singleMetricAnomalyDetector = value; }

    /**
     * <p>A single metric anomaly detector to be deleted.</p> <p>When using
     * <code>SingleMetricAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code>,</p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>MetricMathAnomalyDetector</code> parameters of
     * <code>DeleteAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * single metric anomaly detector attributes as part of the
     * <code>SingleMetricAnomalyDetector</code> property.</p>
     */
    inline void SetSingleMetricAnomalyDetector(SingleMetricAnomalyDetector&& value) { m_singleMetricAnomalyDetectorHasBeenSet = true; m_singleMetricAnomalyDetector = std::move(value); }

    /**
     * <p>A single metric anomaly detector to be deleted.</p> <p>When using
     * <code>SingleMetricAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code>,</p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>MetricMathAnomalyDetector</code> parameters of
     * <code>DeleteAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * single metric anomaly detector attributes as part of the
     * <code>SingleMetricAnomalyDetector</code> property.</p>
     */
    inline DeleteAnomalyDetectorRequest& WithSingleMetricAnomalyDetector(const SingleMetricAnomalyDetector& value) { SetSingleMetricAnomalyDetector(value); return *this;}

    /**
     * <p>A single metric anomaly detector to be deleted.</p> <p>When using
     * <code>SingleMetricAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code>,</p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>MetricMathAnomalyDetector</code> parameters of
     * <code>DeleteAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * single metric anomaly detector attributes as part of the
     * <code>SingleMetricAnomalyDetector</code> property.</p>
     */
    inline DeleteAnomalyDetectorRequest& WithSingleMetricAnomalyDetector(SingleMetricAnomalyDetector&& value) { SetSingleMetricAnomalyDetector(std::move(value)); return *this;}


    /**
     * <p>The metric math anomaly detector to be deleted.</p> <p>When using
     * <code>MetricMathAnomalyDetector</code>, you cannot include following parameters
     * in the same operation:</p> <ul> <li> <p> <code>Dimensions</code>,</p> </li> <li>
     * <p> <code>MetricName</code> </p> </li> <li> <p> <code>Namespace</code> </p>
     * </li> <li> <p> <code>Stat</code> </p> </li> <li> <p>the
     * <code>SingleMetricAnomalyDetector</code> parameters of
     * <code>DeleteAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * metric math anomaly detector attributes as part of the
     * <code>MetricMathAnomalyDetector</code> property.</p>
     */
    inline const MetricMathAnomalyDetector& GetMetricMathAnomalyDetector() const{ return m_metricMathAnomalyDetector; }

    /**
     * <p>The metric math anomaly detector to be deleted.</p> <p>When using
     * <code>MetricMathAnomalyDetector</code>, you cannot include following parameters
     * in the same operation:</p> <ul> <li> <p> <code>Dimensions</code>,</p> </li> <li>
     * <p> <code>MetricName</code> </p> </li> <li> <p> <code>Namespace</code> </p>
     * </li> <li> <p> <code>Stat</code> </p> </li> <li> <p>the
     * <code>SingleMetricAnomalyDetector</code> parameters of
     * <code>DeleteAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * metric math anomaly detector attributes as part of the
     * <code>MetricMathAnomalyDetector</code> property.</p>
     */
    inline bool MetricMathAnomalyDetectorHasBeenSet() const { return m_metricMathAnomalyDetectorHasBeenSet; }

    /**
     * <p>The metric math anomaly detector to be deleted.</p> <p>When using
     * <code>MetricMathAnomalyDetector</code>, you cannot include following parameters
     * in the same operation:</p> <ul> <li> <p> <code>Dimensions</code>,</p> </li> <li>
     * <p> <code>MetricName</code> </p> </li> <li> <p> <code>Namespace</code> </p>
     * </li> <li> <p> <code>Stat</code> </p> </li> <li> <p>the
     * <code>SingleMetricAnomalyDetector</code> parameters of
     * <code>DeleteAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * metric math anomaly detector attributes as part of the
     * <code>MetricMathAnomalyDetector</code> property.</p>
     */
    inline void SetMetricMathAnomalyDetector(const MetricMathAnomalyDetector& value) { m_metricMathAnomalyDetectorHasBeenSet = true; m_metricMathAnomalyDetector = value; }

    /**
     * <p>The metric math anomaly detector to be deleted.</p> <p>When using
     * <code>MetricMathAnomalyDetector</code>, you cannot include following parameters
     * in the same operation:</p> <ul> <li> <p> <code>Dimensions</code>,</p> </li> <li>
     * <p> <code>MetricName</code> </p> </li> <li> <p> <code>Namespace</code> </p>
     * </li> <li> <p> <code>Stat</code> </p> </li> <li> <p>the
     * <code>SingleMetricAnomalyDetector</code> parameters of
     * <code>DeleteAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * metric math anomaly detector attributes as part of the
     * <code>MetricMathAnomalyDetector</code> property.</p>
     */
    inline void SetMetricMathAnomalyDetector(MetricMathAnomalyDetector&& value) { m_metricMathAnomalyDetectorHasBeenSet = true; m_metricMathAnomalyDetector = std::move(value); }

    /**
     * <p>The metric math anomaly detector to be deleted.</p> <p>When using
     * <code>MetricMathAnomalyDetector</code>, you cannot include following parameters
     * in the same operation:</p> <ul> <li> <p> <code>Dimensions</code>,</p> </li> <li>
     * <p> <code>MetricName</code> </p> </li> <li> <p> <code>Namespace</code> </p>
     * </li> <li> <p> <code>Stat</code> </p> </li> <li> <p>the
     * <code>SingleMetricAnomalyDetector</code> parameters of
     * <code>DeleteAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * metric math anomaly detector attributes as part of the
     * <code>MetricMathAnomalyDetector</code> property.</p>
     */
    inline DeleteAnomalyDetectorRequest& WithMetricMathAnomalyDetector(const MetricMathAnomalyDetector& value) { SetMetricMathAnomalyDetector(value); return *this;}

    /**
     * <p>The metric math anomaly detector to be deleted.</p> <p>When using
     * <code>MetricMathAnomalyDetector</code>, you cannot include following parameters
     * in the same operation:</p> <ul> <li> <p> <code>Dimensions</code>,</p> </li> <li>
     * <p> <code>MetricName</code> </p> </li> <li> <p> <code>Namespace</code> </p>
     * </li> <li> <p> <code>Stat</code> </p> </li> <li> <p>the
     * <code>SingleMetricAnomalyDetector</code> parameters of
     * <code>DeleteAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * metric math anomaly detector attributes as part of the
     * <code>MetricMathAnomalyDetector</code> property.</p>
     */
    inline DeleteAnomalyDetectorRequest& WithMetricMathAnomalyDetector(MetricMathAnomalyDetector&& value) { SetMetricMathAnomalyDetector(std::move(value)); return *this;}

  private:

    SingleMetricAnomalyDetector m_singleMetricAnomalyDetector;
    bool m_singleMetricAnomalyDetectorHasBeenSet = false;

    MetricMathAnomalyDetector m_metricMathAnomalyDetector;
    bool m_metricMathAnomalyDetectorHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
