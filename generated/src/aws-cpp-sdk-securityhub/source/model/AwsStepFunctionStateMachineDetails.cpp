/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsStepFunctionStateMachineDetails.h>
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

AwsStepFunctionStateMachineDetails::AwsStepFunctionStateMachineDetails() : 
    m_labelHasBeenSet(false),
    m_loggingConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_stateMachineArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tracingConfigurationHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AwsStepFunctionStateMachineDetails::AwsStepFunctionStateMachineDetails(JsonView jsonValue) : 
    m_labelHasBeenSet(false),
    m_loggingConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_stateMachineArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tracingConfigurationHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsStepFunctionStateMachineDetails& AwsStepFunctionStateMachineDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");

    m_labelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoggingConfiguration"))
  {
    m_loggingConfiguration = jsonValue.GetObject("LoggingConfiguration");

    m_loggingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateMachineArn"))
  {
    m_stateMachineArn = jsonValue.GetString("StateMachineArn");

    m_stateMachineArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TracingConfiguration"))
  {
    m_tracingConfiguration = jsonValue.GetObject("TracingConfiguration");

    m_tracingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsStepFunctionStateMachineDetails::Jsonize() const
{
  JsonValue payload;

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_loggingConfigurationHasBeenSet)
  {
   payload.WithObject("LoggingConfiguration", m_loggingConfiguration.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_stateMachineArnHasBeenSet)
  {
   payload.WithString("StateMachineArn", m_stateMachineArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_tracingConfigurationHasBeenSet)
  {
   payload.WithObject("TracingConfiguration", m_tracingConfiguration.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
