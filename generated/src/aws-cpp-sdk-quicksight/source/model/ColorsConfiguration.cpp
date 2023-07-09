/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColorsConfiguration.h>
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

ColorsConfiguration::ColorsConfiguration() : 
    m_customColorsHasBeenSet(false)
{
}

ColorsConfiguration::ColorsConfiguration(JsonView jsonValue) : 
    m_customColorsHasBeenSet(false)
{
  *this = jsonValue;
}

ColorsConfiguration& ColorsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomColors"))
  {
    Aws::Utils::Array<JsonView> customColorsJsonList = jsonValue.GetArray("CustomColors");
    for(unsigned customColorsIndex = 0; customColorsIndex < customColorsJsonList.GetLength(); ++customColorsIndex)
    {
      m_customColors.push_back(customColorsJsonList[customColorsIndex].AsObject());
    }
    m_customColorsHasBeenSet = true;
  }

  return *this;
}

JsonValue ColorsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_customColorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customColorsJsonList(m_customColors.size());
   for(unsigned customColorsIndex = 0; customColorsIndex < customColorsJsonList.GetLength(); ++customColorsIndex)
   {
     customColorsJsonList[customColorsIndex].AsObject(m_customColors[customColorsIndex].Jsonize());
   }
   payload.WithArray("CustomColors", std::move(customColorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
