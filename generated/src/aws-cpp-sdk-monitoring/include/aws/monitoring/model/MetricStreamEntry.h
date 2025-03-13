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
    AWS_CLOUDWATCH_API MetricStreamEntry() = default;
    AWS_CLOUDWATCH_API MetricStreamEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API MetricStreamEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN of the metric stream.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    MetricStreamEntry& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the metric stream was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    MetricStreamEntry& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the configuration of this metric stream was most recently
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const { return m_lastUpdateDate; }
    inline bool LastUpdateDateHasBeenSet() const { return m_lastUpdateDateHasBeenSet; }
    template<typename LastUpdateDateT = Aws::Utils::DateTime>
    void SetLastUpdateDate(LastUpdateDateT&& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = std::forward<LastUpdateDateT>(value); }
    template<typename LastUpdateDateT = Aws::Utils::DateTime>
    MetricStreamEntry& WithLastUpdateDate(LastUpdateDateT&& value) { SetLastUpdateDate(std::forward<LastUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric stream.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MetricStreamEntry& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Kinesis Firehose devlivery stream that is used for this metric
     * stream.</p>
     */
    inline const Aws::String& GetFirehoseArn() const { return m_firehoseArn; }
    inline bool FirehoseArnHasBeenSet() const { return m_firehoseArnHasBeenSet; }
    template<typename FirehoseArnT = Aws::String>
    void SetFirehoseArn(FirehoseArnT&& value) { m_firehoseArnHasBeenSet = true; m_firehoseArn = std::forward<FirehoseArnT>(value); }
    template<typename FirehoseArnT = Aws::String>
    MetricStreamEntry& WithFirehoseArn(FirehoseArnT&& value) { SetFirehoseArn(std::forward<FirehoseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of this stream. Valid values are <code>running</code> and
     * <code>stopped</code>.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    MetricStreamEntry& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output format of this metric stream. Valid values are <code>json</code>,
     * <code>opentelemetry1.0</code>, and <code>opentelemetry0.7</code>.</p>
     */
    inline MetricStreamOutputFormat GetOutputFormat() const { return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(MetricStreamOutputFormat value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline MetricStreamEntry& WithOutputFormat(MetricStreamOutputFormat value) { SetOutputFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateDate{};
    bool m_lastUpdateDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_firehoseArn;
    bool m_firehoseArnHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    MetricStreamOutputFormat m_outputFormat{MetricStreamOutputFormat::NOT_SET};
    bool m_outputFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
