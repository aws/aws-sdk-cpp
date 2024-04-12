/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/monitoring/model/AnomalyDetectorConfiguration.h>
#include <aws/monitoring/model/MetricCharacteristics.h>
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
  class PutAnomalyDetectorRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API PutAnomalyDetectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAnomalyDetector"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude when training and updating the
     * model. You can specify as many as 10 time ranges.</p> <p>The configuration can
     * also include the time zone to use for the metric.</p>
     */
    inline const AnomalyDetectorConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude when training and updating the
     * model. You can specify as many as 10 time ranges.</p> <p>The configuration can
     * also include the time zone to use for the metric.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude when training and updating the
     * model. You can specify as many as 10 time ranges.</p> <p>The configuration can
     * also include the time zone to use for the metric.</p>
     */
    inline void SetConfiguration(const AnomalyDetectorConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude when training and updating the
     * model. You can specify as many as 10 time ranges.</p> <p>The configuration can
     * also include the time zone to use for the metric.</p>
     */
    inline void SetConfiguration(AnomalyDetectorConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude when training and updating the
     * model. You can specify as many as 10 time ranges.</p> <p>The configuration can
     * also include the time zone to use for the metric.</p>
     */
    inline PutAnomalyDetectorRequest& WithConfiguration(const AnomalyDetectorConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude when training and updating the
     * model. You can specify as many as 10 time ranges.</p> <p>The configuration can
     * also include the time zone to use for the metric.</p>
     */
    inline PutAnomalyDetectorRequest& WithConfiguration(AnomalyDetectorConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>Use this object to include parameters to provide information about your
     * metric to CloudWatch to help it build more accurate anomaly detection models.
     * Currently, it includes the <code>PeriodicSpikes</code> parameter.</p>
     */
    inline const MetricCharacteristics& GetMetricCharacteristics() const{ return m_metricCharacteristics; }

    /**
     * <p>Use this object to include parameters to provide information about your
     * metric to CloudWatch to help it build more accurate anomaly detection models.
     * Currently, it includes the <code>PeriodicSpikes</code> parameter.</p>
     */
    inline bool MetricCharacteristicsHasBeenSet() const { return m_metricCharacteristicsHasBeenSet; }

    /**
     * <p>Use this object to include parameters to provide information about your
     * metric to CloudWatch to help it build more accurate anomaly detection models.
     * Currently, it includes the <code>PeriodicSpikes</code> parameter.</p>
     */
    inline void SetMetricCharacteristics(const MetricCharacteristics& value) { m_metricCharacteristicsHasBeenSet = true; m_metricCharacteristics = value; }

    /**
     * <p>Use this object to include parameters to provide information about your
     * metric to CloudWatch to help it build more accurate anomaly detection models.
     * Currently, it includes the <code>PeriodicSpikes</code> parameter.</p>
     */
    inline void SetMetricCharacteristics(MetricCharacteristics&& value) { m_metricCharacteristicsHasBeenSet = true; m_metricCharacteristics = std::move(value); }

    /**
     * <p>Use this object to include parameters to provide information about your
     * metric to CloudWatch to help it build more accurate anomaly detection models.
     * Currently, it includes the <code>PeriodicSpikes</code> parameter.</p>
     */
    inline PutAnomalyDetectorRequest& WithMetricCharacteristics(const MetricCharacteristics& value) { SetMetricCharacteristics(value); return *this;}

    /**
     * <p>Use this object to include parameters to provide information about your
     * metric to CloudWatch to help it build more accurate anomaly detection models.
     * Currently, it includes the <code>PeriodicSpikes</code> parameter.</p>
     */
    inline PutAnomalyDetectorRequest& WithMetricCharacteristics(MetricCharacteristics&& value) { SetMetricCharacteristics(std::move(value)); return *this;}


    /**
     * <p>A single metric anomaly detector to be created.</p> <p>When using
     * <code>SingleMetricAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code> </p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>MetricMathAnomalyDetector</code> parameters of
     * <code>PutAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * single metric anomaly detector attributes as part of the property
     * <code>SingleMetricAnomalyDetector</code>.</p>
     */
    inline const SingleMetricAnomalyDetector& GetSingleMetricAnomalyDetector() const{ return m_singleMetricAnomalyDetector; }

    /**
     * <p>A single metric anomaly detector to be created.</p> <p>When using
     * <code>SingleMetricAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code> </p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>MetricMathAnomalyDetector</code> parameters of
     * <code>PutAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * single metric anomaly detector attributes as part of the property
     * <code>SingleMetricAnomalyDetector</code>.</p>
     */
    inline bool SingleMetricAnomalyDetectorHasBeenSet() const { return m_singleMetricAnomalyDetectorHasBeenSet; }

    /**
     * <p>A single metric anomaly detector to be created.</p> <p>When using
     * <code>SingleMetricAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code> </p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>MetricMathAnomalyDetector</code> parameters of
     * <code>PutAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * single metric anomaly detector attributes as part of the property
     * <code>SingleMetricAnomalyDetector</code>.</p>
     */
    inline void SetSingleMetricAnomalyDetector(const SingleMetricAnomalyDetector& value) { m_singleMetricAnomalyDetectorHasBeenSet = true; m_singleMetricAnomalyDetector = value; }

    /**
     * <p>A single metric anomaly detector to be created.</p> <p>When using
     * <code>SingleMetricAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code> </p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>MetricMathAnomalyDetector</code> parameters of
     * <code>PutAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * single metric anomaly detector attributes as part of the property
     * <code>SingleMetricAnomalyDetector</code>.</p>
     */
    inline void SetSingleMetricAnomalyDetector(SingleMetricAnomalyDetector&& value) { m_singleMetricAnomalyDetectorHasBeenSet = true; m_singleMetricAnomalyDetector = std::move(value); }

    /**
     * <p>A single metric anomaly detector to be created.</p> <p>When using
     * <code>SingleMetricAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code> </p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>MetricMathAnomalyDetector</code> parameters of
     * <code>PutAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * single metric anomaly detector attributes as part of the property
     * <code>SingleMetricAnomalyDetector</code>.</p>
     */
    inline PutAnomalyDetectorRequest& WithSingleMetricAnomalyDetector(const SingleMetricAnomalyDetector& value) { SetSingleMetricAnomalyDetector(value); return *this;}

    /**
     * <p>A single metric anomaly detector to be created.</p> <p>When using
     * <code>SingleMetricAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code> </p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>MetricMathAnomalyDetector</code> parameters of
     * <code>PutAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * single metric anomaly detector attributes as part of the property
     * <code>SingleMetricAnomalyDetector</code>.</p>
     */
    inline PutAnomalyDetectorRequest& WithSingleMetricAnomalyDetector(SingleMetricAnomalyDetector&& value) { SetSingleMetricAnomalyDetector(std::move(value)); return *this;}


    /**
     * <p>The metric math anomaly detector to be created.</p> <p>When using
     * <code>MetricMathAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code> </p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>SingleMetricAnomalyDetector</code> parameters of
     * <code>PutAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * metric math anomaly detector attributes as part of the property
     * <code>MetricMathAnomalyDetector</code>.</p>
     */
    inline const MetricMathAnomalyDetector& GetMetricMathAnomalyDetector() const{ return m_metricMathAnomalyDetector; }

    /**
     * <p>The metric math anomaly detector to be created.</p> <p>When using
     * <code>MetricMathAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code> </p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>SingleMetricAnomalyDetector</code> parameters of
     * <code>PutAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * metric math anomaly detector attributes as part of the property
     * <code>MetricMathAnomalyDetector</code>.</p>
     */
    inline bool MetricMathAnomalyDetectorHasBeenSet() const { return m_metricMathAnomalyDetectorHasBeenSet; }

    /**
     * <p>The metric math anomaly detector to be created.</p> <p>When using
     * <code>MetricMathAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code> </p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>SingleMetricAnomalyDetector</code> parameters of
     * <code>PutAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * metric math anomaly detector attributes as part of the property
     * <code>MetricMathAnomalyDetector</code>.</p>
     */
    inline void SetMetricMathAnomalyDetector(const MetricMathAnomalyDetector& value) { m_metricMathAnomalyDetectorHasBeenSet = true; m_metricMathAnomalyDetector = value; }

    /**
     * <p>The metric math anomaly detector to be created.</p> <p>When using
     * <code>MetricMathAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code> </p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>SingleMetricAnomalyDetector</code> parameters of
     * <code>PutAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * metric math anomaly detector attributes as part of the property
     * <code>MetricMathAnomalyDetector</code>.</p>
     */
    inline void SetMetricMathAnomalyDetector(MetricMathAnomalyDetector&& value) { m_metricMathAnomalyDetectorHasBeenSet = true; m_metricMathAnomalyDetector = std::move(value); }

    /**
     * <p>The metric math anomaly detector to be created.</p> <p>When using
     * <code>MetricMathAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code> </p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>SingleMetricAnomalyDetector</code> parameters of
     * <code>PutAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * metric math anomaly detector attributes as part of the property
     * <code>MetricMathAnomalyDetector</code>.</p>
     */
    inline PutAnomalyDetectorRequest& WithMetricMathAnomalyDetector(const MetricMathAnomalyDetector& value) { SetMetricMathAnomalyDetector(value); return *this;}

    /**
     * <p>The metric math anomaly detector to be created.</p> <p>When using
     * <code>MetricMathAnomalyDetector</code>, you cannot include the following
     * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code> </p>
     * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
     * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
     * <p>the <code>SingleMetricAnomalyDetector</code> parameters of
     * <code>PutAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
     * metric math anomaly detector attributes as part of the property
     * <code>MetricMathAnomalyDetector</code>.</p>
     */
    inline PutAnomalyDetectorRequest& WithMetricMathAnomalyDetector(MetricMathAnomalyDetector&& value) { SetMetricMathAnomalyDetector(std::move(value)); return *this;}

  private:

    AnomalyDetectorConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    MetricCharacteristics m_metricCharacteristics;
    bool m_metricCharacteristicsHasBeenSet = false;

    SingleMetricAnomalyDetector m_singleMetricAnomalyDetector;
    bool m_singleMetricAnomalyDetectorHasBeenSet = false;

    MetricMathAnomalyDetector m_metricMathAnomalyDetector;
    bool m_metricMathAnomalyDetectorHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
