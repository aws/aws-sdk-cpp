/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/CloudWatchLogsTimeZone.h>
#include <aws/opsworks/model/CloudWatchLogsInitialPosition.h>
#include <aws/opsworks/model/CloudWatchLogsEncoding.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes the CloudWatch Logs configuration for a layer. For detailed
   * information about members of this data type, see the <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AgentReference.html">CloudWatch
   * Logs Agent Reference</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CloudWatchLogsLogStream">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogsLogStream
  {
  public:
    AWS_OPSWORKS_API CloudWatchLogsLogStream() = default;
    AWS_OPSWORKS_API CloudWatchLogsLogStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API CloudWatchLogsLogStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the destination log group. A log group is created automatically if
     * it doesn't already exist. Log group names can be between 1 and 512 characters
     * long. Allowed characters include a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen),
     * '/' (forward slash), and '.' (period).</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    CloudWatchLogsLogStream& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how the time stamp is extracted from logs. For more information,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AgentReference.html">CloudWatch
     * Logs Agent Reference</a>.</p>
     */
    inline const Aws::String& GetDatetimeFormat() const { return m_datetimeFormat; }
    inline bool DatetimeFormatHasBeenSet() const { return m_datetimeFormatHasBeenSet; }
    template<typename DatetimeFormatT = Aws::String>
    void SetDatetimeFormat(DatetimeFormatT&& value) { m_datetimeFormatHasBeenSet = true; m_datetimeFormat = std::forward<DatetimeFormatT>(value); }
    template<typename DatetimeFormatT = Aws::String>
    CloudWatchLogsLogStream& WithDatetimeFormat(DatetimeFormatT&& value) { SetDatetimeFormat(std::forward<DatetimeFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time zone of log event time stamps.</p>
     */
    inline CloudWatchLogsTimeZone GetTimeZone() const { return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    inline void SetTimeZone(CloudWatchLogsTimeZone value) { m_timeZoneHasBeenSet = true; m_timeZone = value; }
    inline CloudWatchLogsLogStream& WithTimeZone(CloudWatchLogsTimeZone value) { SetTimeZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies log files that you want to push to CloudWatch Logs.</p> <p>
     * <code>File</code> can point to a specific file or multiple files (by using wild
     * card characters such as <code>/var/log/system.log*</code>). Only the latest file
     * is pushed to CloudWatch Logs, based on file modification time. We recommend that
     * you use wild card characters to specify a series of files of the same type, such
     * as <code>access_log.2014-06-01-01</code>, <code>access_log.2014-06-01-02</code>,
     * and so on by using a pattern like <code>access_log.*</code>. Don't use a
     * wildcard to match multiple file types, such as <code>access_log_80</code> and
     * <code>access_log_443</code>. To specify multiple, different file types, add
     * another log stream entry to the configuration file, so that each log file type
     * is stored in a different log group.</p> <p>Zipped files are not supported.</p>
     */
    inline const Aws::String& GetFile() const { return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    template<typename FileT = Aws::String>
    void SetFile(FileT&& value) { m_fileHasBeenSet = true; m_file = std::forward<FileT>(value); }
    template<typename FileT = Aws::String>
    CloudWatchLogsLogStream& WithFile(FileT&& value) { SetFile(std::forward<FileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the range of lines for identifying a file. The valid values are one
     * number, or two dash-delimited numbers, such as '1', '2-5'. The default value is
     * '1', meaning the first line is used to calculate the fingerprint. Fingerprint
     * lines are not sent to CloudWatch Logs unless all specified lines are
     * available.</p>
     */
    inline const Aws::String& GetFileFingerprintLines() const { return m_fileFingerprintLines; }
    inline bool FileFingerprintLinesHasBeenSet() const { return m_fileFingerprintLinesHasBeenSet; }
    template<typename FileFingerprintLinesT = Aws::String>
    void SetFileFingerprintLines(FileFingerprintLinesT&& value) { m_fileFingerprintLinesHasBeenSet = true; m_fileFingerprintLines = std::forward<FileFingerprintLinesT>(value); }
    template<typename FileFingerprintLinesT = Aws::String>
    CloudWatchLogsLogStream& WithFileFingerprintLines(FileFingerprintLinesT&& value) { SetFileFingerprintLines(std::forward<FileFingerprintLinesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the pattern for identifying the start of a log message.</p>
     */
    inline const Aws::String& GetMultiLineStartPattern() const { return m_multiLineStartPattern; }
    inline bool MultiLineStartPatternHasBeenSet() const { return m_multiLineStartPatternHasBeenSet; }
    template<typename MultiLineStartPatternT = Aws::String>
    void SetMultiLineStartPattern(MultiLineStartPatternT&& value) { m_multiLineStartPatternHasBeenSet = true; m_multiLineStartPattern = std::forward<MultiLineStartPatternT>(value); }
    template<typename MultiLineStartPatternT = Aws::String>
    CloudWatchLogsLogStream& WithMultiLineStartPattern(MultiLineStartPatternT&& value) { SetMultiLineStartPattern(std::forward<MultiLineStartPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies where to start to read data (start_of_file or end_of_file). The
     * default is start_of_file. This setting is only used if there is no state
     * persisted for that log stream.</p>
     */
    inline CloudWatchLogsInitialPosition GetInitialPosition() const { return m_initialPosition; }
    inline bool InitialPositionHasBeenSet() const { return m_initialPositionHasBeenSet; }
    inline void SetInitialPosition(CloudWatchLogsInitialPosition value) { m_initialPositionHasBeenSet = true; m_initialPosition = value; }
    inline CloudWatchLogsLogStream& WithInitialPosition(CloudWatchLogsInitialPosition value) { SetInitialPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the encoding of the log file so that the file can be read
     * correctly. The default is <code>utf_8</code>. Encodings supported by Python
     * <code>codecs.decode()</code> can be used here.</p>
     */
    inline CloudWatchLogsEncoding GetEncoding() const { return m_encoding; }
    inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }
    inline void SetEncoding(CloudWatchLogsEncoding value) { m_encodingHasBeenSet = true; m_encoding = value; }
    inline CloudWatchLogsLogStream& WithEncoding(CloudWatchLogsEncoding value) { SetEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time duration for the batching of log events. The minimum value
     * is 5000ms and default value is 5000ms.</p>
     */
    inline int GetBufferDuration() const { return m_bufferDuration; }
    inline bool BufferDurationHasBeenSet() const { return m_bufferDurationHasBeenSet; }
    inline void SetBufferDuration(int value) { m_bufferDurationHasBeenSet = true; m_bufferDuration = value; }
    inline CloudWatchLogsLogStream& WithBufferDuration(int value) { SetBufferDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the max number of log events in a batch, up to 10000. The default
     * value is 1000.</p>
     */
    inline int GetBatchCount() const { return m_batchCount; }
    inline bool BatchCountHasBeenSet() const { return m_batchCountHasBeenSet; }
    inline void SetBatchCount(int value) { m_batchCountHasBeenSet = true; m_batchCount = value; }
    inline CloudWatchLogsLogStream& WithBatchCount(int value) { SetBatchCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum size of log events in a batch, in bytes, up to 1048576
     * bytes. The default value is 32768 bytes. This size is calculated as the sum of
     * all event messages in UTF-8, plus 26 bytes for each log event.</p>
     */
    inline int GetBatchSize() const { return m_batchSize; }
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }
    inline CloudWatchLogsLogStream& WithBatchSize(int value) { SetBatchSize(value); return *this;}
    ///@}
  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_datetimeFormat;
    bool m_datetimeFormatHasBeenSet = false;

    CloudWatchLogsTimeZone m_timeZone{CloudWatchLogsTimeZone::NOT_SET};
    bool m_timeZoneHasBeenSet = false;

    Aws::String m_file;
    bool m_fileHasBeenSet = false;

    Aws::String m_fileFingerprintLines;
    bool m_fileFingerprintLinesHasBeenSet = false;

    Aws::String m_multiLineStartPattern;
    bool m_multiLineStartPatternHasBeenSet = false;

    CloudWatchLogsInitialPosition m_initialPosition{CloudWatchLogsInitialPosition::NOT_SET};
    bool m_initialPositionHasBeenSet = false;

    CloudWatchLogsEncoding m_encoding{CloudWatchLogsEncoding::NOT_SET};
    bool m_encodingHasBeenSet = false;

    int m_bufferDuration{0};
    bool m_bufferDurationHasBeenSet = false;

    int m_batchCount{0};
    bool m_batchCountHasBeenSet = false;

    int m_batchSize{0};
    bool m_batchSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
