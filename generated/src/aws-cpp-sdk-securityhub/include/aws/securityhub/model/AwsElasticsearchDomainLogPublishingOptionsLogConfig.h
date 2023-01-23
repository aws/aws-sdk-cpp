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
   * <p>The log configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElasticsearchDomainLogPublishingOptionsLogConfig">AWS
   * API Reference</a></p>
   */
  class AwsElasticsearchDomainLogPublishingOptionsLogConfig
  {
  public:
    AWS_SECURITYHUB_API AwsElasticsearchDomainLogPublishingOptionsLogConfig();
    AWS_SECURITYHUB_API AwsElasticsearchDomainLogPublishingOptionsLogConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticsearchDomainLogPublishingOptionsLogConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the CloudWatch Logs group to publish the logs to.</p>
     */
    inline const Aws::String& GetCloudWatchLogsLogGroupArn() const{ return m_cloudWatchLogsLogGroupArn; }

    /**
     * <p>The ARN of the CloudWatch Logs group to publish the logs to.</p>
     */
    inline bool CloudWatchLogsLogGroupArnHasBeenSet() const { return m_cloudWatchLogsLogGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the CloudWatch Logs group to publish the logs to.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(const Aws::String& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = value; }

    /**
     * <p>The ARN of the CloudWatch Logs group to publish the logs to.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(Aws::String&& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = std::move(value); }

    /**
     * <p>The ARN of the CloudWatch Logs group to publish the logs to.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(const char* value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn.assign(value); }

    /**
     * <p>The ARN of the CloudWatch Logs group to publish the logs to.</p>
     */
    inline AwsElasticsearchDomainLogPublishingOptionsLogConfig& WithCloudWatchLogsLogGroupArn(const Aws::String& value) { SetCloudWatchLogsLogGroupArn(value); return *this;}

    /**
     * <p>The ARN of the CloudWatch Logs group to publish the logs to.</p>
     */
    inline AwsElasticsearchDomainLogPublishingOptionsLogConfig& WithCloudWatchLogsLogGroupArn(Aws::String&& value) { SetCloudWatchLogsLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the CloudWatch Logs group to publish the logs to.</p>
     */
    inline AwsElasticsearchDomainLogPublishingOptionsLogConfig& WithCloudWatchLogsLogGroupArn(const char* value) { SetCloudWatchLogsLogGroupArn(value); return *this;}


    /**
     * <p>Whether the log publishing is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether the log publishing is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether the log publishing is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether the log publishing is enabled.</p>
     */
    inline AwsElasticsearchDomainLogPublishingOptionsLogConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_cloudWatchLogsLogGroupArn;
    bool m_cloudWatchLogsLogGroupArnHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
