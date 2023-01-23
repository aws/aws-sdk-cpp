/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/F4vSettings.h>
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

F4vSettings::F4vSettings() : 
    m_moovPlacement(F4vMoovPlacement::NOT_SET),
    m_moovPlacementHasBeenSet(false)
{
}

F4vSettings::F4vSettings(JsonView jsonValue) : 
    m_moovPlacement(F4vMoovPlacement::NOT_SET),
    m_moovPlacementHasBeenSet(false)
{
  *this = jsonValue;
}

F4vSettings& F4vSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("moovPlacement"))
  {
    m_moovPlacement = F4vMoovPlacementMapper::GetF4vMoovPlacementForName(jsonValue.GetString("moovPlacement"));

    m_moovPlacementHasBeenSet = true;
  }

  return *this;
}

JsonValue F4vSettings::Jsonize() const
{
  JsonValue payload;

  if(m_moovPlacementHasBeenSet)
  {
   payload.WithString("moovPlacement", F4vMoovPlacementMapper::GetNameForF4vMoovPlacement(m_moovPlacement));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
