/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsStepFunctionStateMachineLoggingConfigurationDetails.h>
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

AwsStepFunctionStateMachineLoggingConfigurationDetails::AwsStepFunctionStateMachineLoggingConfigurationDetails() : 
    m_destinationsHasBeenSet(false),
    m_includeExecutionData(false),
    m_includeExecutionDataHasBeenSet(false),
    m_levelHasBeenSet(false)
{
}

AwsStepFunctionStateMachineLoggingConfigurationDetails::AwsStepFunctionStateMachineLoggingConfigurationDetails(JsonView jsonValue) : 
    m_destinationsHasBeenSet(false),
    m_includeExecutionData(false),
    m_includeExecutionDataHasBeenSet(false),
    m_levelHasBeenSet(false)
{
  *this = jsonValue;
}

AwsStepFunctionStateMachineLoggingConfigurationDetails& AwsStepFunctionStateMachineLoggingConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("Destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeExecutionData"))
  {
    m_includeExecutionData = jsonValue.GetBool("IncludeExecutionData");

    m_includeExecutionDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Level"))
  {
    m_level = jsonValue.GetString("Level");

    m_levelHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsStepFunctionStateMachineLoggingConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_destinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("Destinations", std::move(destinationsJsonList));

  }

  if(m_includeExecutionDataHasBeenSet)
  {
   payload.WithBool("IncludeExecutionData", m_includeExecutionData);

  }

  if(m_levelHasBeenSet)
  {
   payload.WithString("Level", m_level);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
