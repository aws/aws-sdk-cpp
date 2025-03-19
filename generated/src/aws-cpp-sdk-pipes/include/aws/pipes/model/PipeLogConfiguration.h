/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/S3LogDestination.h>
#include <aws/pipes/model/FirehoseLogDestination.h>
#include <aws/pipes/model/CloudwatchLogsLogDestination.h>
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
   * <p>The logging configuration settings for the pipe.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeLogConfiguration">AWS
   * API Reference</a></p>
   */
  class PipeLogConfiguration
  {
  public:
    AWS_PIPES_API PipeLogConfiguration() = default;
    AWS_PIPES_API PipeLogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeLogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 logging configuration settings for the pipe.</p>
     */
    inline const S3LogDestination& GetS3LogDestination() const { return m_s3LogDestination; }
    inline bool S3LogDestinationHasBeenSet() const { return m_s3LogDestinationHasBeenSet; }
    template<typename S3LogDestinationT = S3LogDestination>
    void SetS3LogDestination(S3LogDestinationT&& value) { m_s3LogDestinationHasBeenSet = true; m_s3LogDestination = std::forward<S3LogDestinationT>(value); }
    template<typename S3LogDestinationT = S3LogDestination>
    PipeLogConfiguration& WithS3LogDestination(S3LogDestinationT&& value) { SetS3LogDestination(std::forward<S3LogDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Data Firehose logging configuration settings for the pipe.</p>
     */
    inline const FirehoseLogDestination& GetFirehoseLogDestination() const { return m_firehoseLogDestination; }
    inline bool FirehoseLogDestinationHasBeenSet() const { return m_firehoseLogDestinationHasBeenSet; }
    template<typename FirehoseLogDestinationT = FirehoseLogDestination>
    void SetFirehoseLogDestination(FirehoseLogDestinationT&& value) { m_firehoseLogDestinationHasBeenSet = true; m_firehoseLogDestination = std::forward<FirehoseLogDestinationT>(value); }
    template<typename FirehoseLogDestinationT = FirehoseLogDestination>
    PipeLogConfiguration& WithFirehoseLogDestination(FirehoseLogDestinationT&& value) { SetFirehoseLogDestination(std::forward<FirehoseLogDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch Logs logging configuration settings for the pipe.</p>
     */
    inline const CloudwatchLogsLogDestination& GetCloudwatchLogsLogDestination() const { return m_cloudwatchLogsLogDestination; }
    inline bool CloudwatchLogsLogDestinationHasBeenSet() const { return m_cloudwatchLogsLogDestinationHasBeenSet; }
    template<typename CloudwatchLogsLogDestinationT = CloudwatchLogsLogDestination>
    void SetCloudwatchLogsLogDestination(CloudwatchLogsLogDestinationT&& value) { m_cloudwatchLogsLogDestinationHasBeenSet = true; m_cloudwatchLogsLogDestination = std::forward<CloudwatchLogsLogDestinationT>(value); }
    template<typename CloudwatchLogsLogDestinationT = CloudwatchLogsLogDestination>
    PipeLogConfiguration& WithCloudwatchLogsLogDestination(CloudwatchLogsLogDestinationT&& value) { SetCloudwatchLogsLogDestination(std::forward<CloudwatchLogsLogDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of logging detail to include. This applies to all log destinations
     * for the pipe.</p>
     */
    inline LogLevel GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(LogLevel value) { m_levelHasBeenSet = true; m_level = value; }
    inline PipeLogConfiguration& WithLevel(LogLevel value) { SetLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the execution data (specifically, the <code>payload</code>,
     * <code>awsRequest</code>, and <code>awsResponse</code> fields) is included in the
     * log messages for this pipe.</p> <p>This applies to all log destinations for the
     * pipe.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-logs.html#eb-pipes-logs-execution-data">Including
     * execution data in logs</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const Aws::Vector<IncludeExecutionDataOption>& GetIncludeExecutionData() const { return m_includeExecutionData; }
    inline bool IncludeExecutionDataHasBeenSet() const { return m_includeExecutionDataHasBeenSet; }
    template<typename IncludeExecutionDataT = Aws::Vector<IncludeExecutionDataOption>>
    void SetIncludeExecutionData(IncludeExecutionDataT&& value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData = std::forward<IncludeExecutionDataT>(value); }
    template<typename IncludeExecutionDataT = Aws::Vector<IncludeExecutionDataOption>>
    PipeLogConfiguration& WithIncludeExecutionData(IncludeExecutionDataT&& value) { SetIncludeExecutionData(std::forward<IncludeExecutionDataT>(value)); return *this;}
    inline PipeLogConfiguration& AddIncludeExecutionData(IncludeExecutionDataOption value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData.push_back(value); return *this; }
    ///@}
  private:

    S3LogDestination m_s3LogDestination;
    bool m_s3LogDestinationHasBeenSet = false;

    FirehoseLogDestination m_firehoseLogDestination;
    bool m_firehoseLogDestinationHasBeenSet = false;

    CloudwatchLogsLogDestination m_cloudwatchLogsLogDestination;
    bool m_cloudwatchLogsLogDestinationHasBeenSet = false;

    LogLevel m_level{LogLevel::NOT_SET};
    bool m_levelHasBeenSet = false;

    Aws::Vector<IncludeExecutionDataOption> m_includeExecutionData;
    bool m_includeExecutionDataHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
