/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/Dimension.h>
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
   * <p>Designates the CloudWatch metric and statistic that provides the time series
   * the anomaly detector uses as input. If you have enabled unified cross-account
   * observability, and this account is a monitoring account, the metric can be in
   * the same account or a source account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/SingleMetricAnomalyDetector">AWS
   * API Reference</a></p>
   */
  class SingleMetricAnomalyDetector
  {
  public:
    AWS_CLOUDWATCH_API SingleMetricAnomalyDetector();
    AWS_CLOUDWATCH_API SingleMetricAnomalyDetector(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API SingleMetricAnomalyDetector& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>If the CloudWatch metric that provides the time series that the anomaly
     * detector uses as input is in another account, specify that account ID here. If
     * you omit this parameter, the current account is used.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>If the CloudWatch metric that provides the time series that the anomaly
     * detector uses as input is in another account, specify that account ID here. If
     * you omit this parameter, the current account is used.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>If the CloudWatch metric that provides the time series that the anomaly
     * detector uses as input is in another account, specify that account ID here. If
     * you omit this parameter, the current account is used.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>If the CloudWatch metric that provides the time series that the anomaly
     * detector uses as input is in another account, specify that account ID here. If
     * you omit this parameter, the current account is used.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>If the CloudWatch metric that provides the time series that the anomaly
     * detector uses as input is in another account, specify that account ID here. If
     * you omit this parameter, the current account is used.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>If the CloudWatch metric that provides the time series that the anomaly
     * detector uses as input is in another account, specify that account ID here. If
     * you omit this parameter, the current account is used.</p>
     */
    inline SingleMetricAnomalyDetector& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>If the CloudWatch metric that provides the time series that the anomaly
     * detector uses as input is in another account, specify that account ID here. If
     * you omit this parameter, the current account is used.</p>
     */
    inline SingleMetricAnomalyDetector& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>If the CloudWatch metric that provides the time series that the anomaly
     * detector uses as input is in another account, specify that account ID here. If
     * you omit this parameter, the current account is used.</p>
     */
    inline SingleMetricAnomalyDetector& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline SingleMetricAnomalyDetector& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline SingleMetricAnomalyDetector& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline SingleMetricAnomalyDetector& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline SingleMetricAnomalyDetector& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline SingleMetricAnomalyDetector& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline SingleMetricAnomalyDetector& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline SingleMetricAnomalyDetector& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline SingleMetricAnomalyDetector& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline SingleMetricAnomalyDetector& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline SingleMetricAnomalyDetector& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>The statistic to use for the metric and anomaly detection model.</p>
     */
    inline const Aws::String& GetStat() const{ return m_stat; }

    /**
     * <p>The statistic to use for the metric and anomaly detection model.</p>
     */
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }

    /**
     * <p>The statistic to use for the metric and anomaly detection model.</p>
     */
    inline void SetStat(const Aws::String& value) { m_statHasBeenSet = true; m_stat = value; }

    /**
     * <p>The statistic to use for the metric and anomaly detection model.</p>
     */
    inline void SetStat(Aws::String&& value) { m_statHasBeenSet = true; m_stat = std::move(value); }

    /**
     * <p>The statistic to use for the metric and anomaly detection model.</p>
     */
    inline void SetStat(const char* value) { m_statHasBeenSet = true; m_stat.assign(value); }

    /**
     * <p>The statistic to use for the metric and anomaly detection model.</p>
     */
    inline SingleMetricAnomalyDetector& WithStat(const Aws::String& value) { SetStat(value); return *this;}

    /**
     * <p>The statistic to use for the metric and anomaly detection model.</p>
     */
    inline SingleMetricAnomalyDetector& WithStat(Aws::String&& value) { SetStat(std::move(value)); return *this;}

    /**
     * <p>The statistic to use for the metric and anomaly detection model.</p>
     */
    inline SingleMetricAnomalyDetector& WithStat(const char* value) { SetStat(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::String m_stat;
    bool m_statHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
