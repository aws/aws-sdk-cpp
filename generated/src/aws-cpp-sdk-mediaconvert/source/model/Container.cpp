/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Container.h>
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

Container::Container(JsonView jsonValue)
{
  *this = jsonValue;
}

Container& Container::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetDouble("duration");
    m_durationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("format"))
  {
    m_format = FormatMapper::GetFormatForName(jsonValue.GetString("format"));
    m_formatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tracks"))
  {
    Aws::Utils::Array<JsonView> tracksJsonList = jsonValue.GetArray("tracks");
    for(unsigned tracksIndex = 0; tracksIndex < tracksJsonList.GetLength(); ++tracksIndex)
    {
      m_tracks.push_back(tracksJsonList[tracksIndex].AsObject());
    }
    m_tracksHasBeenSet = true;
  }
  return *this;
}

JsonValue Container::Jsonize() const
{
  JsonValue payload;

  if(m_durationHasBeenSet)
  {
   payload.WithDouble("duration", m_duration);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", FormatMapper::GetNameForFormat(m_format));
  }

  if(m_tracksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tracksJsonList(m_tracks.size());
   for(unsigned tracksIndex = 0; tracksIndex < tracksJsonList.GetLength(); ++tracksIndex)
   {
     tracksJsonList[tracksIndex].AsObject(m_tracks[tracksIndex].Jsonize());
   }
   payload.WithArray("tracks", std::move(tracksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
