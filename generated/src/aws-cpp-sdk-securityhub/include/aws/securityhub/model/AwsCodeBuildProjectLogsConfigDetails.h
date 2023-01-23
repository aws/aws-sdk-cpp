/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails.h>
#include <aws/securityhub/model/AwsCodeBuildProjectLogsConfigS3LogsDetails.h>
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
   * <p>Information about logs for the build project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCodeBuildProjectLogsConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsCodeBuildProjectLogsConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsCodeBuildProjectLogsConfigDetails();
    AWS_SECURITYHUB_API AwsCodeBuildProjectLogsConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCodeBuildProjectLogsConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about CloudWatch Logs for the build project.</p>
     */
    inline const AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails& GetCloudWatchLogs() const{ return m_cloudWatchLogs; }

    /**
     * <p>Information about CloudWatch Logs for the build project.</p>
     */
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }

    /**
     * <p>Information about CloudWatch Logs for the build project.</p>
     */
    inline void SetCloudWatchLogs(const AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = value; }

    /**
     * <p>Information about CloudWatch Logs for the build project.</p>
     */
    inline void SetCloudWatchLogs(AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::move(value); }

    /**
     * <p>Information about CloudWatch Logs for the build project.</p>
     */
    inline AwsCodeBuildProjectLogsConfigDetails& WithCloudWatchLogs(const AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails& value) { SetCloudWatchLogs(value); return *this;}

    /**
     * <p>Information about CloudWatch Logs for the build project.</p>
     */
    inline AwsCodeBuildProjectLogsConfigDetails& WithCloudWatchLogs(AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails&& value) { SetCloudWatchLogs(std::move(value)); return *this;}


    /**
     * <p>Information about logs built to an S3 bucket for a build project.</p>
     */
    inline const AwsCodeBuildProjectLogsConfigS3LogsDetails& GetS3Logs() const{ return m_s3Logs; }

    /**
     * <p>Information about logs built to an S3 bucket for a build project.</p>
     */
    inline bool S3LogsHasBeenSet() const { return m_s3LogsHasBeenSet; }

    /**
     * <p>Information about logs built to an S3 bucket for a build project.</p>
     */
    inline void SetS3Logs(const AwsCodeBuildProjectLogsConfigS3LogsDetails& value) { m_s3LogsHasBeenSet = true; m_s3Logs = value; }

    /**
     * <p>Information about logs built to an S3 bucket for a build project.</p>
     */
    inline void SetS3Logs(AwsCodeBuildProjectLogsConfigS3LogsDetails&& value) { m_s3LogsHasBeenSet = true; m_s3Logs = std::move(value); }

    /**
     * <p>Information about logs built to an S3 bucket for a build project.</p>
     */
    inline AwsCodeBuildProjectLogsConfigDetails& WithS3Logs(const AwsCodeBuildProjectLogsConfigS3LogsDetails& value) { SetS3Logs(value); return *this;}

    /**
     * <p>Information about logs built to an S3 bucket for a build project.</p>
     */
    inline AwsCodeBuildProjectLogsConfigDetails& WithS3Logs(AwsCodeBuildProjectLogsConfigS3LogsDetails&& value) { SetS3Logs(std::move(value)); return *this;}

  private:

    AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    AwsCodeBuildProjectLogsConfigS3LogsDetails m_s3Logs;
    bool m_s3LogsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
