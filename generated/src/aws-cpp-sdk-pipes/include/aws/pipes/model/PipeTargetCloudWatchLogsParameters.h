/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The parameters for using an CloudWatch Logs log stream as a
   * target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetCloudWatchLogsParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetCloudWatchLogsParameters
  {
  public:
    AWS_PIPES_API PipeTargetCloudWatchLogsParameters();
    AWS_PIPES_API PipeTargetCloudWatchLogsParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetCloudWatchLogsParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the log stream.</p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }

    /**
     * <p>The name of the log stream.</p>
     */
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }

    /**
     * <p>The name of the log stream.</p>
     */
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }

    /**
     * <p>The name of the log stream.</p>
     */
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::move(value); }

    /**
     * <p>The name of the log stream.</p>
     */
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }

    /**
     * <p>The name of the log stream.</p>
     */
    inline PipeTargetCloudWatchLogsParameters& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The name of the log stream.</p>
     */
    inline PipeTargetCloudWatchLogsParameters& WithLogStreamName(Aws::String&& value) { SetLogStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the log stream.</p>
     */
    inline PipeTargetCloudWatchLogsParameters& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}


    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline const Aws::String& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline void SetTimestamp(const Aws::String& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline void SetTimestamp(Aws::String&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline void SetTimestamp(const char* value) { m_timestampHasBeenSet = true; m_timestamp.assign(value); }

    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline PipeTargetCloudWatchLogsParameters& WithTimestamp(const Aws::String& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline PipeTargetCloudWatchLogsParameters& WithTimestamp(Aws::String&& value) { SetTimestamp(std::move(value)); return *this;}

    /**
     * <p>The time the event occurred, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline PipeTargetCloudWatchLogsParameters& WithTimestamp(const char* value) { SetTimestamp(value); return *this;}

  private:

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet = false;

    Aws::String m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
