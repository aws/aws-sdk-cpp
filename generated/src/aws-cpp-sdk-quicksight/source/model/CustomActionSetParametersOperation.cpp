/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CustomActionSetParametersOperation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

CustomActionSetParametersOperation::CustomActionSetParametersOperation() : 
    m_parameterValueConfigurationsHasBeenSet(false)
{
}

CustomActionSetParametersOperation::CustomActionSetParametersOperation(JsonView jsonValue) : 
    m_parameterValueConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

CustomActionSetParametersOperation& CustomActionSetParametersOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterValueConfigurations"))
  {
    Aws::Utils::Array<JsonView> parameterValueConfigurationsJsonList = jsonValue.GetArray("ParameterValueConfigurations");
    for(unsigned parameterValueConfigurationsIndex = 0; parameterValueConfigurationsIndex < parameterValueConfigurationsJsonList.GetLength(); ++parameterValueConfigurationsIndex)
    {
      m_parameterValueConfigurations.push_back(parameterValueConfigurationsJsonList[parameterValueConfigurationsIndex].AsObject());
    }
    m_parameterValueConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomActionSetParametersOperation::Jsonize() const
{
  JsonValue payload;

  if(m_parameterValueConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterValueConfigurationsJsonList(m_parameterValueConfigurations.size());
   for(unsigned parameterValueConfigurationsIndex = 0; parameterValueConfigurationsIndex < parameterValueConfigurationsJsonList.GetLength(); ++parameterValueConfigurationsIndex)
   {
     parameterValueConfigurationsJsonList[parameterValueConfigurationsIndex].AsObject(m_parameterValueConfigurations[parameterValueConfigurationsIndex].Jsonize());
   }
   payload.WithArray("ParameterValueConfigurations", std::move(parameterValueConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
