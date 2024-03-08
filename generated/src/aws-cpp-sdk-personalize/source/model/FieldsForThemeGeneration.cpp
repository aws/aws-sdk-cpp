/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/FieldsForThemeGeneration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

FieldsForThemeGeneration::FieldsForThemeGeneration() : 
    m_itemNameHasBeenSet(false)
{
}

FieldsForThemeGeneration::FieldsForThemeGeneration(JsonView jsonValue) : 
    m_itemNameHasBeenSet(false)
{
  *this = jsonValue;
}

FieldsForThemeGeneration& FieldsForThemeGeneration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("itemName"))
  {
    m_itemName = jsonValue.GetString("itemName");

    m_itemNameHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldsForThemeGeneration::Jsonize() const
{
  JsonValue payload;

  if(m_itemNameHasBeenSet)
  {
   payload.WithString("itemName", m_itemName);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
