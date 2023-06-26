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
   * <p> Specifies the logging configuration when writing GraphQL operations and
   * tracing to Amazon CloudWatch for an AppSync GraphQL API. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAppSyncGraphQlApiLogConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsAppSyncGraphQlApiLogConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiLogConfigDetails();
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiLogConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiLogConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the service role that AppSync assumes to
     * publish to CloudWatch Logs in your account. </p>
     */
    inline const Aws::String& GetCloudWatchLogsRoleArn() const{ return m_cloudWatchLogsRoleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the service role that AppSync assumes to
     * publish to CloudWatch Logs in your account. </p>
     */
    inline bool CloudWatchLogsRoleArnHasBeenSet() const { return m_cloudWatchLogsRoleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the service role that AppSync assumes to
     * publish to CloudWatch Logs in your account. </p>
     */
    inline void SetCloudWatchLogsRoleArn(const Aws::String& value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the service role that AppSync assumes to
     * publish to CloudWatch Logs in your account. </p>
     */
    inline void SetCloudWatchLogsRoleArn(Aws::String&& value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the service role that AppSync assumes to
     * publish to CloudWatch Logs in your account. </p>
     */
    inline void SetCloudWatchLogsRoleArn(const char* value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the service role that AppSync assumes to
     * publish to CloudWatch Logs in your account. </p>
     */
    inline AwsAppSyncGraphQlApiLogConfigDetails& WithCloudWatchLogsRoleArn(const Aws::String& value) { SetCloudWatchLogsRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the service role that AppSync assumes to
     * publish to CloudWatch Logs in your account. </p>
     */
    inline AwsAppSyncGraphQlApiLogConfigDetails& WithCloudWatchLogsRoleArn(Aws::String&& value) { SetCloudWatchLogsRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the service role that AppSync assumes to
     * publish to CloudWatch Logs in your account. </p>
     */
    inline AwsAppSyncGraphQlApiLogConfigDetails& WithCloudWatchLogsRoleArn(const char* value) { SetCloudWatchLogsRoleArn(value); return *this;}


    /**
     * <p> Set to <code>TRUE</code> to exclude sections that contain information such
     * as headers, context, and evaluated mapping templates, regardless of logging
     * level. </p>
     */
    inline bool GetExcludeVerboseContent() const{ return m_excludeVerboseContent; }

    /**
     * <p> Set to <code>TRUE</code> to exclude sections that contain information such
     * as headers, context, and evaluated mapping templates, regardless of logging
     * level. </p>
     */
    inline bool ExcludeVerboseContentHasBeenSet() const { return m_excludeVerboseContentHasBeenSet; }

    /**
     * <p> Set to <code>TRUE</code> to exclude sections that contain information such
     * as headers, context, and evaluated mapping templates, regardless of logging
     * level. </p>
     */
    inline void SetExcludeVerboseContent(bool value) { m_excludeVerboseContentHasBeenSet = true; m_excludeVerboseContent = value; }

    /**
     * <p> Set to <code>TRUE</code> to exclude sections that contain information such
     * as headers, context, and evaluated mapping templates, regardless of logging
     * level. </p>
     */
    inline AwsAppSyncGraphQlApiLogConfigDetails& WithExcludeVerboseContent(bool value) { SetExcludeVerboseContent(value); return *this;}


    /**
     * <p> The field logging level. </p>
     */
    inline const Aws::String& GetFieldLogLevel() const{ return m_fieldLogLevel; }

    /**
     * <p> The field logging level. </p>
     */
    inline bool FieldLogLevelHasBeenSet() const { return m_fieldLogLevelHasBeenSet; }

    /**
     * <p> The field logging level. </p>
     */
    inline void SetFieldLogLevel(const Aws::String& value) { m_fieldLogLevelHasBeenSet = true; m_fieldLogLevel = value; }

    /**
     * <p> The field logging level. </p>
     */
    inline void SetFieldLogLevel(Aws::String&& value) { m_fieldLogLevelHasBeenSet = true; m_fieldLogLevel = std::move(value); }

    /**
     * <p> The field logging level. </p>
     */
    inline void SetFieldLogLevel(const char* value) { m_fieldLogLevelHasBeenSet = true; m_fieldLogLevel.assign(value); }

    /**
     * <p> The field logging level. </p>
     */
    inline AwsAppSyncGraphQlApiLogConfigDetails& WithFieldLogLevel(const Aws::String& value) { SetFieldLogLevel(value); return *this;}

    /**
     * <p> The field logging level. </p>
     */
    inline AwsAppSyncGraphQlApiLogConfigDetails& WithFieldLogLevel(Aws::String&& value) { SetFieldLogLevel(std::move(value)); return *this;}

    /**
     * <p> The field logging level. </p>
     */
    inline AwsAppSyncGraphQlApiLogConfigDetails& WithFieldLogLevel(const char* value) { SetFieldLogLevel(value); return *this;}

  private:

    Aws::String m_cloudWatchLogsRoleArn;
    bool m_cloudWatchLogsRoleArnHasBeenSet = false;

    bool m_excludeVerboseContent;
    bool m_excludeVerboseContentHasBeenSet = false;

    Aws::String m_fieldLogLevel;
    bool m_fieldLogLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
