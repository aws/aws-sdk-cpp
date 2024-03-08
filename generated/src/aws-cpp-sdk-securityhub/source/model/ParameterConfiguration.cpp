/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ParameterConfiguration.h>
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

ParameterConfiguration::ParameterConfiguration() : 
    m_valueType(ParameterValueType::NOT_SET),
    m_valueTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

ParameterConfiguration::ParameterConfiguration(JsonView jsonValue) : 
    m_valueType(ParameterValueType::NOT_SET),
    m_valueTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterConfiguration& ParameterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ValueType"))
  {
    m_valueType = ParameterValueTypeMapper::GetParameterValueTypeForName(jsonValue.GetString("ValueType"));

    m_valueTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_valueTypeHasBeenSet)
  {
   payload.WithString("ValueType", ParameterValueTypeMapper::GetNameForParameterValueType(m_valueType));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
