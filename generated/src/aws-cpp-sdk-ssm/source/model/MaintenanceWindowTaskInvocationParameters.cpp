/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/MaintenanceWindowTaskInvocationParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

MaintenanceWindowTaskInvocationParameters::MaintenanceWindowTaskInvocationParameters() : 
    m_runCommandHasBeenSet(false),
    m_automationHasBeenSet(false),
    m_stepFunctionsHasBeenSet(false),
    m_lambdaHasBeenSet(false)
{
}

MaintenanceWindowTaskInvocationParameters::MaintenanceWindowTaskInvocationParameters(JsonView jsonValue) : 
    m_runCommandHasBeenSet(false),
    m_automationHasBeenSet(false),
    m_stepFunctionsHasBeenSet(false),
    m_lambdaHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceWindowTaskInvocationParameters& MaintenanceWindowTaskInvocationParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RunCommand"))
  {
    m_runCommand = jsonValue.GetObject("RunCommand");

    m_runCommandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Automation"))
  {
    m_automation = jsonValue.GetObject("Automation");

    m_automationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepFunctions"))
  {
    m_stepFunctions = jsonValue.GetObject("StepFunctions");

    m_stepFunctionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lambda"))
  {
    m_lambda = jsonValue.GetObject("Lambda");

    m_lambdaHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceWindowTaskInvocationParameters::Jsonize() const
{
  JsonValue payload;

  if(m_runCommandHasBeenSet)
  {
   payload.WithObject("RunCommand", m_runCommand.Jsonize());

  }

  if(m_automationHasBeenSet)
  {
   payload.WithObject("Automation", m_automation.Jsonize());

  }

  if(m_stepFunctionsHasBeenSet)
  {
   payload.WithObject("StepFunctions", m_stepFunctions.Jsonize());

  }

  if(m_lambdaHasBeenSet)
  {
   payload.WithObject("Lambda", m_lambda.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
