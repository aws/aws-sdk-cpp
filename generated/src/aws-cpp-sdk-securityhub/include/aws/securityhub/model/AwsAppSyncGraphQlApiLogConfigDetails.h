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
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiLogConfigDetails() = default;
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiLogConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiLogConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the service role that AppSync assumes to
     * publish to CloudWatch Logs in your account. </p>
     */
    inline const Aws::String& GetCloudWatchLogsRoleArn() const { return m_cloudWatchLogsRoleArn; }
    inline bool CloudWatchLogsRoleArnHasBeenSet() const { return m_cloudWatchLogsRoleArnHasBeenSet; }
    template<typename CloudWatchLogsRoleArnT = Aws::String>
    void SetCloudWatchLogsRoleArn(CloudWatchLogsRoleArnT&& value) { m_cloudWatchLogsRoleArnHasBeenSet = true; m_cloudWatchLogsRoleArn = std::forward<CloudWatchLogsRoleArnT>(value); }
    template<typename CloudWatchLogsRoleArnT = Aws::String>
    AwsAppSyncGraphQlApiLogConfigDetails& WithCloudWatchLogsRoleArn(CloudWatchLogsRoleArnT&& value) { SetCloudWatchLogsRoleArn(std::forward<CloudWatchLogsRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Set to <code>TRUE</code> to exclude sections that contain information such
     * as headers, context, and evaluated mapping templates, regardless of logging
     * level. </p>
     */
    inline bool GetExcludeVerboseContent() const { return m_excludeVerboseContent; }
    inline bool ExcludeVerboseContentHasBeenSet() const { return m_excludeVerboseContentHasBeenSet; }
    inline void SetExcludeVerboseContent(bool value) { m_excludeVerboseContentHasBeenSet = true; m_excludeVerboseContent = value; }
    inline AwsAppSyncGraphQlApiLogConfigDetails& WithExcludeVerboseContent(bool value) { SetExcludeVerboseContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The field logging level. </p>
     */
    inline const Aws::String& GetFieldLogLevel() const { return m_fieldLogLevel; }
    inline bool FieldLogLevelHasBeenSet() const { return m_fieldLogLevelHasBeenSet; }
    template<typename FieldLogLevelT = Aws::String>
    void SetFieldLogLevel(FieldLogLevelT&& value) { m_fieldLogLevelHasBeenSet = true; m_fieldLogLevel = std::forward<FieldLogLevelT>(value); }
    template<typename FieldLogLevelT = Aws::String>
    AwsAppSyncGraphQlApiLogConfigDetails& WithFieldLogLevel(FieldLogLevelT&& value) { SetFieldLogLevel(std::forward<FieldLogLevelT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cloudWatchLogsRoleArn;
    bool m_cloudWatchLogsRoleArnHasBeenSet = false;

    bool m_excludeVerboseContent{false};
    bool m_excludeVerboseContentHasBeenSet = false;

    Aws::String m_fieldLogLevel;
    bool m_fieldLogLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
