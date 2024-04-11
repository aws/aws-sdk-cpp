/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/monitoring/model/AnomalyDetectorConfiguration.h>
#include <aws/monitoring/model/AnomalyDetectorStateValue.h>
#include <aws/monitoring/model/MetricCharacteristics.h>
#include <aws/monitoring/model/SingleMetricAnomalyDetector.h>
#include <aws/monitoring/model/MetricMathAnomalyDetector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>An anomaly detection model associated with a particular CloudWatch metric,
   * statistic, or metric math expression. You can use the model to display a band of
   * expected, normal values when the metric is graphed.</p> <p>If you have enabled
   * unified cross-account observability, and this account is a monitoring account,
   * the metric can be in the same account or a source account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/AnomalyDetector">AWS
   * API Reference</a></p>
   */
  class AnomalyDetector
  {
  public:
    AWS_CLOUDWATCH_API AnomalyDetector();
    AWS_CLOUDWATCH_API AnomalyDetector(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API AnomalyDetector& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude from use for training the model,
     * and the time zone to use for the metric.</p>
     */
    inline const AnomalyDetectorConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude from use for training the model,
     * and the time zone to use for the metric.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude from use for training the model,
     * and the time zone to use for the metric.</p>
     */
    inline void SetConfiguration(const AnomalyDetectorConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude from use for training the model,
     * and the time zone to use for the metric.</p>
     */
    inline void SetConfiguration(AnomalyDetectorConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude from use for training the model,
     * and the time zone to use for the metric.</p>
     */
    inline AnomalyDetector& WithConfiguration(const AnomalyDetectorConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude from use for training the model,
     * and the time zone to use for the metric.</p>
     */
    inline AnomalyDetector& WithConfiguration(AnomalyDetectorConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The current status of the anomaly detector's training.</p>
     */
    inline const AnomalyDetectorStateValue& GetStateValue() const{ return m_stateValue; }

    /**
     * <p>The current status of the anomaly detector's training.</p>
     */
    inline bool StateValueHasBeenSet() const { return m_stateValueHasBeenSet; }

    /**
     * <p>The current status of the anomaly detector's training.</p>
     */
    inline void SetStateValue(const AnomalyDetectorStateValue& value) { m_stateValueHasBeenSet = true; m_stateValue = value; }

    /**
     * <p>The current status of the anomaly detector's training.</p>
     */
    inline void SetStateValue(AnomalyDetectorStateValue&& value) { m_stateValueHasBeenSet = true; m_stateValue = std::move(value); }

    /**
     * <p>The current status of the anomaly detector's training.</p>
     */
    inline AnomalyDetector& WithStateValue(const AnomalyDetectorStateValue& value) { SetStateValue(value); return *this;}

    /**
     * <p>The current status of the anomaly detector's training.</p>
     */
    inline AnomalyDetector& WithStateValue(AnomalyDetectorStateValue&& value) { SetStateValue(std::move(value)); return *this;}


    /**
     * <p>This object includes parameters that you can use to provide information about
     * your metric to CloudWatch to help it build more accurate anomaly detection
     * models. Currently, it includes the <code>PeriodicSpikes</code> parameter.</p>
     */
    inline const MetricCharacteristics& GetMetricCharacteristics() const{ return m_metricCharacteristics; }

    /**
     * <p>This object includes parameters that you can use to provide information about
     * your metric to CloudWatch to help it build more accurate anomaly detection
     * models. Currently, it includes the <code>PeriodicSpikes</code> parameter.</p>
     */
    inline bool MetricCharacteristicsHasBeenSet() const { return m_metricCharacteristicsHasBeenSet; }

    /**
     * <p>This object includes parameters that you can use to provide information about
     * your metric to CloudWatch to help it build more accurate anomaly detection
     * models. Currently, it includes the <code>PeriodicSpikes</code> parameter.</p>
     */
    inline void SetMetricCharacteristics(const MetricCharacteristics& value) { m_metricCharacteristicsHasBeenSet = true; m_metricCharacteristics = value; }

    /**
     * <p>This object includes parameters that you can use to provide information about
     * your metric to CloudWatch to help it build more accurate anomaly detection
     * models. Currently, it includes the <code>PeriodicSpikes</code> parameter.</p>
     */
    inline void SetMetricCharacteristics(MetricCharacteristics&& value) { m_metricCharacteristicsHasBeenSet = true; m_metricCharacteristics = std::move(value); }

    /**
     * <p>This object includes parameters that you can use to provide information about
     * your metric to CloudWatch to help it build more accurate anomaly detection
     * models. Currently, it includes the <code>PeriodicSpikes</code> parameter.</p>
     */
    inline AnomalyDetector& WithMetricCharacteristics(const MetricCharacteristics& value) { SetMetricCharacteristics(value); return *this;}

    /**
     * <p>This object includes parameters that you can use to provide information about
     * your metric to CloudWatch to help it build more accurate anomaly detection
     * models. Currently, it includes the <code>PeriodicSpikes</code> parameter.</p>
     */
    inline AnomalyDetector& WithMetricCharacteristics(MetricCharacteristics&& value) { SetMetricCharacteristics(std::move(value)); return *this;}


    /**
     * <p>The CloudWatch metric and statistic for this anomaly detector.</p>
     */
    inline const SingleMetricAnomalyDetector& GetSingleMetricAnomalyDetector() const{ return m_singleMetricAnomalyDetector; }

    /**
     * <p>The CloudWatch metric and statistic for this anomaly detector.</p>
     */
    inline bool SingleMetricAnomalyDetectorHasBeenSet() const { return m_singleMetricAnomalyDetectorHasBeenSet; }

    /**
     * <p>The CloudWatch metric and statistic for this anomaly detector.</p>
     */
    inline void SetSingleMetricAnomalyDetector(const SingleMetricAnomalyDetector& value) { m_singleMetricAnomalyDetectorHasBeenSet = true; m_singleMetricAnomalyDetector = value; }

    /**
     * <p>The CloudWatch metric and statistic for this anomaly detector.</p>
     */
    inline void SetSingleMetricAnomalyDetector(SingleMetricAnomalyDetector&& value) { m_singleMetricAnomalyDetectorHasBeenSet = true; m_singleMetricAnomalyDetector = std::move(value); }

    /**
     * <p>The CloudWatch metric and statistic for this anomaly detector.</p>
     */
    inline AnomalyDetector& WithSingleMetricAnomalyDetector(const SingleMetricAnomalyDetector& value) { SetSingleMetricAnomalyDetector(value); return *this;}

    /**
     * <p>The CloudWatch metric and statistic for this anomaly detector.</p>
     */
    inline AnomalyDetector& WithSingleMetricAnomalyDetector(SingleMetricAnomalyDetector&& value) { SetSingleMetricAnomalyDetector(std::move(value)); return *this;}


    /**
     * <p>The CloudWatch metric math expression for this anomaly detector.</p>
     */
    inline const MetricMathAnomalyDetector& GetMetricMathAnomalyDetector() const{ return m_metricMathAnomalyDetector; }

    /**
     * <p>The CloudWatch metric math expression for this anomaly detector.</p>
     */
    inline bool MetricMathAnomalyDetectorHasBeenSet() const { return m_metricMathAnomalyDetectorHasBeenSet; }

    /**
     * <p>The CloudWatch metric math expression for this anomaly detector.</p>
     */
    inline void SetMetricMathAnomalyDetector(const MetricMathAnomalyDetector& value) { m_metricMathAnomalyDetectorHasBeenSet = true; m_metricMathAnomalyDetector = value; }

    /**
     * <p>The CloudWatch metric math expression for this anomaly detector.</p>
     */
    inline void SetMetricMathAnomalyDetector(MetricMathAnomalyDetector&& value) { m_metricMathAnomalyDetectorHasBeenSet = true; m_metricMathAnomalyDetector = std::move(value); }

    /**
     * <p>The CloudWatch metric math expression for this anomaly detector.</p>
     */
    inline AnomalyDetector& WithMetricMathAnomalyDetector(const MetricMathAnomalyDetector& value) { SetMetricMathAnomalyDetector(value); return *this;}

    /**
     * <p>The CloudWatch metric math expression for this anomaly detector.</p>
     */
    inline AnomalyDetector& WithMetricMathAnomalyDetector(MetricMathAnomalyDetector&& value) { SetMetricMathAnomalyDetector(std::move(value)); return *this;}

  private:

    AnomalyDetectorConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    AnomalyDetectorStateValue m_stateValue;
    bool m_stateValueHasBeenSet = false;

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
