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
    AWS_CLOUDWATCH_API PutAnomalyDetectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAnomalyDetector"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude when training and updating the
     * model. You can specify as many as 10 time ranges.</p> <p>The configuration can
     * also include the time zone to use for the metric.</p>
     */
    inline const AnomalyDetectorConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = AnomalyDetectorConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = AnomalyDetectorConfiguration>
    PutAnomalyDetectorRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this object to include parameters to provide information about your
     * metric to CloudWatch to help it build more accurate anomaly detection models.
     * Currently, it includes the <code>PeriodicSpikes</code> parameter.</p>
     */
    inline const MetricCharacteristics& GetMetricCharacteristics() const { return m_metricCharacteristics; }
    inline bool MetricCharacteristicsHasBeenSet() const { return m_metricCharacteristicsHasBeenSet; }
    template<typename MetricCharacteristicsT = MetricCharacteristics>
    void SetMetricCharacteristics(MetricCharacteristicsT&& value) { m_metricCharacteristicsHasBeenSet = true; m_metricCharacteristics = std::forward<MetricCharacteristicsT>(value); }
    template<typename MetricCharacteristicsT = MetricCharacteristics>
    PutAnomalyDetectorRequest& WithMetricCharacteristics(MetricCharacteristicsT&& value) { SetMetricCharacteristics(std::forward<MetricCharacteristicsT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const SingleMetricAnomalyDetector& GetSingleMetricAnomalyDetector() const { return m_singleMetricAnomalyDetector; }
    inline bool SingleMetricAnomalyDetectorHasBeenSet() const { return m_singleMetricAnomalyDetectorHasBeenSet; }
    template<typename SingleMetricAnomalyDetectorT = SingleMetricAnomalyDetector>
    void SetSingleMetricAnomalyDetector(SingleMetricAnomalyDetectorT&& value) { m_singleMetricAnomalyDetectorHasBeenSet = true; m_singleMetricAnomalyDetector = std::forward<SingleMetricAnomalyDetectorT>(value); }
    template<typename SingleMetricAnomalyDetectorT = SingleMetricAnomalyDetector>
    PutAnomalyDetectorRequest& WithSingleMetricAnomalyDetector(SingleMetricAnomalyDetectorT&& value) { SetSingleMetricAnomalyDetector(std::forward<SingleMetricAnomalyDetectorT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const MetricMathAnomalyDetector& GetMetricMathAnomalyDetector() const { return m_metricMathAnomalyDetector; }
    inline bool MetricMathAnomalyDetectorHasBeenSet() const { return m_metricMathAnomalyDetectorHasBeenSet; }
    template<typename MetricMathAnomalyDetectorT = MetricMathAnomalyDetector>
    void SetMetricMathAnomalyDetector(MetricMathAnomalyDetectorT&& value) { m_metricMathAnomalyDetectorHasBeenSet = true; m_metricMathAnomalyDetector = std::forward<MetricMathAnomalyDetectorT>(value); }
    template<typename MetricMathAnomalyDetectorT = MetricMathAnomalyDetector>
    PutAnomalyDetectorRequest& WithMetricMathAnomalyDetector(MetricMathAnomalyDetectorT&& value) { SetMetricMathAnomalyDetector(std::forward<MetricMathAnomalyDetectorT>(value)); return *this;}
    ///@}
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
