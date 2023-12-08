/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/monitoring/model/MetricStreamOutputFormat.h>
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
   * <p>This structure contains the configuration information about one metric
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricStreamEntry">AWS
   * API Reference</a></p>
   */
  class MetricStreamEntry
  {
  public:
    AWS_CLOUDWATCH_API MetricStreamEntry();
    AWS_CLOUDWATCH_API MetricStreamEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API MetricStreamEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline MetricStreamEntry& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline MetricStreamEntry& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline MetricStreamEntry& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date that the metric stream was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date that the metric stream was originally created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date that the metric stream was originally created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date that the metric stream was originally created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date that the metric stream was originally created.</p>
     */
    inline MetricStreamEntry& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date that the metric stream was originally created.</p>
     */
    inline MetricStreamEntry& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date that the configuration of this metric stream was most recently
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const{ return m_lastUpdateDate; }

    /**
     * <p>The date that the configuration of this metric stream was most recently
     * updated.</p>
     */
    inline bool LastUpdateDateHasBeenSet() const { return m_lastUpdateDateHasBeenSet; }

    /**
     * <p>The date that the configuration of this metric stream was most recently
     * updated.</p>
     */
    inline void SetLastUpdateDate(const Aws::Utils::DateTime& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = value; }

    /**
     * <p>The date that the configuration of this metric stream was most recently
     * updated.</p>
     */
    inline void SetLastUpdateDate(Aws::Utils::DateTime&& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = std::move(value); }

    /**
     * <p>The date that the configuration of this metric stream was most recently
     * updated.</p>
     */
    inline MetricStreamEntry& WithLastUpdateDate(const Aws::Utils::DateTime& value) { SetLastUpdateDate(value); return *this;}

    /**
     * <p>The date that the configuration of this metric stream was most recently
     * updated.</p>
     */
    inline MetricStreamEntry& WithLastUpdateDate(Aws::Utils::DateTime&& value) { SetLastUpdateDate(std::move(value)); return *this;}


    /**
     * <p>The name of the metric stream.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the metric stream.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the metric stream.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the metric stream.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the metric stream.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the metric stream.</p>
     */
    inline MetricStreamEntry& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the metric stream.</p>
     */
    inline MetricStreamEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric stream.</p>
     */
    inline MetricStreamEntry& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the Kinesis Firehose devlivery stream that is used for this metric
     * stream.</p>
     */
    inline const Aws::String& GetFirehoseArn() const{ return m_firehoseArn; }

    /**
     * <p>The ARN of the Kinesis Firehose devlivery stream that is used for this metric
     * stream.</p>
     */
    inline bool FirehoseArnHasBeenSet() const { return m_firehoseArnHasBeenSet; }

    /**
     * <p>The ARN of the Kinesis Firehose devlivery stream that is used for this metric
     * stream.</p>
     */
    inline void SetFirehoseArn(const Aws::String& value) { m_firehoseArnHasBeenSet = true; m_firehoseArn = value; }

    /**
     * <p>The ARN of the Kinesis Firehose devlivery stream that is used for this metric
     * stream.</p>
     */
    inline void SetFirehoseArn(Aws::String&& value) { m_firehoseArnHasBeenSet = true; m_firehoseArn = std::move(value); }

    /**
     * <p>The ARN of the Kinesis Firehose devlivery stream that is used for this metric
     * stream.</p>
     */
    inline void SetFirehoseArn(const char* value) { m_firehoseArnHasBeenSet = true; m_firehoseArn.assign(value); }

    /**
     * <p>The ARN of the Kinesis Firehose devlivery stream that is used for this metric
     * stream.</p>
     */
    inline MetricStreamEntry& WithFirehoseArn(const Aws::String& value) { SetFirehoseArn(value); return *this;}

    /**
     * <p>The ARN of the Kinesis Firehose devlivery stream that is used for this metric
     * stream.</p>
     */
    inline MetricStreamEntry& WithFirehoseArn(Aws::String&& value) { SetFirehoseArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Kinesis Firehose devlivery stream that is used for this metric
     * stream.</p>
     */
    inline MetricStreamEntry& WithFirehoseArn(const char* value) { SetFirehoseArn(value); return *this;}


    /**
     * <p>The current state of this stream. Valid values are <code>running</code> and
     * <code>stopped</code>.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The current state of this stream. Valid values are <code>running</code> and
     * <code>stopped</code>.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of this stream. Valid values are <code>running</code> and
     * <code>stopped</code>.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of this stream. Valid values are <code>running</code> and
     * <code>stopped</code>.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of this stream. Valid values are <code>running</code> and
     * <code>stopped</code>.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The current state of this stream. Valid values are <code>running</code> and
     * <code>stopped</code>.</p>
     */
    inline MetricStreamEntry& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The current state of this stream. Valid values are <code>running</code> and
     * <code>stopped</code>.</p>
     */
    inline MetricStreamEntry& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The current state of this stream. Valid values are <code>running</code> and
     * <code>stopped</code>.</p>
     */
    inline MetricStreamEntry& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The output format of this metric stream. Valid values are <code>json</code>,
     * <code>opentelemetry1.0</code>, and <code>opentelemetry0.7</code>.</p>
     */
    inline const MetricStreamOutputFormat& GetOutputFormat() const{ return m_outputFormat; }

    /**
     * <p>The output format of this metric stream. Valid values are <code>json</code>,
     * <code>opentelemetry1.0</code>, and <code>opentelemetry0.7</code>.</p>
     */
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }

    /**
     * <p>The output format of this metric stream. Valid values are <code>json</code>,
     * <code>opentelemetry1.0</code>, and <code>opentelemetry0.7</code>.</p>
     */
    inline void SetOutputFormat(const MetricStreamOutputFormat& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }

    /**
     * <p>The output format of this metric stream. Valid values are <code>json</code>,
     * <code>opentelemetry1.0</code>, and <code>opentelemetry0.7</code>.</p>
     */
    inline void SetOutputFormat(MetricStreamOutputFormat&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }

    /**
     * <p>The output format of this metric stream. Valid values are <code>json</code>,
     * <code>opentelemetry1.0</code>, and <code>opentelemetry0.7</code>.</p>
     */
    inline MetricStreamEntry& WithOutputFormat(const MetricStreamOutputFormat& value) { SetOutputFormat(value); return *this;}

    /**
     * <p>The output format of this metric stream. Valid values are <code>json</code>,
     * <code>opentelemetry1.0</code>, and <code>opentelemetry0.7</code>.</p>
     */
    inline MetricStreamEntry& WithOutputFormat(MetricStreamOutputFormat&& value) { SetOutputFormat(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateDate;
    bool m_lastUpdateDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_firehoseArn;
    bool m_firehoseArnHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    MetricStreamOutputFormat m_outputFormat;
    bool m_outputFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
