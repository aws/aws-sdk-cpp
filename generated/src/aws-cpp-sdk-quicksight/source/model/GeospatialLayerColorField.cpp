/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialLayerColorField.h>
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

GeospatialLayerColorField::GeospatialLayerColorField(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialLayerColorField& GeospatialLayerColorField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColorDimensionsFields"))
  {
    Aws::Utils::Array<JsonView> colorDimensionsFieldsJsonList = jsonValue.GetArray("ColorDimensionsFields");
    for(unsigned colorDimensionsFieldsIndex = 0; colorDimensionsFieldsIndex < colorDimensionsFieldsJsonList.GetLength(); ++colorDimensionsFieldsIndex)
    {
      m_colorDimensionsFields.push_back(colorDimensionsFieldsJsonList[colorDimensionsFieldsIndex].AsObject());
    }
    m_colorDimensionsFieldsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColorValuesFields"))
  {
    Aws::Utils::Array<JsonView> colorValuesFieldsJsonList = jsonValue.GetArray("ColorValuesFields");
    for(unsigned colorValuesFieldsIndex = 0; colorValuesFieldsIndex < colorValuesFieldsJsonList.GetLength(); ++colorValuesFieldsIndex)
    {
      m_colorValuesFields.push_back(colorValuesFieldsJsonList[colorValuesFieldsIndex].AsObject());
    }
    m_colorValuesFieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialLayerColorField::Jsonize() const
{
  JsonValue payload;

  if(m_colorDimensionsFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> colorDimensionsFieldsJsonList(m_colorDimensionsFields.size());
   for(unsigned colorDimensionsFieldsIndex = 0; colorDimensionsFieldsIndex < colorDimensionsFieldsJsonList.GetLength(); ++colorDimensionsFieldsIndex)
   {
     colorDimensionsFieldsJsonList[colorDimensionsFieldsIndex].AsObject(m_colorDimensionsFields[colorDimensionsFieldsIndex].Jsonize());
   }
   payload.WithArray("ColorDimensionsFields", std::move(colorDimensionsFieldsJsonList));

  }

  if(m_colorValuesFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> colorValuesFieldsJsonList(m_colorValuesFields.size());
   for(unsigned colorValuesFieldsIndex = 0; colorValuesFieldsIndex < colorValuesFieldsJsonList.GetLength(); ++colorValuesFieldsIndex)
   {
     colorValuesFieldsJsonList[colorValuesFieldsIndex].AsObject(m_colorValuesFields[colorValuesFieldsIndex].Jsonize());
   }
   payload.WithArray("ColorValuesFields", std::move(colorValuesFieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
