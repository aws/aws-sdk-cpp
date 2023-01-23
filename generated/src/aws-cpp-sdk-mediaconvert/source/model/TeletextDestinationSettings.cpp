/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/TeletextDestinationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

TeletextDestinationSettings::TeletextDestinationSettings() : 
    m_pageNumberHasBeenSet(false),
    m_pageTypesHasBeenSet(false)
{
}

TeletextDestinationSettings::TeletextDestinationSettings(JsonView jsonValue) : 
    m_pageNumberHasBeenSet(false),
    m_pageTypesHasBeenSet(false)
{
  *this = jsonValue;
}

TeletextDestinationSettings& TeletextDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pageNumber"))
  {
    m_pageNumber = jsonValue.GetString("pageNumber");

    m_pageNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pageTypes"))
  {
    Aws::Utils::Array<JsonView> pageTypesJsonList = jsonValue.GetArray("pageTypes");
    for(unsigned pageTypesIndex = 0; pageTypesIndex < pageTypesJsonList.GetLength(); ++pageTypesIndex)
    {
      m_pageTypes.push_back(TeletextPageTypeMapper::GetTeletextPageTypeForName(pageTypesJsonList[pageTypesIndex].AsString()));
    }
    m_pageTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue TeletextDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_pageNumberHasBeenSet)
  {
   payload.WithString("pageNumber", m_pageNumber);

  }

  if(m_pageTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pageTypesJsonList(m_pageTypes.size());
   for(unsigned pageTypesIndex = 0; pageTypesIndex < pageTypesJsonList.GetLength(); ++pageTypesIndex)
   {
     pageTypesJsonList[pageTypesIndex].AsString(TeletextPageTypeMapper::GetNameForTeletextPageType(m_pageTypes[pageTypesIndex]));
   }
   payload.WithArray("pageTypes", std::move(pageTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
