/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/TrackSourceSettings.h>
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

TrackSourceSettings::TrackSourceSettings() : 
    m_trackNumber(0),
    m_trackNumberHasBeenSet(false)
{
}

TrackSourceSettings::TrackSourceSettings(JsonView jsonValue) : 
    m_trackNumber(0),
    m_trackNumberHasBeenSet(false)
{
  *this = jsonValue;
}

TrackSourceSettings& TrackSourceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("trackNumber"))
  {
    m_trackNumber = jsonValue.GetInteger("trackNumber");

    m_trackNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue TrackSourceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_trackNumberHasBeenSet)
  {
   payload.WithInteger("trackNumber", m_trackNumber);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
