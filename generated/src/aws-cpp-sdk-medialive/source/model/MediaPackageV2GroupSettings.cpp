/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MediaPackageV2GroupSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

MediaPackageV2GroupSettings::MediaPackageV2GroupSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

MediaPackageV2GroupSettings& MediaPackageV2GroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("captionLanguageMappings"))
  {
    Aws::Utils::Array<JsonView> captionLanguageMappingsJsonList = jsonValue.GetArray("captionLanguageMappings");
    for(unsigned captionLanguageMappingsIndex = 0; captionLanguageMappingsIndex < captionLanguageMappingsJsonList.GetLength(); ++captionLanguageMappingsIndex)
    {
      m_captionLanguageMappings.push_back(captionLanguageMappingsJsonList[captionLanguageMappingsIndex].AsObject());
    }
    m_captionLanguageMappingsHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaPackageV2GroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_captionLanguageMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> captionLanguageMappingsJsonList(m_captionLanguageMappings.size());
   for(unsigned captionLanguageMappingsIndex = 0; captionLanguageMappingsIndex < captionLanguageMappingsJsonList.GetLength(); ++captionLanguageMappingsIndex)
   {
     captionLanguageMappingsJsonList[captionLanguageMappingsIndex].AsObject(m_captionLanguageMappings[captionLanguageMappingsIndex].Jsonize());
   }
   payload.WithArray("captionLanguageMappings", std::move(captionLanguageMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
