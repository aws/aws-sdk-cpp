/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FreeFormSectionLayoutConfiguration.h>
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

FreeFormSectionLayoutConfiguration::FreeFormSectionLayoutConfiguration() : 
    m_elementsHasBeenSet(false)
{
}

FreeFormSectionLayoutConfiguration::FreeFormSectionLayoutConfiguration(JsonView jsonValue) : 
    m_elementsHasBeenSet(false)
{
  *this = jsonValue;
}

FreeFormSectionLayoutConfiguration& FreeFormSectionLayoutConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Elements"))
  {
    Aws::Utils::Array<JsonView> elementsJsonList = jsonValue.GetArray("Elements");
    for(unsigned elementsIndex = 0; elementsIndex < elementsJsonList.GetLength(); ++elementsIndex)
    {
      m_elements.push_back(elementsJsonList[elementsIndex].AsObject());
    }
    m_elementsHasBeenSet = true;
  }

  return *this;
}

JsonValue FreeFormSectionLayoutConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_elementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> elementsJsonList(m_elements.size());
   for(unsigned elementsIndex = 0; elementsIndex < elementsJsonList.GetLength(); ++elementsIndex)
   {
     elementsJsonList[elementsIndex].AsObject(m_elements[elementsIndex].Jsonize());
   }
   payload.WithArray("Elements", std::move(elementsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
