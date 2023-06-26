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
   * <p>Information about logging for the S3 bucket</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketLoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketLoggingConfiguration
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketLoggingConfiguration();
    AWS_SECURITYHUB_API AwsS3BucketLoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketLoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the S3 bucket where log files for the S3 bucket are stored.</p>
     */
    inline const Aws::String& GetDestinationBucketName() const{ return m_destinationBucketName; }

    /**
     * <p>The name of the S3 bucket where log files for the S3 bucket are stored.</p>
     */
    inline bool DestinationBucketNameHasBeenSet() const { return m_destinationBucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket where log files for the S3 bucket are stored.</p>
     */
    inline void SetDestinationBucketName(const Aws::String& value) { m_destinationBucketNameHasBeenSet = true; m_destinationBucketName = value; }

    /**
     * <p>The name of the S3 bucket where log files for the S3 bucket are stored.</p>
     */
    inline void SetDestinationBucketName(Aws::String&& value) { m_destinationBucketNameHasBeenSet = true; m_destinationBucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket where log files for the S3 bucket are stored.</p>
     */
    inline void SetDestinationBucketName(const char* value) { m_destinationBucketNameHasBeenSet = true; m_destinationBucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket where log files for the S3 bucket are stored.</p>
     */
    inline AwsS3BucketLoggingConfiguration& WithDestinationBucketName(const Aws::String& value) { SetDestinationBucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket where log files for the S3 bucket are stored.</p>
     */
    inline AwsS3BucketLoggingConfiguration& WithDestinationBucketName(Aws::String&& value) { SetDestinationBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket where log files for the S3 bucket are stored.</p>
     */
    inline AwsS3BucketLoggingConfiguration& WithDestinationBucketName(const char* value) { SetDestinationBucketName(value); return *this;}


    /**
     * <p>The prefix added to log files for the S3 bucket.</p>
     */
    inline const Aws::String& GetLogFilePrefix() const{ return m_logFilePrefix; }

    /**
     * <p>The prefix added to log files for the S3 bucket.</p>
     */
    inline bool LogFilePrefixHasBeenSet() const { return m_logFilePrefixHasBeenSet; }

    /**
     * <p>The prefix added to log files for the S3 bucket.</p>
     */
    inline void SetLogFilePrefix(const Aws::String& value) { m_logFilePrefixHasBeenSet = true; m_logFilePrefix = value; }

    /**
     * <p>The prefix added to log files for the S3 bucket.</p>
     */
    inline void SetLogFilePrefix(Aws::String&& value) { m_logFilePrefixHasBeenSet = true; m_logFilePrefix = std::move(value); }

    /**
     * <p>The prefix added to log files for the S3 bucket.</p>
     */
    inline void SetLogFilePrefix(const char* value) { m_logFilePrefixHasBeenSet = true; m_logFilePrefix.assign(value); }

    /**
     * <p>The prefix added to log files for the S3 bucket.</p>
     */
    inline AwsS3BucketLoggingConfiguration& WithLogFilePrefix(const Aws::String& value) { SetLogFilePrefix(value); return *this;}

    /**
     * <p>The prefix added to log files for the S3 bucket.</p>
     */
    inline AwsS3BucketLoggingConfiguration& WithLogFilePrefix(Aws::String&& value) { SetLogFilePrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix added to log files for the S3 bucket.</p>
     */
    inline AwsS3BucketLoggingConfiguration& WithLogFilePrefix(const char* value) { SetLogFilePrefix(value); return *this;}

  private:

    Aws::String m_destinationBucketName;
    bool m_destinationBucketNameHasBeenSet = false;

    Aws::String m_logFilePrefix;
    bool m_logFilePrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
