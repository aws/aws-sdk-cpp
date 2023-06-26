/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ExecutionParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ExecutionParameter::ExecutionParameter() : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_defaultValuesHasBeenSet(false)
{
}

ExecutionParameter::ExecutionParameter(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_defaultValuesHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionParameter& ExecutionParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultValues"))
  {
    Aws::Utils::Array<JsonView> defaultValuesJsonList = jsonValue.GetArray("DefaultValues");
    for(unsigned defaultValuesIndex = 0; defaultValuesIndex < defaultValuesJsonList.GetLength(); ++defaultValuesIndex)
    {
      m_defaultValues.push_back(defaultValuesJsonList[defaultValuesIndex].AsString());
    }
    m_defaultValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionParameter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_defaultValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> defaultValuesJsonList(m_defaultValues.size());
   for(unsigned defaultValuesIndex = 0; defaultValuesIndex < defaultValuesJsonList.GetLength(); ++defaultValuesIndex)
   {
     defaultValuesJsonList[defaultValuesIndex].AsString(m_defaultValues[defaultValuesIndex]);
   }
   payload.WithArray("DefaultValues", std::move(defaultValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
