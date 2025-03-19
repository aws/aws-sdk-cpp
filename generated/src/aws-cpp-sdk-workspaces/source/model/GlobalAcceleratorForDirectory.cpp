/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/GlobalAcceleratorForDirectory.h>
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

GlobalAcceleratorForDirectory::GlobalAcceleratorForDirectory(JsonView jsonValue)
{
  *this = jsonValue;
}

GlobalAcceleratorForDirectory& GlobalAcceleratorForDirectory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = AGAModeForDirectoryEnumMapper::GetAGAModeForDirectoryEnumForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreferredProtocol"))
  {
    m_preferredProtocol = AGAPreferredProtocolForDirectoryMapper::GetAGAPreferredProtocolForDirectoryForName(jsonValue.GetString("PreferredProtocol"));
    m_preferredProtocolHasBeenSet = true;
  }
  return *this;
}

JsonValue GlobalAcceleratorForDirectory::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", AGAModeForDirectoryEnumMapper::GetNameForAGAModeForDirectoryEnum(m_mode));
  }

  if(m_preferredProtocolHasBeenSet)
  {
   payload.WithString("PreferredProtocol", AGAPreferredProtocolForDirectoryMapper::GetNameForAGAPreferredProtocolForDirectory(m_preferredProtocol));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
