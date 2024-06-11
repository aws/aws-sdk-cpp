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
    AWS_PIPES_API PipeLogConfigurationParameters();
    AWS_PIPES_API PipeLogConfigurationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeLogConfigurationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 logging configuration settings for the pipe.</p>
     */
    inline const S3LogDestinationParameters& GetS3LogDestination() const{ return m_s3LogDestination; }
    inline bool S3LogDestinationHasBeenSet() const { return m_s3LogDestinationHasBeenSet; }
    inline void SetS3LogDestination(const S3LogDestinationParameters& value) { m_s3LogDestinationHasBeenSet = true; m_s3LogDestination = value; }
    inline void SetS3LogDestination(S3LogDestinationParameters&& value) { m_s3LogDestinationHasBeenSet = true; m_s3LogDestination = std::move(value); }
    inline PipeLogConfigurationParameters& WithS3LogDestination(const S3LogDestinationParameters& value) { SetS3LogDestination(value); return *this;}
    inline PipeLogConfigurationParameters& WithS3LogDestination(S3LogDestinationParameters&& value) { SetS3LogDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Data Firehose logging configuration settings for the pipe.</p>
     */
    inline const FirehoseLogDestinationParameters& GetFirehoseLogDestination() const{ return m_firehoseLogDestination; }
    inline bool FirehoseLogDestinationHasBeenSet() const { return m_firehoseLogDestinationHasBeenSet; }
    inline void SetFirehoseLogDestination(const FirehoseLogDestinationParameters& value) { m_firehoseLogDestinationHasBeenSet = true; m_firehoseLogDestination = value; }
    inline void SetFirehoseLogDestination(FirehoseLogDestinationParameters&& value) { m_firehoseLogDestinationHasBeenSet = true; m_firehoseLogDestination = std::move(value); }
    inline PipeLogConfigurationParameters& WithFirehoseLogDestination(const FirehoseLogDestinationParameters& value) { SetFirehoseLogDestination(value); return *this;}
    inline PipeLogConfigurationParameters& WithFirehoseLogDestination(FirehoseLogDestinationParameters&& value) { SetFirehoseLogDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch Logs logging configuration settings for the pipe.</p>
     */
    inline const CloudwatchLogsLogDestinationParameters& GetCloudwatchLogsLogDestination() const{ return m_cloudwatchLogsLogDestination; }
    inline bool CloudwatchLogsLogDestinationHasBeenSet() const { return m_cloudwatchLogsLogDestinationHasBeenSet; }
    inline void SetCloudwatchLogsLogDestination(const CloudwatchLogsLogDestinationParameters& value) { m_cloudwatchLogsLogDestinationHasBeenSet = true; m_cloudwatchLogsLogDestination = value; }
    inline void SetCloudwatchLogsLogDestination(CloudwatchLogsLogDestinationParameters&& value) { m_cloudwatchLogsLogDestinationHasBeenSet = true; m_cloudwatchLogsLogDestination = std::move(value); }
    inline PipeLogConfigurationParameters& WithCloudwatchLogsLogDestination(const CloudwatchLogsLogDestinationParameters& value) { SetCloudwatchLogsLogDestination(value); return *this;}
    inline PipeLogConfigurationParameters& WithCloudwatchLogsLogDestination(CloudwatchLogsLogDestinationParameters&& value) { SetCloudwatchLogsLogDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of logging detail to include. This applies to all log destinations
     * for the pipe.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-logs.html#eb-pipes-logs-level">Specifying
     * EventBridge Pipes log level</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const LogLevel& GetLevel() const{ return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(const LogLevel& value) { m_levelHasBeenSet = true; m_level = value; }
    inline void SetLevel(LogLevel&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }
    inline PipeLogConfigurationParameters& WithLevel(const LogLevel& value) { SetLevel(value); return *this;}
    inline PipeLogConfigurationParameters& WithLevel(LogLevel&& value) { SetLevel(std::move(value)); return *this;}
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
    inline const Aws::Vector<IncludeExecutionDataOption>& GetIncludeExecutionData() const{ return m_includeExecutionData; }
    inline bool IncludeExecutionDataHasBeenSet() const { return m_includeExecutionDataHasBeenSet; }
    inline void SetIncludeExecutionData(const Aws::Vector<IncludeExecutionDataOption>& value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData = value; }
    inline void SetIncludeExecutionData(Aws::Vector<IncludeExecutionDataOption>&& value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData = std::move(value); }
    inline PipeLogConfigurationParameters& WithIncludeExecutionData(const Aws::Vector<IncludeExecutionDataOption>& value) { SetIncludeExecutionData(value); return *this;}
    inline PipeLogConfigurationParameters& WithIncludeExecutionData(Aws::Vector<IncludeExecutionDataOption>&& value) { SetIncludeExecutionData(std::move(value)); return *this;}
    inline PipeLogConfigurationParameters& AddIncludeExecutionData(const IncludeExecutionDataOption& value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData.push_back(value); return *this; }
    inline PipeLogConfigurationParameters& AddIncludeExecutionData(IncludeExecutionDataOption&& value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData.push_back(std::move(value)); return *this; }
    ///@}
  private:

    S3LogDestinationParameters m_s3LogDestination;
    bool m_s3LogDestinationHasBeenSet = false;

    FirehoseLogDestinationParameters m_firehoseLogDestination;
    bool m_firehoseLogDestinationHasBeenSet = false;

    CloudwatchLogsLogDestinationParameters m_cloudwatchLogsLogDestination;
    bool m_cloudwatchLogsLogDestinationHasBeenSet = false;

    LogLevel m_level;
    bool m_levelHasBeenSet = false;

    Aws::Vector<IncludeExecutionDataOption> m_includeExecutionData;
    bool m_includeExecutionDataHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
