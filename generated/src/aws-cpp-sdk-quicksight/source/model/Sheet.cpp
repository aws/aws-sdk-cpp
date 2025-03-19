/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Sheet.h>
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

Sheet::Sheet(JsonView jsonValue)
{
  *this = jsonValue;
}

Sheet& Sheet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SheetId"))
  {
    m_sheetId = jsonValue.GetString("SheetId");
    m_sheetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Images"))
  {
    Aws::Utils::Array<JsonView> imagesJsonList = jsonValue.GetArray("Images");
    for(unsigned imagesIndex = 0; imagesIndex < imagesJsonList.GetLength(); ++imagesIndex)
    {
      m_images.push_back(imagesJsonList[imagesIndex].AsObject());
    }
    m_imagesHasBeenSet = true;
  }
  return *this;
}

JsonValue Sheet::Jsonize() const
{
  JsonValue payload;

  if(m_sheetIdHasBeenSet)
  {
   payload.WithString("SheetId", m_sheetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_imagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imagesJsonList(m_images.size());
   for(unsigned imagesIndex = 0; imagesIndex < imagesJsonList.GetLength(); ++imagesIndex)
   {
     imagesJsonList[imagesIndex].AsObject(m_images[imagesIndex].Jsonize());
   }
   payload.WithArray("Images", std::move(imagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
