/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/MetricStreamOutputFormat.h>
#include <aws/monitoring/model/MetricStreamFilter.h>
#include <aws/monitoring/model/Tag.h>
#include <aws/monitoring/model/MetricStreamStatisticsConfiguration.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class PutMetricStreamRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API PutMetricStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMetricStream"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>If you are creating a new metric stream, this is the name for the new stream.
     * The name must be different than the names of other metric streams in this
     * account and Region.</p> <p>If you are updating a metric stream, specify the name
     * of that stream here.</p> <p>Valid characters are A-Z, a-z, 0-9, "-" and "_".</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PutMetricStreamRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutMetricStreamRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutMetricStreamRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specify this parameter, the stream sends only the metrics from the
     * metric namespaces that you specify here.</p> <p>You cannot include
     * <code>IncludeFilters</code> and <code>ExcludeFilters</code> in the same
     * operation.</p>
     */
    inline const Aws::Vector<MetricStreamFilter>& GetIncludeFilters() const{ return m_includeFilters; }
    inline bool IncludeFiltersHasBeenSet() const { return m_includeFiltersHasBeenSet; }
    inline void SetIncludeFilters(const Aws::Vector<MetricStreamFilter>& value) { m_includeFiltersHasBeenSet = true; m_includeFilters = value; }
    inline void SetIncludeFilters(Aws::Vector<MetricStreamFilter>&& value) { m_includeFiltersHasBeenSet = true; m_includeFilters = std::move(value); }
    inline PutMetricStreamRequest& WithIncludeFilters(const Aws::Vector<MetricStreamFilter>& value) { SetIncludeFilters(value); return *this;}
    inline PutMetricStreamRequest& WithIncludeFilters(Aws::Vector<MetricStreamFilter>&& value) { SetIncludeFilters(std::move(value)); return *this;}
    inline PutMetricStreamRequest& AddIncludeFilters(const MetricStreamFilter& value) { m_includeFiltersHasBeenSet = true; m_includeFilters.push_back(value); return *this; }
    inline PutMetricStreamRequest& AddIncludeFilters(MetricStreamFilter&& value) { m_includeFiltersHasBeenSet = true; m_includeFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you specify this parameter, the stream sends metrics from all metric
     * namespaces except for the namespaces that you specify here.</p> <p>You cannot
     * include <code>ExcludeFilters</code> and <code>IncludeFilters</code> in the same
     * operation.</p>
     */
    inline const Aws::Vector<MetricStreamFilter>& GetExcludeFilters() const{ return m_excludeFilters; }
    inline bool ExcludeFiltersHasBeenSet() const { return m_excludeFiltersHasBeenSet; }
    inline void SetExcludeFilters(const Aws::Vector<MetricStreamFilter>& value) { m_excludeFiltersHasBeenSet = true; m_excludeFilters = value; }
    inline void SetExcludeFilters(Aws::Vector<MetricStreamFilter>&& value) { m_excludeFiltersHasBeenSet = true; m_excludeFilters = std::move(value); }
    inline PutMetricStreamRequest& WithExcludeFilters(const Aws::Vector<MetricStreamFilter>& value) { SetExcludeFilters(value); return *this;}
    inline PutMetricStreamRequest& WithExcludeFilters(Aws::Vector<MetricStreamFilter>&& value) { SetExcludeFilters(std::move(value)); return *this;}
    inline PutMetricStreamRequest& AddExcludeFilters(const MetricStreamFilter& value) { m_excludeFiltersHasBeenSet = true; m_excludeFilters.push_back(value); return *this; }
    inline PutMetricStreamRequest& AddExcludeFilters(MetricStreamFilter&& value) { m_excludeFiltersHasBeenSet = true; m_excludeFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Kinesis Data Firehose delivery stream to use for this
     * metric stream. This Amazon Kinesis Data Firehose delivery stream must already
     * exist and must be in the same account as the metric stream.</p>
     */
    inline const Aws::String& GetFirehoseArn() const{ return m_firehoseArn; }
    inline bool FirehoseArnHasBeenSet() const { return m_firehoseArnHasBeenSet; }
    inline void SetFirehoseArn(const Aws::String& value) { m_firehoseArnHasBeenSet = true; m_firehoseArn = value; }
    inline void SetFirehoseArn(Aws::String&& value) { m_firehoseArnHasBeenSet = true; m_firehoseArn = std::move(value); }
    inline void SetFirehoseArn(const char* value) { m_firehoseArnHasBeenSet = true; m_firehoseArn.assign(value); }
    inline PutMetricStreamRequest& WithFirehoseArn(const Aws::String& value) { SetFirehoseArn(value); return *this;}
    inline PutMetricStreamRequest& WithFirehoseArn(Aws::String&& value) { SetFirehoseArn(std::move(value)); return *this;}
    inline PutMetricStreamRequest& WithFirehoseArn(const char* value) { SetFirehoseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an IAM role that this metric stream will use to access Amazon
     * Kinesis Data Firehose resources. This IAM role must already exist and must be in
     * the same account as the metric stream. This IAM role must include the following
     * permissions:</p> <ul> <li> <p>firehose:PutRecord</p> </li> <li>
     * <p>firehose:PutRecordBatch</p> </li> </ul>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline PutMetricStreamRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline PutMetricStreamRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline PutMetricStreamRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output format for the stream. Valid values are <code>json</code>,
     * <code>opentelemetry1.0</code>, and <code>opentelemetry0.7</code>. For more
     * information about metric stream output formats, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-metric-streams-formats.html">
     * Metric streams output formats</a>.</p>
     */
    inline const MetricStreamOutputFormat& GetOutputFormat() const{ return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(const MetricStreamOutputFormat& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline void SetOutputFormat(MetricStreamOutputFormat&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }
    inline PutMetricStreamRequest& WithOutputFormat(const MetricStreamOutputFormat& value) { SetOutputFormat(value); return *this;}
    inline PutMetricStreamRequest& WithOutputFormat(MetricStreamOutputFormat&& value) { SetOutputFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs to associate with the metric stream. You can
     * associate as many as 50 tags with a metric stream.</p> <p>Tags can help you
     * organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>You can use this parameter only when you are
     * creating a new metric stream. If you are using this operation to update an
     * existing metric stream, any tags you specify in this parameter are ignored. To
     * change the tags of an existing metric stream, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_TagResource.html">TagResource</a>
     * or <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_UntagResource.html">UntagResource</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PutMetricStreamRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline PutMetricStreamRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline PutMetricStreamRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline PutMetricStreamRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>By default, a metric stream always sends the <code>MAX</code>,
     * <code>MIN</code>, <code>SUM</code>, and <code>SAMPLECOUNT</code> statistics for
     * each metric that is streamed. You can use this parameter to have the metric
     * stream also send additional statistics in the stream. This array can have up to
     * 100 members.</p> <p>For each entry in this array, you specify one or more
     * metrics and the list of additional statistics to stream for those metrics. The
     * additional statistics that you can stream depend on the stream's
     * <code>OutputFormat</code>. If the <code>OutputFormat</code> is
     * <code>json</code>, you can stream any additional statistic that is supported by
     * CloudWatch, listed in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Statistics-definitions.html.html">
     * CloudWatch statistics definitions</a>. If the <code>OutputFormat</code> is
     * <code>opentelemetry1.0</code> or <code>opentelemetry0.7</code>, you can stream
     * percentile statistics such as p95, p99.9, and so on.</p>
     */
    inline const Aws::Vector<MetricStreamStatisticsConfiguration>& GetStatisticsConfigurations() const{ return m_statisticsConfigurations; }
    inline bool StatisticsConfigurationsHasBeenSet() const { return m_statisticsConfigurationsHasBeenSet; }
    inline void SetStatisticsConfigurations(const Aws::Vector<MetricStreamStatisticsConfiguration>& value) { m_statisticsConfigurationsHasBeenSet = true; m_statisticsConfigurations = value; }
    inline void SetStatisticsConfigurations(Aws::Vector<MetricStreamStatisticsConfiguration>&& value) { m_statisticsConfigurationsHasBeenSet = true; m_statisticsConfigurations = std::move(value); }
    inline PutMetricStreamRequest& WithStatisticsConfigurations(const Aws::Vector<MetricStreamStatisticsConfiguration>& value) { SetStatisticsConfigurations(value); return *this;}
    inline PutMetricStreamRequest& WithStatisticsConfigurations(Aws::Vector<MetricStreamStatisticsConfiguration>&& value) { SetStatisticsConfigurations(std::move(value)); return *this;}
    inline PutMetricStreamRequest& AddStatisticsConfigurations(const MetricStreamStatisticsConfiguration& value) { m_statisticsConfigurationsHasBeenSet = true; m_statisticsConfigurations.push_back(value); return *this; }
    inline PutMetricStreamRequest& AddStatisticsConfigurations(MetricStreamStatisticsConfiguration&& value) { m_statisticsConfigurationsHasBeenSet = true; m_statisticsConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you are creating a metric stream in a monitoring account, specify
     * <code>true</code> to include metrics from source accounts in the metric
     * stream.</p>
     */
    inline bool GetIncludeLinkedAccountsMetrics() const{ return m_includeLinkedAccountsMetrics; }
    inline bool IncludeLinkedAccountsMetricsHasBeenSet() const { return m_includeLinkedAccountsMetricsHasBeenSet; }
    inline void SetIncludeLinkedAccountsMetrics(bool value) { m_includeLinkedAccountsMetricsHasBeenSet = true; m_includeLinkedAccountsMetrics = value; }
    inline PutMetricStreamRequest& WithIncludeLinkedAccountsMetrics(bool value) { SetIncludeLinkedAccountsMetrics(value); return *this;}
    ///@}
  private:

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

    MetricStreamOutputFormat m_outputFormat;
    bool m_outputFormatHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<MetricStreamStatisticsConfiguration> m_statisticsConfigurations;
    bool m_statisticsConfigurationsHasBeenSet = false;

    bool m_includeLinkedAccountsMetrics;
    bool m_includeLinkedAccountsMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
