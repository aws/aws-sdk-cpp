/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/CloudWatchLogsLogGroupArnConfigDetails.h>
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
   * <p> Provides details about a specified Amazon Route 53 configuration for DNS
   * query logging.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRoute53QueryLoggingConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsRoute53QueryLoggingConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRoute53QueryLoggingConfigDetails();
    AWS_SECURITYHUB_API AwsRoute53QueryLoggingConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRoute53QueryLoggingConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log group that
     * Route 53 is publishing logs to.</p>
     */
    inline const CloudWatchLogsLogGroupArnConfigDetails& GetCloudWatchLogsLogGroupArn() const{ return m_cloudWatchLogsLogGroupArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log group that
     * Route 53 is publishing logs to.</p>
     */
    inline bool CloudWatchLogsLogGroupArnHasBeenSet() const { return m_cloudWatchLogsLogGroupArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log group that
     * Route 53 is publishing logs to.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(const CloudWatchLogsLogGroupArnConfigDetails& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log group that
     * Route 53 is publishing logs to.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(CloudWatchLogsLogGroupArnConfigDetails&& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log group that
     * Route 53 is publishing logs to.</p>
     */
    inline AwsRoute53QueryLoggingConfigDetails& WithCloudWatchLogsLogGroupArn(const CloudWatchLogsLogGroupArnConfigDetails& value) { SetCloudWatchLogsLogGroupArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log group that
     * Route 53 is publishing logs to.</p>
     */
    inline AwsRoute53QueryLoggingConfigDetails& WithCloudWatchLogsLogGroupArn(CloudWatchLogsLogGroupArnConfigDetails&& value) { SetCloudWatchLogsLogGroupArn(std::move(value)); return *this;}

  private:

    CloudWatchLogsLogGroupArnConfigDetails m_cloudWatchLogsLogGroupArn;
    bool m_cloudWatchLogsLogGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
