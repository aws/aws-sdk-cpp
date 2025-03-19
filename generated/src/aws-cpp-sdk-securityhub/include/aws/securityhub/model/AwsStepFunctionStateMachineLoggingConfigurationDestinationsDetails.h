/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails.h>
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
   * <p> An array of objects that describes where your execution history events will
   * be logged. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails">AWS
   * API Reference</a></p>
   */
  class AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails() = default;
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An object describing a CloudWatch Logs log group. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-logs-loggroup.html">
     * Amazon Web Services::Logs::LogGroup</a> in the <i>CloudFormation User Guide</i>.
     * </p>
     */
    inline const AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails& GetCloudWatchLogsLogGroup() const { return m_cloudWatchLogsLogGroup; }
    inline bool CloudWatchLogsLogGroupHasBeenSet() const { return m_cloudWatchLogsLogGroupHasBeenSet; }
    template<typename CloudWatchLogsLogGroupT = AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails>
    void SetCloudWatchLogsLogGroup(CloudWatchLogsLogGroupT&& value) { m_cloudWatchLogsLogGroupHasBeenSet = true; m_cloudWatchLogsLogGroup = std::forward<CloudWatchLogsLogGroupT>(value); }
    template<typename CloudWatchLogsLogGroupT = AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails>
    AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails& WithCloudWatchLogsLogGroup(CloudWatchLogsLogGroupT&& value) { SetCloudWatchLogsLogGroup(std::forward<CloudWatchLogsLogGroupT>(value)); return *this;}
    ///@}
  private:

    AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails m_cloudWatchLogsLogGroup;
    bool m_cloudWatchLogsLogGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
