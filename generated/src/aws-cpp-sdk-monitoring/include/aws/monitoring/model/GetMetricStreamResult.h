/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/monitoring/model/MetricStreamOutputFormat.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/MetricStreamFilter.h>
#include <aws/monitoring/model/MetricStreamStatisticsConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{
  class GetMetricStreamResult
  {
  public:
    AWS_CLOUDWATCH_API GetMetricStreamResult() = default;
    AWS_CLOUDWATCH_API GetMetricStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API GetMetricStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetMetricStreamResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric stream.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetMetricStreamResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are streamed by this metric stream.</p>
     */
    inline const Aws::Vector<MetricStreamFilter>& GetIncludeFilters() const { return m_includeFilters; }
    template<typename IncludeFiltersT = Aws::Vector<MetricStreamFilter>>
    void SetIncludeFilters(IncludeFiltersT&& value) { m_includeFiltersHasBeenSet = true; m_includeFilters = std::forward<IncludeFiltersT>(value); }
    template<typename IncludeFiltersT = Aws::Vector<MetricStreamFilter>>
    GetMetricStreamResult& WithIncludeFilters(IncludeFiltersT&& value) { SetIncludeFilters(std::forward<IncludeFiltersT>(value)); return *this;}
    template<typename IncludeFiltersT = MetricStreamFilter>
    GetMetricStreamResult& AddIncludeFilters(IncludeFiltersT&& value) { m_includeFiltersHasBeenSet = true; m_includeFilters.emplace_back(std::forward<IncludeFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are not streamed by this metric stream. In this
     * case, all other metric namespaces in the account are streamed by this metric
     * stream.</p>
     */
    inline const Aws::Vector<MetricStreamFilter>& GetExcludeFilters() const { return m_excludeFilters; }
    template<typename ExcludeFiltersT = Aws::Vector<MetricStreamFilter>>
    void SetExcludeFilters(ExcludeFiltersT&& value) { m_excludeFiltersHasBeenSet = true; m_excludeFilters = std::forward<ExcludeFiltersT>(value); }
    template<typename ExcludeFiltersT = Aws::Vector<MetricStreamFilter>>
    GetMetricStreamResult& WithExcludeFilters(ExcludeFiltersT&& value) { SetExcludeFilters(std::forward<ExcludeFiltersT>(value)); return *this;}
    template<typename ExcludeFiltersT = MetricStreamFilter>
    GetMetricStreamResult& AddExcludeFilters(ExcludeFiltersT&& value) { m_excludeFiltersHasBeenSet = true; m_excludeFilters.emplace_back(std::forward<ExcludeFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Kinesis Data Firehose delivery stream that is used by
     * this metric stream.</p>
     */
    inline const Aws::String& GetFirehoseArn() const { return m_firehoseArn; }
    template<typename FirehoseArnT = Aws::String>
    void SetFirehoseArn(FirehoseArnT&& value) { m_firehoseArnHasBeenSet = true; m_firehoseArn = std::forward<FirehoseArnT>(value); }
    template<typename FirehoseArnT = Aws::String>
    GetMetricStreamResult& WithFirehoseArn(FirehoseArnT&& value) { SetFirehoseArn(std::forward<FirehoseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that is used by this metric stream.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetMetricStreamResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the metric stream. The possible values are <code>running</code>
     * and <code>stopped</code>.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    GetMetricStreamResult& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the metric stream was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    GetMetricStreamResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of the most recent update to the metric stream's configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const { return m_lastUpdateDate; }
    template<typename LastUpdateDateT = Aws::Utils::DateTime>
    void SetLastUpdateDate(LastUpdateDateT&& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = std::forward<LastUpdateDateT>(value); }
    template<typename LastUpdateDateT = Aws::Utils::DateTime>
    GetMetricStreamResult& WithLastUpdateDate(LastUpdateDateT&& value) { SetLastUpdateDate(std::forward<LastUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output format for the stream. Valid values are <code>json</code>,
     * <code>opentelemetry1.0</code>, and <code>opentelemetry0.7</code>. For more
     * information about metric stream output formats, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-metric-streams-formats.html">Metric
     * streams output formats</a>.</p>
     */
    inline MetricStreamOutputFormat GetOutputFormat() const { return m_outputFormat; }
    inline void SetOutputFormat(MetricStreamOutputFormat value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline GetMetricStreamResult& WithOutputFormat(MetricStreamOutputFormat value) { SetOutputFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each entry in this array displays information about one or more metrics that
     * include additional statistics in the metric stream. For more information about
     * the additional statistics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Statistics-definitions.html.html">
     * CloudWatch statistics definitions</a>. </p>
     */
    inline const Aws::Vector<MetricStreamStatisticsConfiguration>& GetStatisticsConfigurations() const { return m_statisticsConfigurations; }
    template<typename StatisticsConfigurationsT = Aws::Vector<MetricStreamStatisticsConfiguration>>
    void SetStatisticsConfigurations(StatisticsConfigurationsT&& value) { m_statisticsConfigurationsHasBeenSet = true; m_statisticsConfigurations = std::forward<StatisticsConfigurationsT>(value); }
    template<typename StatisticsConfigurationsT = Aws::Vector<MetricStreamStatisticsConfiguration>>
    GetMetricStreamResult& WithStatisticsConfigurations(StatisticsConfigurationsT&& value) { SetStatisticsConfigurations(std::forward<StatisticsConfigurationsT>(value)); return *this;}
    template<typename StatisticsConfigurationsT = MetricStreamStatisticsConfiguration>
    GetMetricStreamResult& AddStatisticsConfigurations(StatisticsConfigurationsT&& value) { m_statisticsConfigurationsHasBeenSet = true; m_statisticsConfigurations.emplace_back(std::forward<StatisticsConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If this is <code>true</code> and this metric stream is in a monitoring
     * account, then the stream includes metrics from source accounts that the
     * monitoring account is linked to.</p>
     */
    inline bool GetIncludeLinkedAccountsMetrics() const { return m_includeLinkedAccountsMetrics; }
    inline void SetIncludeLinkedAccountsMetrics(bool value) { m_includeLinkedAccountsMetricsHasBeenSet = true; m_includeLinkedAccountsMetrics = value; }
    inline GetMetricStreamResult& WithIncludeLinkedAccountsMetrics(bool value) { SetIncludeLinkedAccountsMetrics(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetMetricStreamResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<MetricStreamFilter> m_includeFilters;
    bool m_includeFiltersHasBeenSet = false;

    Aws::Vector<MetricStreamFilter> m_excludeFilters;
    bool m_excludeFiltersHasBeenSet = false;

    Aws::String m_firehoseArn;
    bool m_firehoseArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateDate{};
    bool m_lastUpdateDateHasBeenSet = false;

    MetricStreamOutputFormat m_outputFormat{MetricStreamOutputFormat::NOT_SET};
    bool m_outputFormatHasBeenSet = false;

    Aws::Vector<MetricStreamStatisticsConfiguration> m_statisticsConfigurations;
    bool m_statisticsConfigurationsHasBeenSet = false;

    bool m_includeLinkedAccountsMetrics{false};
    bool m_includeLinkedAccountsMetricsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
