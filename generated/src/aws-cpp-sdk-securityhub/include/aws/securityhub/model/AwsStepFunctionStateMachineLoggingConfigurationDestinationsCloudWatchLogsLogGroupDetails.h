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
   * <p> An object describing a CloudWatch log group. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-logs-loggroup.html">
   * Amazon Web Services::Logs::LogGroup</a> in the <i>CloudFormation User Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails">AWS
   * API Reference</a></p>
   */
  class AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails
  {
  public:
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails();
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN (ends with <code>:*</code>) of the CloudWatch Logs log group to which
     * you want your logs emitted.</p>
     */
    inline const Aws::String& GetLogGroupArn() const{ return m_logGroupArn; }

    /**
     * <p>The ARN (ends with <code>:*</code>) of the CloudWatch Logs log group to which
     * you want your logs emitted.</p>
     */
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }

    /**
     * <p>The ARN (ends with <code>:*</code>) of the CloudWatch Logs log group to which
     * you want your logs emitted.</p>
     */
    inline void SetLogGroupArn(const Aws::String& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = value; }

    /**
     * <p>The ARN (ends with <code>:*</code>) of the CloudWatch Logs log group to which
     * you want your logs emitted.</p>
     */
    inline void SetLogGroupArn(Aws::String&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::move(value); }

    /**
     * <p>The ARN (ends with <code>:*</code>) of the CloudWatch Logs log group to which
     * you want your logs emitted.</p>
     */
    inline void SetLogGroupArn(const char* value) { m_logGroupArnHasBeenSet = true; m_logGroupArn.assign(value); }

    /**
     * <p>The ARN (ends with <code>:*</code>) of the CloudWatch Logs log group to which
     * you want your logs emitted.</p>
     */
    inline AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails& WithLogGroupArn(const Aws::String& value) { SetLogGroupArn(value); return *this;}

    /**
     * <p>The ARN (ends with <code>:*</code>) of the CloudWatch Logs log group to which
     * you want your logs emitted.</p>
     */
    inline AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails& WithLogGroupArn(Aws::String&& value) { SetLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (ends with <code>:*</code>) of the CloudWatch Logs log group to which
     * you want your logs emitted.</p>
     */
    inline AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails& WithLogGroupArn(const char* value) { SetLogGroupArn(value); return *this;}

  private:

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
