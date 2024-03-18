/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AudienceMedia.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

AudienceMedia::AudienceMedia() : 
    m_alternateMediaHasBeenSet(false),
    m_audienceHasBeenSet(false)
{
}

AudienceMedia::AudienceMedia(JsonView jsonValue) : 
    m_alternateMediaHasBeenSet(false),
    m_audienceHasBeenSet(false)
{
  *this = jsonValue;
}

AudienceMedia& AudienceMedia::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlternateMedia"))
  {
    Aws::Utils::Array<JsonView> alternateMediaJsonList = jsonValue.GetArray("AlternateMedia");
    for(unsigned alternateMediaIndex = 0; alternateMediaIndex < alternateMediaJsonList.GetLength(); ++alternateMediaIndex)
    {
      m_alternateMedia.push_back(alternateMediaJsonList[alternateMediaIndex].AsObject());
    }
    m_alternateMediaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Audience"))
  {
    m_audience = jsonValue.GetString("Audience");

    m_audienceHasBeenSet = true;
  }

  return *this;
}

JsonValue AudienceMedia::Jsonize() const
{
  JsonValue payload;

  if(m_alternateMediaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> alternateMediaJsonList(m_alternateMedia.size());
   for(unsigned alternateMediaIndex = 0; alternateMediaIndex < alternateMediaJsonList.GetLength(); ++alternateMediaIndex)
   {
     alternateMediaJsonList[alternateMediaIndex].AsObject(m_alternateMedia[alternateMediaIndex].Jsonize());
   }
   payload.WithArray("AlternateMedia", std::move(alternateMediaJsonList));

  }

  if(m_audienceHasBeenSet)
  {
   payload.WithString("Audience", m_audience);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
