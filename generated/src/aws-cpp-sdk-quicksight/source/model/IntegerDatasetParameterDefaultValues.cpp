/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/IntegerDatasetParameterDefaultValues.h>
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

IntegerDatasetParameterDefaultValues::IntegerDatasetParameterDefaultValues() : 
    m_staticValuesHasBeenSet(false)
{
}

IntegerDatasetParameterDefaultValues::IntegerDatasetParameterDefaultValues(JsonView jsonValue) : 
    m_staticValuesHasBeenSet(false)
{
  *this = jsonValue;
}

IntegerDatasetParameterDefaultValues& IntegerDatasetParameterDefaultValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StaticValues"))
  {
    Aws::Utils::Array<JsonView> staticValuesJsonList = jsonValue.GetArray("StaticValues");
    for(unsigned staticValuesIndex = 0; staticValuesIndex < staticValuesJsonList.GetLength(); ++staticValuesIndex)
    {
      m_staticValues.push_back(staticValuesJsonList[staticValuesIndex].AsInt64());
    }
    m_staticValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue IntegerDatasetParameterDefaultValues::Jsonize() const
{
  JsonValue payload;

  if(m_staticValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> staticValuesJsonList(m_staticValues.size());
   for(unsigned staticValuesIndex = 0; staticValuesIndex < staticValuesJsonList.GetLength(); ++staticValuesIndex)
   {
     staticValuesJsonList[staticValuesIndex].AsInt64(m_staticValues[staticValuesIndex]);
   }
   payload.WithArray("StaticValues", std::move(staticValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
