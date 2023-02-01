/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GradientColor.h>
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

GradientColor::GradientColor() : 
    m_stopsHasBeenSet(false)
{
}

GradientColor::GradientColor(JsonView jsonValue) : 
    m_stopsHasBeenSet(false)
{
  *this = jsonValue;
}

GradientColor& GradientColor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Stops"))
  {
    Aws::Utils::Array<JsonView> stopsJsonList = jsonValue.GetArray("Stops");
    for(unsigned stopsIndex = 0; stopsIndex < stopsJsonList.GetLength(); ++stopsIndex)
    {
      m_stops.push_back(stopsJsonList[stopsIndex].AsObject());
    }
    m_stopsHasBeenSet = true;
  }

  return *this;
}

JsonValue GradientColor::Jsonize() const
{
  JsonValue payload;

  if(m_stopsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stopsJsonList(m_stops.size());
   for(unsigned stopsIndex = 0; stopsIndex < stopsJsonList.GetLength(); ++stopsIndex)
   {
     stopsJsonList[stopsIndex].AsObject(m_stops[stopsIndex].Jsonize());
   }
   payload.WithArray("Stops", std::move(stopsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
