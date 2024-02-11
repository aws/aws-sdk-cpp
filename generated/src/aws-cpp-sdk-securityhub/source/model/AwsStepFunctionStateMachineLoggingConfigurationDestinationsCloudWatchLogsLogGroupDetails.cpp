/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails::AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails() : 
    m_logGroupArnHasBeenSet(false)
{
}

AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails::AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails(JsonView jsonValue) : 
    m_logGroupArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails& AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogGroupArn"))
  {
    m_logGroupArn = jsonValue.GetString("LogGroupArn");

    m_logGroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsStepFunctionStateMachineLoggingConfigurationDestinationsCloudWatchLogsLogGroupDetails::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupArnHasBeenSet)
  {
   payload.WithString("LogGroupArn", m_logGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
