/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/StringParameterDeclaration.h>
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

StringParameterDeclaration::StringParameterDeclaration() : 
    m_parameterValueType(ParameterValueType::NOT_SET),
    m_parameterValueTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_defaultValuesHasBeenSet(false),
    m_valueWhenUnsetHasBeenSet(false),
    m_mappedDataSetParametersHasBeenSet(false)
{
}

StringParameterDeclaration::StringParameterDeclaration(JsonView jsonValue) : 
    m_parameterValueType(ParameterValueType::NOT_SET),
    m_parameterValueTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_defaultValuesHasBeenSet(false),
    m_valueWhenUnsetHasBeenSet(false),
    m_mappedDataSetParametersHasBeenSet(false)
{
  *this = jsonValue;
}

StringParameterDeclaration& StringParameterDeclaration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterValueType"))
  {
    m_parameterValueType = ParameterValueTypeMapper::GetParameterValueTypeForName(jsonValue.GetString("ParameterValueType"));

    m_parameterValueTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultValues"))
  {
    m_defaultValues = jsonValue.GetObject("DefaultValues");

    m_defaultValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueWhenUnset"))
  {
    m_valueWhenUnset = jsonValue.GetObject("ValueWhenUnset");

    m_valueWhenUnsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MappedDataSetParameters"))
  {
    Aws::Utils::Array<JsonView> mappedDataSetParametersJsonList = jsonValue.GetArray("MappedDataSetParameters");
    for(unsigned mappedDataSetParametersIndex = 0; mappedDataSetParametersIndex < mappedDataSetParametersJsonList.GetLength(); ++mappedDataSetParametersIndex)
    {
      m_mappedDataSetParameters.push_back(mappedDataSetParametersJsonList[mappedDataSetParametersIndex].AsObject());
    }
    m_mappedDataSetParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue StringParameterDeclaration::Jsonize() const
{
  JsonValue payload;

  if(m_parameterValueTypeHasBeenSet)
  {
   payload.WithString("ParameterValueType", ParameterValueTypeMapper::GetNameForParameterValueType(m_parameterValueType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_defaultValuesHasBeenSet)
  {
   payload.WithObject("DefaultValues", m_defaultValues.Jsonize());

  }

  if(m_valueWhenUnsetHasBeenSet)
  {
   payload.WithObject("ValueWhenUnset", m_valueWhenUnset.Jsonize());

  }

  if(m_mappedDataSetParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mappedDataSetParametersJsonList(m_mappedDataSetParameters.size());
   for(unsigned mappedDataSetParametersIndex = 0; mappedDataSetParametersIndex < mappedDataSetParametersJsonList.GetLength(); ++mappedDataSetParametersIndex)
   {
     mappedDataSetParametersJsonList[mappedDataSetParametersIndex].AsObject(m_mappedDataSetParameters[mappedDataSetParametersIndex].Jsonize());
   }
   payload.WithArray("MappedDataSetParameters", std::move(mappedDataSetParametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
