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
    AWS_PERSONALIZE_API MetricAttribution() = default;
    AWS_PERSONALIZE_API MetricAttribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API MetricAttribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric attribution's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MetricAttribution& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetMetricAttributionArn() const { return m_metricAttributionArn; }
    inline bool MetricAttributionArnHasBeenSet() const { return m_metricAttributionArnHasBeenSet; }
    template<typename MetricAttributionArnT = Aws::String>
    void SetMetricAttributionArn(MetricAttributionArnT&& value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn = std::forward<MetricAttributionArnT>(value); }
    template<typename MetricAttributionArnT = Aws::String>
    MetricAttribution& WithMetricAttributionArn(MetricAttributionArnT&& value) { SetMetricAttributionArn(std::forward<MetricAttributionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric attribution's dataset group Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const { return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    template<typename DatasetGroupArnT = Aws::String>
    void SetDatasetGroupArn(DatasetGroupArnT&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::forward<DatasetGroupArnT>(value); }
    template<typename DatasetGroupArnT = Aws::String>
    MetricAttribution& WithDatasetGroupArn(DatasetGroupArnT&& value) { SetDatasetGroupArn(std::forward<DatasetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric attribution's output configuration.</p>
     */
    inline const MetricAttributionOutput& GetMetricsOutputConfig() const { return m_metricsOutputConfig; }
    inline bool MetricsOutputConfigHasBeenSet() const { return m_metricsOutputConfigHasBeenSet; }
    template<typename MetricsOutputConfigT = MetricAttributionOutput>
    void SetMetricsOutputConfig(MetricsOutputConfigT&& value) { m_metricsOutputConfigHasBeenSet = true; m_metricsOutputConfig = std::forward<MetricsOutputConfigT>(value); }
    template<typename MetricsOutputConfigT = MetricAttributionOutput>
    MetricAttribution& WithMetricsOutputConfig(MetricsOutputConfigT&& value) { SetMetricsOutputConfig(std::forward<MetricsOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric attribution's status.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    MetricAttribution& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric attribution's creation date time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    MetricAttribution& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric attribution's last updated date time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    MetricAttribution& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric attribution's failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    MetricAttribution& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}
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

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
