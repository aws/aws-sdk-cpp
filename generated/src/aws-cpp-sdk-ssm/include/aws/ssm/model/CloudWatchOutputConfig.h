/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Configuration options for sending command output to Amazon CloudWatch
   * Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CloudWatchOutputConfig">AWS
   * API Reference</a></p>
   */
  class CloudWatchOutputConfig
  {
  public:
    AWS_SSM_API CloudWatchOutputConfig();
    AWS_SSM_API CloudWatchOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API CloudWatchOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the CloudWatch Logs log group where you want to send command
     * output. If you don't specify a group name, Amazon Web Services Systems Manager
     * automatically creates a log group for you. The log group uses the following
     * naming format:</p> <p> <code>aws/ssm/<i>SystemsManagerDocumentName</i> </code>
     * </p>
     */
    inline const Aws::String& GetCloudWatchLogGroupName() const{ return m_cloudWatchLogGroupName; }

    /**
     * <p>The name of the CloudWatch Logs log group where you want to send command
     * output. If you don't specify a group name, Amazon Web Services Systems Manager
     * automatically creates a log group for you. The log group uses the following
     * naming format:</p> <p> <code>aws/ssm/<i>SystemsManagerDocumentName</i> </code>
     * </p>
     */
    inline bool CloudWatchLogGroupNameHasBeenSet() const { return m_cloudWatchLogGroupNameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch Logs log group where you want to send command
     * output. If you don't specify a group name, Amazon Web Services Systems Manager
     * automatically creates a log group for you. The log group uses the following
     * naming format:</p> <p> <code>aws/ssm/<i>SystemsManagerDocumentName</i> </code>
     * </p>
     */
    inline void SetCloudWatchLogGroupName(const Aws::String& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = value; }

    /**
     * <p>The name of the CloudWatch Logs log group where you want to send command
     * output. If you don't specify a group name, Amazon Web Services Systems Manager
     * automatically creates a log group for you. The log group uses the following
     * naming format:</p> <p> <code>aws/ssm/<i>SystemsManagerDocumentName</i> </code>
     * </p>
     */
    inline void SetCloudWatchLogGroupName(Aws::String&& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = std::move(value); }

    /**
     * <p>The name of the CloudWatch Logs log group where you want to send command
     * output. If you don't specify a group name, Amazon Web Services Systems Manager
     * automatically creates a log group for you. The log group uses the following
     * naming format:</p> <p> <code>aws/ssm/<i>SystemsManagerDocumentName</i> </code>
     * </p>
     */
    inline void SetCloudWatchLogGroupName(const char* value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName.assign(value); }

    /**
     * <p>The name of the CloudWatch Logs log group where you want to send command
     * output. If you don't specify a group name, Amazon Web Services Systems Manager
     * automatically creates a log group for you. The log group uses the following
     * naming format:</p> <p> <code>aws/ssm/<i>SystemsManagerDocumentName</i> </code>
     * </p>
     */
    inline CloudWatchOutputConfig& WithCloudWatchLogGroupName(const Aws::String& value) { SetCloudWatchLogGroupName(value); return *this;}

    /**
     * <p>The name of the CloudWatch Logs log group where you want to send command
     * output. If you don't specify a group name, Amazon Web Services Systems Manager
     * automatically creates a log group for you. The log group uses the following
     * naming format:</p> <p> <code>aws/ssm/<i>SystemsManagerDocumentName</i> </code>
     * </p>
     */
    inline CloudWatchOutputConfig& WithCloudWatchLogGroupName(Aws::String&& value) { SetCloudWatchLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch Logs log group where you want to send command
     * output. If you don't specify a group name, Amazon Web Services Systems Manager
     * automatically creates a log group for you. The log group uses the following
     * naming format:</p> <p> <code>aws/ssm/<i>SystemsManagerDocumentName</i> </code>
     * </p>
     */
    inline CloudWatchOutputConfig& WithCloudWatchLogGroupName(const char* value) { SetCloudWatchLogGroupName(value); return *this;}


    /**
     * <p>Enables Systems Manager to send command output to CloudWatch Logs.</p>
     */
    inline bool GetCloudWatchOutputEnabled() const{ return m_cloudWatchOutputEnabled; }

    /**
     * <p>Enables Systems Manager to send command output to CloudWatch Logs.</p>
     */
    inline bool CloudWatchOutputEnabledHasBeenSet() const { return m_cloudWatchOutputEnabledHasBeenSet; }

    /**
     * <p>Enables Systems Manager to send command output to CloudWatch Logs.</p>
     */
    inline void SetCloudWatchOutputEnabled(bool value) { m_cloudWatchOutputEnabledHasBeenSet = true; m_cloudWatchOutputEnabled = value; }

    /**
     * <p>Enables Systems Manager to send command output to CloudWatch Logs.</p>
     */
    inline CloudWatchOutputConfig& WithCloudWatchOutputEnabled(bool value) { SetCloudWatchOutputEnabled(value); return *this;}

  private:

    Aws::String m_cloudWatchLogGroupName;
    bool m_cloudWatchLogGroupNameHasBeenSet = false;

    bool m_cloudWatchOutputEnabled;
    bool m_cloudWatchOutputEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
