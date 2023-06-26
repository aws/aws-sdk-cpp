/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/DynamicSsmParameterValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

DynamicSsmParameterValue::DynamicSsmParameterValue() : 
    m_variable(VariableType::NOT_SET),
    m_variableHasBeenSet(false)
{
}

DynamicSsmParameterValue::DynamicSsmParameterValue(JsonView jsonValue) : 
    m_variable(VariableType::NOT_SET),
    m_variableHasBeenSet(false)
{
  *this = jsonValue;
}

DynamicSsmParameterValue& DynamicSsmParameterValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("variable"))
  {
    m_variable = VariableTypeMapper::GetVariableTypeForName(jsonValue.GetString("variable"));

    m_variableHasBeenSet = true;
  }

  return *this;
}

JsonValue DynamicSsmParameterValue::Jsonize() const
{
  JsonValue payload;

  if(m_variableHasBeenSet)
  {
   payload.WithString("variable", VariableTypeMapper::GetNameForVariableType(m_variable));
  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
