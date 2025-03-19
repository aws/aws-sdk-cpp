/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/S3LogDestinationParameters.h>
#include <aws/pipes/model/FirehoseLogDestinationParameters.h>
#include <aws/pipes/model/CloudwatchLogsLogDestinationParameters.h>
#include <aws/pipes/model/LogLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pipes/model/IncludeExecutionDataOption.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>Specifies the logging configuration settings for the pipe.</p> <p>When you
   * call <code>UpdatePipe</code>, EventBridge updates the fields in the
   * <code>PipeLogConfigurationParameters</code> object atomically as one and
   * overrides existing values. This is by design. If you don't specify an optional
   * field in any of the Amazon Web Services service parameters objects
   * (<code>CloudwatchLogsLogDestinationParameters</code>,
   * <code>FirehoseLogDestinationParameters</code>, or
   * <code>S3LogDestinationParameters</code>), EventBridge sets that field to its
   * system-default value during the update. </p> <p>For example, suppose when you
   * created the pipe you specified a Firehose stream log destination. You then
   * update the pipe to add an Amazon S3 log destination. In addition to specifying
   * the <code>S3LogDestinationParameters</code> for the new log destination, you
   * must also specify the fields in the
   * <code>FirehoseLogDestinationParameters</code> object in order to retain the
   * Firehose stream log destination. </p> <p>For more information on generating pipe
   * log records, see <a href="eventbridge/latest/userguide/eb-pipes-logs.html">Log
   * EventBridge Pipes</a> in the <i>Amazon EventBridge User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeLogConfigurationParameters">AWS
   * API Reference</a></p>
   */
  class PipeLogConfigurationParameters
  {
  public:
    AWS_PIPES_API PipeLogConfigurationParameters() = default;
    AWS_PIPES_API PipeLogConfigurationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeLogConfigurationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 logging configuration settings for the pipe.</p>
     */
    inline const S3LogDestinationParameters& GetS3LogDestination() const { return m_s3LogDestination; }
    inline bool S3LogDestinationHasBeenSet() const { return m_s3LogDestinationHasBeenSet; }
    template<typename S3LogDestinationT = S3LogDestinationParameters>
    void SetS3LogDestination(S3LogDestinationT&& value) { m_s3LogDestinationHasBeenSet = true; m_s3LogDestination = std::forward<S3LogDestinationT>(value); }
    template<typename S3LogDestinationT = S3LogDestinationParameters>
    PipeLogConfigurationParameters& WithS3LogDestination(S3LogDestinationT&& value) { SetS3LogDestination(std::forward<S3LogDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Data Firehose logging configuration settings for the pipe.</p>
     */
    inline const FirehoseLogDestinationParameters& GetFirehoseLogDestination() const { return m_firehoseLogDestination; }
    inline bool FirehoseLogDestinationHasBeenSet() const { return m_firehoseLogDestinationHasBeenSet; }
    template<typename FirehoseLogDestinationT = FirehoseLogDestinationParameters>
    void SetFirehoseLogDestination(FirehoseLogDestinationT&& value) { m_firehoseLogDestinationHasBeenSet = true; m_firehoseLogDestination = std::forward<FirehoseLogDestinationT>(value); }
    template<typename FirehoseLogDestinationT = FirehoseLogDestinationParameters>
    PipeLogConfigurationParameters& WithFirehoseLogDestination(FirehoseLogDestinationT&& value) { SetFirehoseLogDestination(std::forward<FirehoseLogDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch Logs logging configuration settings for the pipe.</p>
     */
    inline const CloudwatchLogsLogDestinationParameters& GetCloudwatchLogsLogDestination() const { return m_cloudwatchLogsLogDestination; }
    inline bool CloudwatchLogsLogDestinationHasBeenSet() const { return m_cloudwatchLogsLogDestinationHasBeenSet; }
    template<typename CloudwatchLogsLogDestinationT = CloudwatchLogsLogDestinationParameters>
    void SetCloudwatchLogsLogDestination(CloudwatchLogsLogDestinationT&& value) { m_cloudwatchLogsLogDestinationHasBeenSet = true; m_cloudwatchLogsLogDestination = std::forward<CloudwatchLogsLogDestinationT>(value); }
    template<typename CloudwatchLogsLogDestinationT = CloudwatchLogsLogDestinationParameters>
    PipeLogConfigurationParameters& WithCloudwatchLogsLogDestination(CloudwatchLogsLogDestinationT&& value) { SetCloudwatchLogsLogDestination(std::forward<CloudwatchLogsLogDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of logging detail to include. This applies to all log destinations
     * for the pipe.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-logs.html#eb-pipes-logs-level">Specifying
     * EventBridge Pipes log level</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline LogLevel GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(LogLevel value) { m_levelHasBeenSet = true; m_level = value; }
    inline PipeLogConfigurationParameters& WithLevel(LogLevel value) { SetLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify <code>ALL</code> to include the execution data (specifically, the
     * <code>payload</code>, <code>awsRequest</code>, and <code>awsResponse</code>
     * fields) in the log messages for this pipe.</p> <p>This applies to all log
     * destinations for the pipe.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-logs.html#eb-pipes-logs-execution-data">Including
     * execution data in logs</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     * <p>By default, execution data is not included.</p>
     */
    inline const Aws::Vector<IncludeExecutionDataOption>& GetIncludeExecutionData() const { return m_includeExecutionData; }
    inline bool IncludeExecutionDataHasBeenSet() const { return m_includeExecutionDataHasBeenSet; }
    template<typename IncludeExecutionDataT = Aws::Vector<IncludeExecutionDataOption>>
    void SetIncludeExecutionData(IncludeExecutionDataT&& value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData = std::forward<IncludeExecutionDataT>(value); }
    template<typename IncludeExecutionDataT = Aws::Vector<IncludeExecutionDataOption>>
    PipeLogConfigurationParameters& WithIncludeExecutionData(IncludeExecutionDataT&& value) { SetIncludeExecutionData(std::forward<IncludeExecutionDataT>(value)); return *this;}
    inline PipeLogConfigurationParameters& AddIncludeExecutionData(IncludeExecutionDataOption value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData.push_back(value); return *this; }
    ///@}
  private:

    S3LogDestinationParameters m_s3LogDestination;
    bool m_s3LogDestinationHasBeenSet = false;

    FirehoseLogDestinationParameters m_firehoseLogDestination;
    bool m_firehoseLogDestinationHasBeenSet = false;

    CloudwatchLogsLogDestinationParameters m_cloudwatchLogsLogDestination;
    bool m_cloudwatchLogsLogDestinationHasBeenSet = false;

    LogLevel m_level{LogLevel::NOT_SET};
    bool m_levelHasBeenSet = false;

    Aws::Vector<IncludeExecutionDataOption> m_includeExecutionData;
    bool m_includeExecutionDataHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
