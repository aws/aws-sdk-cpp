/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/CloudwatchLogsLogDestination.h>
#include <aws/pipes/model/FirehoseLogDestination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pipes/model/LogLevel.h>
#include <aws/pipes/model/S3LogDestination.h>
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
   * <p>The logging configuration settings for the pipe.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeLogConfiguration">AWS
   * API Reference</a></p>
   */
  class PipeLogConfiguration
  {
  public:
    AWS_PIPES_API PipeLogConfiguration();
    AWS_PIPES_API PipeLogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeLogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon CloudWatch Logs logging configuration settings for the pipe.</p>
     */
    inline const CloudwatchLogsLogDestination& GetCloudwatchLogsLogDestination() const{ return m_cloudwatchLogsLogDestination; }

    /**
     * <p>The Amazon CloudWatch Logs logging configuration settings for the pipe.</p>
     */
    inline bool CloudwatchLogsLogDestinationHasBeenSet() const { return m_cloudwatchLogsLogDestinationHasBeenSet; }

    /**
     * <p>The Amazon CloudWatch Logs logging configuration settings for the pipe.</p>
     */
    inline void SetCloudwatchLogsLogDestination(const CloudwatchLogsLogDestination& value) { m_cloudwatchLogsLogDestinationHasBeenSet = true; m_cloudwatchLogsLogDestination = value; }

    /**
     * <p>The Amazon CloudWatch Logs logging configuration settings for the pipe.</p>
     */
    inline void SetCloudwatchLogsLogDestination(CloudwatchLogsLogDestination&& value) { m_cloudwatchLogsLogDestinationHasBeenSet = true; m_cloudwatchLogsLogDestination = std::move(value); }

    /**
     * <p>The Amazon CloudWatch Logs logging configuration settings for the pipe.</p>
     */
    inline PipeLogConfiguration& WithCloudwatchLogsLogDestination(const CloudwatchLogsLogDestination& value) { SetCloudwatchLogsLogDestination(value); return *this;}

    /**
     * <p>The Amazon CloudWatch Logs logging configuration settings for the pipe.</p>
     */
    inline PipeLogConfiguration& WithCloudwatchLogsLogDestination(CloudwatchLogsLogDestination&& value) { SetCloudwatchLogsLogDestination(std::move(value)); return *this;}


    /**
     * <p>The Amazon Kinesis Data Firehose logging configuration settings for the
     * pipe.</p>
     */
    inline const FirehoseLogDestination& GetFirehoseLogDestination() const{ return m_firehoseLogDestination; }

    /**
     * <p>The Amazon Kinesis Data Firehose logging configuration settings for the
     * pipe.</p>
     */
    inline bool FirehoseLogDestinationHasBeenSet() const { return m_firehoseLogDestinationHasBeenSet; }

    /**
     * <p>The Amazon Kinesis Data Firehose logging configuration settings for the
     * pipe.</p>
     */
    inline void SetFirehoseLogDestination(const FirehoseLogDestination& value) { m_firehoseLogDestinationHasBeenSet = true; m_firehoseLogDestination = value; }

    /**
     * <p>The Amazon Kinesis Data Firehose logging configuration settings for the
     * pipe.</p>
     */
    inline void SetFirehoseLogDestination(FirehoseLogDestination&& value) { m_firehoseLogDestinationHasBeenSet = true; m_firehoseLogDestination = std::move(value); }

    /**
     * <p>The Amazon Kinesis Data Firehose logging configuration settings for the
     * pipe.</p>
     */
    inline PipeLogConfiguration& WithFirehoseLogDestination(const FirehoseLogDestination& value) { SetFirehoseLogDestination(value); return *this;}

    /**
     * <p>The Amazon Kinesis Data Firehose logging configuration settings for the
     * pipe.</p>
     */
    inline PipeLogConfiguration& WithFirehoseLogDestination(FirehoseLogDestination&& value) { SetFirehoseLogDestination(std::move(value)); return *this;}


    /**
     * <p>Whether the execution data (specifically, the <code>payload</code>,
     * <code>awsRequest</code>, and <code>awsResponse</code> fields) is included in the
     * log messages for this pipe.</p> <p>This applies to all log destinations for the
     * pipe.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-logs.html#eb-pipes-logs-execution-data">Including
     * execution data in logs</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const Aws::Vector<IncludeExecutionDataOption>& GetIncludeExecutionData() const{ return m_includeExecutionData; }

    /**
     * <p>Whether the execution data (specifically, the <code>payload</code>,
     * <code>awsRequest</code>, and <code>awsResponse</code> fields) is included in the
     * log messages for this pipe.</p> <p>This applies to all log destinations for the
     * pipe.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-logs.html#eb-pipes-logs-execution-data">Including
     * execution data in logs</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline bool IncludeExecutionDataHasBeenSet() const { return m_includeExecutionDataHasBeenSet; }

    /**
     * <p>Whether the execution data (specifically, the <code>payload</code>,
     * <code>awsRequest</code>, and <code>awsResponse</code> fields) is included in the
     * log messages for this pipe.</p> <p>This applies to all log destinations for the
     * pipe.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-logs.html#eb-pipes-logs-execution-data">Including
     * execution data in logs</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetIncludeExecutionData(const Aws::Vector<IncludeExecutionDataOption>& value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData = value; }

    /**
     * <p>Whether the execution data (specifically, the <code>payload</code>,
     * <code>awsRequest</code>, and <code>awsResponse</code> fields) is included in the
     * log messages for this pipe.</p> <p>This applies to all log destinations for the
     * pipe.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-logs.html#eb-pipes-logs-execution-data">Including
     * execution data in logs</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetIncludeExecutionData(Aws::Vector<IncludeExecutionDataOption>&& value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData = std::move(value); }

    /**
     * <p>Whether the execution data (specifically, the <code>payload</code>,
     * <code>awsRequest</code>, and <code>awsResponse</code> fields) is included in the
     * log messages for this pipe.</p> <p>This applies to all log destinations for the
     * pipe.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-logs.html#eb-pipes-logs-execution-data">Including
     * execution data in logs</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline PipeLogConfiguration& WithIncludeExecutionData(const Aws::Vector<IncludeExecutionDataOption>& value) { SetIncludeExecutionData(value); return *this;}

    /**
     * <p>Whether the execution data (specifically, the <code>payload</code>,
     * <code>awsRequest</code>, and <code>awsResponse</code> fields) is included in the
     * log messages for this pipe.</p> <p>This applies to all log destinations for the
     * pipe.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-logs.html#eb-pipes-logs-execution-data">Including
     * execution data in logs</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline PipeLogConfiguration& WithIncludeExecutionData(Aws::Vector<IncludeExecutionDataOption>&& value) { SetIncludeExecutionData(std::move(value)); return *this;}

    /**
     * <p>Whether the execution data (specifically, the <code>payload</code>,
     * <code>awsRequest</code>, and <code>awsResponse</code> fields) is included in the
     * log messages for this pipe.</p> <p>This applies to all log destinations for the
     * pipe.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-logs.html#eb-pipes-logs-execution-data">Including
     * execution data in logs</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline PipeLogConfiguration& AddIncludeExecutionData(const IncludeExecutionDataOption& value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData.push_back(value); return *this; }

    /**
     * <p>Whether the execution data (specifically, the <code>payload</code>,
     * <code>awsRequest</code>, and <code>awsResponse</code> fields) is included in the
     * log messages for this pipe.</p> <p>This applies to all log destinations for the
     * pipe.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-logs.html#eb-pipes-logs-execution-data">Including
     * execution data in logs</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline PipeLogConfiguration& AddIncludeExecutionData(IncludeExecutionDataOption&& value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData.push_back(std::move(value)); return *this; }


    /**
     * <p>The level of logging detail to include. This applies to all log destinations
     * for the pipe.</p>
     */
    inline const LogLevel& GetLevel() const{ return m_level; }

    /**
     * <p>The level of logging detail to include. This applies to all log destinations
     * for the pipe.</p>
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * <p>The level of logging detail to include. This applies to all log destinations
     * for the pipe.</p>
     */
    inline void SetLevel(const LogLevel& value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * <p>The level of logging detail to include. This applies to all log destinations
     * for the pipe.</p>
     */
    inline void SetLevel(LogLevel&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }

    /**
     * <p>The level of logging detail to include. This applies to all log destinations
     * for the pipe.</p>
     */
    inline PipeLogConfiguration& WithLevel(const LogLevel& value) { SetLevel(value); return *this;}

    /**
     * <p>The level of logging detail to include. This applies to all log destinations
     * for the pipe.</p>
     */
    inline PipeLogConfiguration& WithLevel(LogLevel&& value) { SetLevel(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 logging configuration settings for the pipe.</p>
     */
    inline const S3LogDestination& GetS3LogDestination() const{ return m_s3LogDestination; }

    /**
     * <p>The Amazon S3 logging configuration settings for the pipe.</p>
     */
    inline bool S3LogDestinationHasBeenSet() const { return m_s3LogDestinationHasBeenSet; }

    /**
     * <p>The Amazon S3 logging configuration settings for the pipe.</p>
     */
    inline void SetS3LogDestination(const S3LogDestination& value) { m_s3LogDestinationHasBeenSet = true; m_s3LogDestination = value; }

    /**
     * <p>The Amazon S3 logging configuration settings for the pipe.</p>
     */
    inline void SetS3LogDestination(S3LogDestination&& value) { m_s3LogDestinationHasBeenSet = true; m_s3LogDestination = std::move(value); }

    /**
     * <p>The Amazon S3 logging configuration settings for the pipe.</p>
     */
    inline PipeLogConfiguration& WithS3LogDestination(const S3LogDestination& value) { SetS3LogDestination(value); return *this;}

    /**
     * <p>The Amazon S3 logging configuration settings for the pipe.</p>
     */
    inline PipeLogConfiguration& WithS3LogDestination(S3LogDestination&& value) { SetS3LogDestination(std::move(value)); return *this;}

  private:

    CloudwatchLogsLogDestination m_cloudwatchLogsLogDestination;
    bool m_cloudwatchLogsLogDestinationHasBeenSet = false;

    FirehoseLogDestination m_firehoseLogDestination;
    bool m_firehoseLogDestinationHasBeenSet = false;

    Aws::Vector<IncludeExecutionDataOption> m_includeExecutionData;
    bool m_includeExecutionDataHasBeenSet = false;

    LogLevel m_level;
    bool m_levelHasBeenSet = false;

    S3LogDestination m_s3LogDestination;
    bool m_s3LogDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
