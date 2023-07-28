/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/ToxicityDetectionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

ToxicityDetectionSettings::ToxicityDetectionSettings() : 
    m_toxicityCategoriesHasBeenSet(false)
{
}

ToxicityDetectionSettings::ToxicityDetectionSettings(JsonView jsonValue) : 
    m_toxicityCategoriesHasBeenSet(false)
{
  *this = jsonValue;
}

ToxicityDetectionSettings& ToxicityDetectionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ToxicityCategories"))
  {
    Aws::Utils::Array<JsonView> toxicityCategoriesJsonList = jsonValue.GetArray("ToxicityCategories");
    for(unsigned toxicityCategoriesIndex = 0; toxicityCategoriesIndex < toxicityCategoriesJsonList.GetLength(); ++toxicityCategoriesIndex)
    {
      m_toxicityCategories.push_back(ToxicityCategoryMapper::GetToxicityCategoryForName(toxicityCategoriesJsonList[toxicityCategoriesIndex].AsString()));
    }
    m_toxicityCategoriesHasBeenSet = true;
  }

  return *this;
}

JsonValue ToxicityDetectionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_toxicityCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> toxicityCategoriesJsonList(m_toxicityCategories.size());
   for(unsigned toxicityCategoriesIndex = 0; toxicityCategoriesIndex < toxicityCategoriesJsonList.GetLength(); ++toxicityCategoriesIndex)
   {
     toxicityCategoriesJsonList[toxicityCategoriesIndex].AsString(ToxicityCategoryMapper::GetNameForToxicityCategory(m_toxicityCategories[toxicityCategoriesIndex]));
   }
   payload.WithArray("ToxicityCategories", std::move(toxicityCategoriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
