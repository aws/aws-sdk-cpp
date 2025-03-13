/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/GlobalAcceleratorForWorkSpace.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

GlobalAcceleratorForWorkSpace::GlobalAcceleratorForWorkSpace(JsonView jsonValue)
{
  *this = jsonValue;
}

GlobalAcceleratorForWorkSpace& GlobalAcceleratorForWorkSpace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = AGAModeForWorkSpaceEnumMapper::GetAGAModeForWorkSpaceEnumForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreferredProtocol"))
  {
    m_preferredProtocol = AGAPreferredProtocolForWorkSpaceMapper::GetAGAPreferredProtocolForWorkSpaceForName(jsonValue.GetString("PreferredProtocol"));
    m_preferredProtocolHasBeenSet = true;
  }
  return *this;
}

JsonValue GlobalAcceleratorForWorkSpace::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", AGAModeForWorkSpaceEnumMapper::GetNameForAGAModeForWorkSpaceEnum(m_mode));
  }

  if(m_preferredProtocolHasBeenSet)
  {
   payload.WithString("PreferredProtocol", AGAPreferredProtocolForWorkSpaceMapper::GetNameForAGAPreferredProtocolForWorkSpace(m_preferredProtocol));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
