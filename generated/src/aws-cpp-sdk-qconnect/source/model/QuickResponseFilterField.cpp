﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/QuickResponseFilterField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

QuickResponseFilterField::QuickResponseFilterField(JsonView jsonValue)
{
  *this = jsonValue;
}

QuickResponseFilterField& QuickResponseFilterField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operator"))
  {
    m_operator = QuickResponseFilterOperatorMapper::GetQuickResponseFilterOperatorForName(jsonValue.GetString("operator"));
    m_operatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("includeNoExistence"))
  {
    m_includeNoExistence = jsonValue.GetBool("includeNoExistence");
    m_includeNoExistenceHasBeenSet = true;
  }
  return *this;
}

JsonValue QuickResponseFilterField::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", QuickResponseFilterOperatorMapper::GetNameForQuickResponseFilterOperator(m_operator));
  }

  if(m_includeNoExistenceHasBeenSet)
  {
   payload.WithBool("includeNoExistence", m_includeNoExistence);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
