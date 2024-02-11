/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails.h>
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

AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails::AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails() : 
    m_cloudWatchLogsLogGroupHasBeenSet(false)
{
}

AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails::AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails(JsonView jsonValue) : 
    m_cloudWatchLogsLogGroupHasBeenSet(false)
{
  *this = jsonValue;
}

AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails& AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLogsLogGroup"))
  {
    m_cloudWatchLogsLogGroup = jsonValue.GetObject("CloudWatchLogsLogGroup");

    m_cloudWatchLogsLogGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsLogGroupHasBeenSet)
  {
   payload.WithObject("CloudWatchLogsLogGroup", m_cloudWatchLogsLogGroup.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
