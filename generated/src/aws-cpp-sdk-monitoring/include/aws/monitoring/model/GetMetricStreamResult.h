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
    AWS_CLOUDWATCH_API GetMetricStreamResult();
    AWS_CLOUDWATCH_API GetMetricStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API GetMetricStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline GetMetricStreamResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline GetMetricStreamResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline GetMetricStreamResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the metric stream.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the metric stream.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the metric stream.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the metric stream.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the metric stream.</p>
     */
    inline GetMetricStreamResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the metric stream.</p>
     */
    inline GetMetricStreamResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric stream.</p>
     */
    inline GetMetricStreamResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are streamed by this metric stream.</p>
     */
    inline const Aws::Vector<MetricStreamFilter>& GetIncludeFilters() const{ return m_includeFilters; }

    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are streamed by this metric stream.</p>
     */
    inline void SetIncludeFilters(const Aws::Vector<MetricStreamFilter>& value) { m_includeFilters = value; }

    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are streamed by this metric stream.</p>
     */
    inline void SetIncludeFilters(Aws::Vector<MetricStreamFilter>&& value) { m_includeFilters = std::move(value); }

    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are streamed by this metric stream.</p>
     */
    inline GetMetricStreamResult& WithIncludeFilters(const Aws::Vector<MetricStreamFilter>& value) { SetIncludeFilters(value); return *this;}

    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are streamed by this metric stream.</p>
     */
    inline GetMetricStreamResult& WithIncludeFilters(Aws::Vector<MetricStreamFilter>&& value) { SetIncludeFilters(std::move(value)); return *this;}

    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are streamed by this metric stream.</p>
     */
    inline GetMetricStreamResult& AddIncludeFilters(const MetricStreamFilter& value) { m_includeFilters.push_back(value); return *this; }

    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are streamed by this metric stream.</p>
     */
    inline GetMetricStreamResult& AddIncludeFilters(MetricStreamFilter&& value) { m_includeFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are not streamed by this metric stream. In this
     * case, all other metric namespaces in the account are streamed by this metric
     * stream.</p>
     */
    inline const Aws::Vector<MetricStreamFilter>& GetExcludeFilters() const{ return m_excludeFilters; }

    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are not streamed by this metric stream. In this
     * case, all other metric namespaces in the account are streamed by this metric
     * stream.</p>
     */
    inline void SetExcludeFilters(const Aws::Vector<MetricStreamFilter>& value) { m_excludeFilters = value; }

    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are not streamed by this metric stream. In this
     * case, all other metric namespaces in the account are streamed by this metric
     * stream.</p>
     */
    inline void SetExcludeFilters(Aws::Vector<MetricStreamFilter>&& value) { m_excludeFilters = std::move(value); }

    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are not streamed by this metric stream. In this
     * case, all other metric namespaces in the account are streamed by this metric
     * stream.</p>
     */
    inline GetMetricStreamResult& WithExcludeFilters(const Aws::Vector<MetricStreamFilter>& value) { SetExcludeFilters(value); return *this;}

    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are not streamed by this metric stream. In this
     * case, all other metric namespaces in the account are streamed by this metric
     * stream.</p>
     */
    inline GetMetricStreamResult& WithExcludeFilters(Aws::Vector<MetricStreamFilter>&& value) { SetExcludeFilters(std::move(value)); return *this;}

    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are not streamed by this metric stream. In this
     * case, all other metric namespaces in the account are streamed by this metric
     * stream.</p>
     */
    inline GetMetricStreamResult& AddExcludeFilters(const MetricStreamFilter& value) { m_excludeFilters.push_back(value); return *this; }

    /**
     * <p>If this array of metric namespaces is present, then these namespaces are the
     * only metric namespaces that are not streamed by this metric stream. In this
     * case, all other metric namespaces in the account are streamed by this metric
     * stream.</p>
     */
    inline GetMetricStreamResult& AddExcludeFilters(MetricStreamFilter&& value) { m_excludeFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the Amazon Kinesis Data Firehose delivery stream that is used by
     * this metric stream.</p>
     */
    inline const Aws::String& GetFirehoseArn() const{ return m_firehoseArn; }

    /**
     * <p>The ARN of the Amazon Kinesis Data Firehose delivery stream that is used by
     * this metric stream.</p>
     */
    inline void SetFirehoseArn(const Aws::String& value) { m_firehoseArn = value; }

    /**
     * <p>The ARN of the Amazon Kinesis Data Firehose delivery stream that is used by
     * this metric stream.</p>
     */
    inline void SetFirehoseArn(Aws::String&& value) { m_firehoseArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon Kinesis Data Firehose delivery stream that is used by
     * this metric stream.</p>
     */
    inline void SetFirehoseArn(const char* value) { m_firehoseArn.assign(value); }

    /**
     * <p>The ARN of the Amazon Kinesis Data Firehose delivery stream that is used by
     * this metric stream.</p>
     */
    inline GetMetricStreamResult& WithFirehoseArn(const Aws::String& value) { SetFirehoseArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon Kinesis Data Firehose delivery stream that is used by
     * this metric stream.</p>
     */
    inline GetMetricStreamResult& WithFirehoseArn(Aws::String&& value) { SetFirehoseArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Kinesis Data Firehose delivery stream that is used by
     * this metric stream.</p>
     */
    inline GetMetricStreamResult& WithFirehoseArn(const char* value) { SetFirehoseArn(value); return *this;}


    /**
     * <p>The ARN of the IAM role that is used by this metric stream.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that is used by this metric stream.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that is used by this metric stream.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that is used by this metric stream.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that is used by this metric stream.</p>
     */
    inline GetMetricStreamResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that is used by this metric stream.</p>
     */
    inline GetMetricStreamResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that is used by this metric stream.</p>
     */
    inline GetMetricStreamResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The state of the metric stream. The possible values are <code>running</code>
     * and <code>stopped</code>.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the metric stream. The possible values are <code>running</code>
     * and <code>stopped</code>.</p>
     */
    inline void SetState(const Aws::String& value) { m_state = value; }

    /**
     * <p>The state of the metric stream. The possible values are <code>running</code>
     * and <code>stopped</code>.</p>
     */
    inline void SetState(Aws::String&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the metric stream. The possible values are <code>running</code>
     * and <code>stopped</code>.</p>
     */
    inline void SetState(const char* value) { m_state.assign(value); }

    /**
     * <p>The state of the metric stream. The possible values are <code>running</code>
     * and <code>stopped</code>.</p>
     */
    inline GetMetricStreamResult& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the metric stream. The possible values are <code>running</code>
     * and <code>stopped</code>.</p>
     */
    inline GetMetricStreamResult& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the metric stream. The possible values are <code>running</code>
     * and <code>stopped</code>.</p>
     */
    inline GetMetricStreamResult& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The date that the metric stream was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date that the metric stream was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date that the metric stream was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date that the metric stream was created.</p>
     */
    inline GetMetricStreamResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date that the metric stream was created.</p>
     */
    inline GetMetricStreamResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date of the most recent update to the metric stream's configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const{ return m_lastUpdateDate; }

    /**
     * <p>The date of the most recent update to the metric stream's configuration.</p>
     */
    inline void SetLastUpdateDate(const Aws::Utils::DateTime& value) { m_lastUpdateDate = value; }

    /**
     * <p>The date of the most recent update to the metric stream's configuration.</p>
     */
    inline void SetLastUpdateDate(Aws::Utils::DateTime&& value) { m_lastUpdateDate = std::move(value); }

    /**
     * <p>The date of the most recent update to the metric stream's configuration.</p>
     */
    inline GetMetricStreamResult& WithLastUpdateDate(const Aws::Utils::DateTime& value) { SetLastUpdateDate(value); return *this;}

    /**
     * <p>The date of the most recent update to the metric stream's configuration.</p>
     */
    inline GetMetricStreamResult& WithLastUpdateDate(Aws::Utils::DateTime&& value) { SetLastUpdateDate(std::move(value)); return *this;}


    /**
     * <p>The output format for the stream. Valid values are <code>json</code>,
     * <code>opentelemetry1.0</code>, and <code>opentelemetry0.7</code>. For more
     * information about metric stream output formats, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-metric-streams-formats.html">Metric
     * streams output formats</a>.</p>
     */
    inline const MetricStreamOutputFormat& GetOutputFormat() const{ return m_outputFormat; }

    /**
     * <p>The output format for the stream. Valid values are <code>json</code>,
     * <code>opentelemetry1.0</code>, and <code>opentelemetry0.7</code>. For more
     * information about metric stream output formats, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-metric-streams-formats.html">Metric
     * streams output formats</a>.</p>
     */
    inline void SetOutputFormat(const MetricStreamOutputFormat& value) { m_outputFormat = value; }

    /**
     * <p>The output format for the stream. Valid values are <code>json</code>,
     * <code>opentelemetry1.0</code>, and <code>opentelemetry0.7</code>. For more
     * information about metric stream output formats, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-metric-streams-formats.html">Metric
     * streams output formats</a>.</p>
     */
    inline void SetOutputFormat(MetricStreamOutputFormat&& value) { m_outputFormat = std::move(value); }

    /**
     * <p>The output format for the stream. Valid values are <code>json</code>,
     * <code>opentelemetry1.0</code>, and <code>opentelemetry0.7</code>. For more
     * information about metric stream output formats, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-metric-streams-formats.html">Metric
     * streams output formats</a>.</p>
     */
    inline GetMetricStreamResult& WithOutputFormat(const MetricStreamOutputFormat& value) { SetOutputFormat(value); return *this;}

    /**
     * <p>The output format for the stream. Valid values are <code>json</code>,
     * <code>opentelemetry1.0</code>, and <code>opentelemetry0.7</code>. For more
     * information about metric stream output formats, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-metric-streams-formats.html">Metric
     * streams output formats</a>.</p>
     */
    inline GetMetricStreamResult& WithOutputFormat(MetricStreamOutputFormat&& value) { SetOutputFormat(std::move(value)); return *this;}


    /**
     * <p>Each entry in this array displays information about one or more metrics that
     * include additional statistics in the metric stream. For more information about
     * the additional statistics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Statistics-definitions.html.html">
     * CloudWatch statistics definitions</a>. </p>
     */
    inline const Aws::Vector<MetricStreamStatisticsConfiguration>& GetStatisticsConfigurations() const{ return m_statisticsConfigurations; }

    /**
     * <p>Each entry in this array displays information about one or more metrics that
     * include additional statistics in the metric stream. For more information about
     * the additional statistics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Statistics-definitions.html.html">
     * CloudWatch statistics definitions</a>. </p>
     */
    inline void SetStatisticsConfigurations(const Aws::Vector<MetricStreamStatisticsConfiguration>& value) { m_statisticsConfigurations = value; }

    /**
     * <p>Each entry in this array displays information about one or more metrics that
     * include additional statistics in the metric stream. For more information about
     * the additional statistics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Statistics-definitions.html.html">
     * CloudWatch statistics definitions</a>. </p>
     */
    inline void SetStatisticsConfigurations(Aws::Vector<MetricStreamStatisticsConfiguration>&& value) { m_statisticsConfigurations = std::move(value); }

    /**
     * <p>Each entry in this array displays information about one or more metrics that
     * include additional statistics in the metric stream. For more information about
     * the additional statistics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Statistics-definitions.html.html">
     * CloudWatch statistics definitions</a>. </p>
     */
    inline GetMetricStreamResult& WithStatisticsConfigurations(const Aws::Vector<MetricStreamStatisticsConfiguration>& value) { SetStatisticsConfigurations(value); return *this;}

    /**
     * <p>Each entry in this array displays information about one or more metrics that
     * include additional statistics in the metric stream. For more information about
     * the additional statistics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Statistics-definitions.html.html">
     * CloudWatch statistics definitions</a>. </p>
     */
    inline GetMetricStreamResult& WithStatisticsConfigurations(Aws::Vector<MetricStreamStatisticsConfiguration>&& value) { SetStatisticsConfigurations(std::move(value)); return *this;}

    /**
     * <p>Each entry in this array displays information about one or more metrics that
     * include additional statistics in the metric stream. For more information about
     * the additional statistics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Statistics-definitions.html.html">
     * CloudWatch statistics definitions</a>. </p>
     */
    inline GetMetricStreamResult& AddStatisticsConfigurations(const MetricStreamStatisticsConfiguration& value) { m_statisticsConfigurations.push_back(value); return *this; }

    /**
     * <p>Each entry in this array displays information about one or more metrics that
     * include additional statistics in the metric stream. For more information about
     * the additional statistics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Statistics-definitions.html.html">
     * CloudWatch statistics definitions</a>. </p>
     */
    inline GetMetricStreamResult& AddStatisticsConfigurations(MetricStreamStatisticsConfiguration&& value) { m_statisticsConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>If this is <code>true</code> and this metric stream is in a monitoring
     * account, then the stream includes metrics from source accounts that the
     * monitoring account is linked to.</p>
     */
    inline bool GetIncludeLinkedAccountsMetrics() const{ return m_includeLinkedAccountsMetrics; }

    /**
     * <p>If this is <code>true</code> and this metric stream is in a monitoring
     * account, then the stream includes metrics from source accounts that the
     * monitoring account is linked to.</p>
     */
    inline void SetIncludeLinkedAccountsMetrics(bool value) { m_includeLinkedAccountsMetrics = value; }

    /**
     * <p>If this is <code>true</code> and this metric stream is in a monitoring
     * account, then the stream includes metrics from source accounts that the
     * monitoring account is linked to.</p>
     */
    inline GetMetricStreamResult& WithIncludeLinkedAccountsMetrics(bool value) { SetIncludeLinkedAccountsMetrics(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetMetricStreamResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetMetricStreamResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::Vector<MetricStreamFilter> m_includeFilters;

    Aws::Vector<MetricStreamFilter> m_excludeFilters;

    Aws::String m_firehoseArn;

    Aws::String m_roleArn;

    Aws::String m_state;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastUpdateDate;

    MetricStreamOutputFormat m_outputFormat;

    Aws::Vector<MetricStreamStatisticsConfiguration> m_statisticsConfigurations;

    bool m_includeLinkedAccountsMetrics;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
