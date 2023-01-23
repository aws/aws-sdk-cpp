/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about the logging status of the cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterLoggingStatus">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterLoggingStatus
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterLoggingStatus();
    AWS_SECURITYHUB_API AwsRedshiftClusterLoggingStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterLoggingStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The message indicating that the logs failed to be delivered.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const{ return m_lastFailureMessage; }

    /**
     * <p>The message indicating that the logs failed to be delivered.</p>
     */
    inline bool LastFailureMessageHasBeenSet() const { return m_lastFailureMessageHasBeenSet; }

    /**
     * <p>The message indicating that the logs failed to be delivered.</p>
     */
    inline void SetLastFailureMessage(const Aws::String& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = value; }

    /**
     * <p>The message indicating that the logs failed to be delivered.</p>
     */
    inline void SetLastFailureMessage(Aws::String&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = std::move(value); }

    /**
     * <p>The message indicating that the logs failed to be delivered.</p>
     */
    inline void SetLastFailureMessage(const char* value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage.assign(value); }

    /**
     * <p>The message indicating that the logs failed to be delivered.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithLastFailureMessage(const Aws::String& value) { SetLastFailureMessage(value); return *this;}

    /**
     * <p>The message indicating that the logs failed to be delivered.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithLastFailureMessage(Aws::String&& value) { SetLastFailureMessage(std::move(value)); return *this;}

    /**
     * <p>The message indicating that the logs failed to be delivered.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithLastFailureMessage(const char* value) { SetLastFailureMessage(value); return *this;}


    /**
     * <p>The last time when logs failed to be delivered.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetLastFailureTime() const{ return m_lastFailureTime; }

    /**
     * <p>The last time when logs failed to be delivered.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool LastFailureTimeHasBeenSet() const { return m_lastFailureTimeHasBeenSet; }

    /**
     * <p>The last time when logs failed to be delivered.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastFailureTime(const Aws::String& value) { m_lastFailureTimeHasBeenSet = true; m_lastFailureTime = value; }

    /**
     * <p>The last time when logs failed to be delivered.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastFailureTime(Aws::String&& value) { m_lastFailureTimeHasBeenSet = true; m_lastFailureTime = std::move(value); }

    /**
     * <p>The last time when logs failed to be delivered.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastFailureTime(const char* value) { m_lastFailureTimeHasBeenSet = true; m_lastFailureTime.assign(value); }

    /**
     * <p>The last time when logs failed to be delivered.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithLastFailureTime(const Aws::String& value) { SetLastFailureTime(value); return *this;}

    /**
     * <p>The last time when logs failed to be delivered.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithLastFailureTime(Aws::String&& value) { SetLastFailureTime(std::move(value)); return *this;}

    /**
     * <p>The last time when logs failed to be delivered.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithLastFailureTime(const char* value) { SetLastFailureTime(value); return *this;}


    /**
     * <p>The last time that logs were delivered successfully.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetLastSuccessfulDeliveryTime() const{ return m_lastSuccessfulDeliveryTime; }

    /**
     * <p>The last time that logs were delivered successfully.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool LastSuccessfulDeliveryTimeHasBeenSet() const { return m_lastSuccessfulDeliveryTimeHasBeenSet; }

    /**
     * <p>The last time that logs were delivered successfully.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastSuccessfulDeliveryTime(const Aws::String& value) { m_lastSuccessfulDeliveryTimeHasBeenSet = true; m_lastSuccessfulDeliveryTime = value; }

    /**
     * <p>The last time that logs were delivered successfully.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastSuccessfulDeliveryTime(Aws::String&& value) { m_lastSuccessfulDeliveryTimeHasBeenSet = true; m_lastSuccessfulDeliveryTime = std::move(value); }

    /**
     * <p>The last time that logs were delivered successfully.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastSuccessfulDeliveryTime(const char* value) { m_lastSuccessfulDeliveryTimeHasBeenSet = true; m_lastSuccessfulDeliveryTime.assign(value); }

    /**
     * <p>The last time that logs were delivered successfully.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithLastSuccessfulDeliveryTime(const Aws::String& value) { SetLastSuccessfulDeliveryTime(value); return *this;}

    /**
     * <p>The last time that logs were delivered successfully.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithLastSuccessfulDeliveryTime(Aws::String&& value) { SetLastSuccessfulDeliveryTime(std::move(value)); return *this;}

    /**
     * <p>The last time that logs were delivered successfully.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithLastSuccessfulDeliveryTime(const char* value) { SetLastSuccessfulDeliveryTime(value); return *this;}


    /**
     * <p>Indicates whether logging is enabled.</p>
     */
    inline bool GetLoggingEnabled() const{ return m_loggingEnabled; }

    /**
     * <p>Indicates whether logging is enabled.</p>
     */
    inline bool LoggingEnabledHasBeenSet() const { return m_loggingEnabledHasBeenSet; }

    /**
     * <p>Indicates whether logging is enabled.</p>
     */
    inline void SetLoggingEnabled(bool value) { m_loggingEnabledHasBeenSet = true; m_loggingEnabled = value; }

    /**
     * <p>Indicates whether logging is enabled.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithLoggingEnabled(bool value) { SetLoggingEnabled(value); return *this;}


    /**
     * <p>Provides the prefix applied to the log file names.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p>Provides the prefix applied to the log file names.</p>
     */
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }

    /**
     * <p>Provides the prefix applied to the log file names.</p>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    /**
     * <p>Provides the prefix applied to the log file names.</p>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }

    /**
     * <p>Provides the prefix applied to the log file names.</p>
     */
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }

    /**
     * <p>Provides the prefix applied to the log file names.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>Provides the prefix applied to the log file names.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>Provides the prefix applied to the log file names.</p>
     */
    inline AwsRedshiftClusterLoggingStatus& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_lastFailureMessage;
    bool m_lastFailureMessageHasBeenSet = false;

    Aws::String m_lastFailureTime;
    bool m_lastFailureTimeHasBeenSet = false;

    Aws::String m_lastSuccessfulDeliveryTime;
    bool m_lastSuccessfulDeliveryTimeHasBeenSet = false;

    bool m_loggingEnabled;
    bool m_loggingEnabledHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
