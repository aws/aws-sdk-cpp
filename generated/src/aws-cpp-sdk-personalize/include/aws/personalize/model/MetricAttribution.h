/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/MetricAttributionOutput.h>
#include <aws/core/utils/DateTime.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Contains information on a metric attribution. A metric attribution creates
   * reports on the data that you import into Amazon Personalize. Depending on how
   * you import the data, you can view reports in Amazon CloudWatch or Amazon S3. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
   * impact of recommendations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/MetricAttribution">AWS
   * API Reference</a></p>
   */
  class MetricAttribution
  {
  public:
    AWS_PERSONALIZE_API MetricAttribution();
    AWS_PERSONALIZE_API MetricAttribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API MetricAttribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric attribution's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The metric attribution's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The metric attribution's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The metric attribution's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The metric attribution's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The metric attribution's name.</p>
     */
    inline MetricAttribution& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The metric attribution's name.</p>
     */
    inline MetricAttribution& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The metric attribution's name.</p>
     */
    inline MetricAttribution& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetMetricAttributionArn() const{ return m_metricAttributionArn; }

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline bool MetricAttributionArnHasBeenSet() const { return m_metricAttributionArnHasBeenSet; }

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline void SetMetricAttributionArn(const Aws::String& value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn = value; }

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline void SetMetricAttributionArn(Aws::String&& value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn = std::move(value); }

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline void SetMetricAttributionArn(const char* value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn.assign(value); }

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline MetricAttribution& WithMetricAttributionArn(const Aws::String& value) { SetMetricAttributionArn(value); return *this;}

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline MetricAttribution& WithMetricAttributionArn(Aws::String&& value) { SetMetricAttributionArn(std::move(value)); return *this;}

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline MetricAttribution& WithMetricAttributionArn(const char* value) { SetMetricAttributionArn(value); return *this;}


    /**
     * <p>The metric attribution's dataset group Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The metric attribution's dataset group Amazon Resource Name (ARN).</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The metric attribution's dataset group Amazon Resource Name (ARN).</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The metric attribution's dataset group Amazon Resource Name (ARN).</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The metric attribution's dataset group Amazon Resource Name (ARN).</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The metric attribution's dataset group Amazon Resource Name (ARN).</p>
     */
    inline MetricAttribution& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The metric attribution's dataset group Amazon Resource Name (ARN).</p>
     */
    inline MetricAttribution& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The metric attribution's dataset group Amazon Resource Name (ARN).</p>
     */
    inline MetricAttribution& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>The metric attribution's output configuration.</p>
     */
    inline const MetricAttributionOutput& GetMetricsOutputConfig() const{ return m_metricsOutputConfig; }

    /**
     * <p>The metric attribution's output configuration.</p>
     */
    inline bool MetricsOutputConfigHasBeenSet() const { return m_metricsOutputConfigHasBeenSet; }

    /**
     * <p>The metric attribution's output configuration.</p>
     */
    inline void SetMetricsOutputConfig(const MetricAttributionOutput& value) { m_metricsOutputConfigHasBeenSet = true; m_metricsOutputConfig = value; }

    /**
     * <p>The metric attribution's output configuration.</p>
     */
    inline void SetMetricsOutputConfig(MetricAttributionOutput&& value) { m_metricsOutputConfigHasBeenSet = true; m_metricsOutputConfig = std::move(value); }

    /**
     * <p>The metric attribution's output configuration.</p>
     */
    inline MetricAttribution& WithMetricsOutputConfig(const MetricAttributionOutput& value) { SetMetricsOutputConfig(value); return *this;}

    /**
     * <p>The metric attribution's output configuration.</p>
     */
    inline MetricAttribution& WithMetricsOutputConfig(MetricAttributionOutput&& value) { SetMetricsOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The metric attribution's status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The metric attribution's status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The metric attribution's status.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The metric attribution's status.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The metric attribution's status.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The metric attribution's status.</p>
     */
    inline MetricAttribution& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The metric attribution's status.</p>
     */
    inline MetricAttribution& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The metric attribution's status.</p>
     */
    inline MetricAttribution& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The metric attribution's creation date time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The metric attribution's creation date time.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The metric attribution's creation date time.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The metric attribution's creation date time.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The metric attribution's creation date time.</p>
     */
    inline MetricAttribution& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The metric attribution's creation date time.</p>
     */
    inline MetricAttribution& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The metric attribution's last updated date time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The metric attribution's last updated date time.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The metric attribution's last updated date time.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The metric attribution's last updated date time.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The metric attribution's last updated date time.</p>
     */
    inline MetricAttribution& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The metric attribution's last updated date time.</p>
     */
    inline MetricAttribution& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline MetricAttribution& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline MetricAttribution& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline MetricAttribution& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metricAttributionArn;
    bool m_metricAttributionArnHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    MetricAttributionOutput m_metricsOutputConfig;
    bool m_metricsOutputConfigHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
