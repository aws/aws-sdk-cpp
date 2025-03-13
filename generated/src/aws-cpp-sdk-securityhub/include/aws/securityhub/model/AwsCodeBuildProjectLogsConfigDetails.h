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
    AWS_SECURITYHUB_API AwsCodeBuildProjectLogsConfigDetails() = default;
    AWS_SECURITYHUB_API AwsCodeBuildProjectLogsConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCodeBuildProjectLogsConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about CloudWatch Logs for the build project.</p>
     */
    inline const AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails& GetCloudWatchLogs() const { return m_cloudWatchLogs; }
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }
    template<typename CloudWatchLogsT = AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails>
    void SetCloudWatchLogs(CloudWatchLogsT&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::forward<CloudWatchLogsT>(value); }
    template<typename CloudWatchLogsT = AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails>
    AwsCodeBuildProjectLogsConfigDetails& WithCloudWatchLogs(CloudWatchLogsT&& value) { SetCloudWatchLogs(std::forward<CloudWatchLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about logs built to an S3 bucket for a build project.</p>
     */
    inline const AwsCodeBuildProjectLogsConfigS3LogsDetails& GetS3Logs() const { return m_s3Logs; }
    inline bool S3LogsHasBeenSet() const { return m_s3LogsHasBeenSet; }
    template<typename S3LogsT = AwsCodeBuildProjectLogsConfigS3LogsDetails>
    void SetS3Logs(S3LogsT&& value) { m_s3LogsHasBeenSet = true; m_s3Logs = std::forward<S3LogsT>(value); }
    template<typename S3LogsT = AwsCodeBuildProjectLogsConfigS3LogsDetails>
    AwsCodeBuildProjectLogsConfigDetails& WithS3Logs(S3LogsT&& value) { SetS3Logs(std::forward<S3LogsT>(value)); return *this;}
    ///@}
  private:

    AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    AwsCodeBuildProjectLogsConfigS3LogsDetails m_s3Logs;
    bool m_s3LogsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
