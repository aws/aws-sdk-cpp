/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/MaintenanceWindowStepFunctionsParameters.h>
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

MaintenanceWindowStepFunctionsParameters::MaintenanceWindowStepFunctionsParameters() : 
    m_inputHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

MaintenanceWindowStepFunctionsParameters::MaintenanceWindowStepFunctionsParameters(JsonView jsonValue) : 
    m_inputHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceWindowStepFunctionsParameters& MaintenanceWindowStepFunctionsParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Input"))
  {
    m_input = jsonValue.GetString("Input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceWindowStepFunctionsParameters::Jsonize() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithString("Input", m_input);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
