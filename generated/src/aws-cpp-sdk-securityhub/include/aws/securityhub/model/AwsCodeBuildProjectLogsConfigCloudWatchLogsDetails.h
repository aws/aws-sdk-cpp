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
   * <p>Information about CloudWatch Logs for the build project.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails">AWS
   * API Reference</a></p>
   */
  class AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails();
    AWS_SECURITYHUB_API AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The group name of the logs in CloudWatch Logs.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the logs in CloudWatch Logs for a build project.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix of the stream name of the CloudWatch Logs.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }
    inline AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}
    inline AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}
    inline AwsCodeBuildProjectLogsConfigCloudWatchLogsDetails& WithStreamName(const char* value) { SetStreamName(value); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
