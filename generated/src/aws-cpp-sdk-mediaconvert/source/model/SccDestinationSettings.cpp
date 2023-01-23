/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/SccDestinationSettings.h>
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

SccDestinationSettings::SccDestinationSettings() : 
    m_framerate(SccDestinationFramerate::NOT_SET),
    m_framerateHasBeenSet(false)
{
}

SccDestinationSettings::SccDestinationSettings(JsonView jsonValue) : 
    m_framerate(SccDestinationFramerate::NOT_SET),
    m_framerateHasBeenSet(false)
{
  *this = jsonValue;
}

SccDestinationSettings& SccDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("framerate"))
  {
    m_framerate = SccDestinationFramerateMapper::GetSccDestinationFramerateForName(jsonValue.GetString("framerate"));

    m_framerateHasBeenSet = true;
  }

  return *this;
}

JsonValue SccDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_framerateHasBeenSet)
  {
   payload.WithString("framerate", SccDestinationFramerateMapper::GetNameForSccDestinationFramerate(m_framerate));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
