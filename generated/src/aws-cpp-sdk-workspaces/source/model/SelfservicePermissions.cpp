/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/SelfservicePermissions.h>
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

SelfservicePermissions::SelfservicePermissions(JsonView jsonValue)
{
  *this = jsonValue;
}

SelfservicePermissions& SelfservicePermissions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RestartWorkspace"))
  {
    m_restartWorkspace = ReconnectEnumMapper::GetReconnectEnumForName(jsonValue.GetString("RestartWorkspace"));
    m_restartWorkspaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncreaseVolumeSize"))
  {
    m_increaseVolumeSize = ReconnectEnumMapper::GetReconnectEnumForName(jsonValue.GetString("IncreaseVolumeSize"));
    m_increaseVolumeSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChangeComputeType"))
  {
    m_changeComputeType = ReconnectEnumMapper::GetReconnectEnumForName(jsonValue.GetString("ChangeComputeType"));
    m_changeComputeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SwitchRunningMode"))
  {
    m_switchRunningMode = ReconnectEnumMapper::GetReconnectEnumForName(jsonValue.GetString("SwitchRunningMode"));
    m_switchRunningModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RebuildWorkspace"))
  {
    m_rebuildWorkspace = ReconnectEnumMapper::GetReconnectEnumForName(jsonValue.GetString("RebuildWorkspace"));
    m_rebuildWorkspaceHasBeenSet = true;
  }
  return *this;
}

JsonValue SelfservicePermissions::Jsonize() const
{
  JsonValue payload;

  if(m_restartWorkspaceHasBeenSet)
  {
   payload.WithString("RestartWorkspace", ReconnectEnumMapper::GetNameForReconnectEnum(m_restartWorkspace));
  }

  if(m_increaseVolumeSizeHasBeenSet)
  {
   payload.WithString("IncreaseVolumeSize", ReconnectEnumMapper::GetNameForReconnectEnum(m_increaseVolumeSize));
  }

  if(m_changeComputeTypeHasBeenSet)
  {
   payload.WithString("ChangeComputeType", ReconnectEnumMapper::GetNameForReconnectEnum(m_changeComputeType));
  }

  if(m_switchRunningModeHasBeenSet)
  {
   payload.WithString("SwitchRunningMode", ReconnectEnumMapper::GetNameForReconnectEnum(m_switchRunningMode));
  }

  if(m_rebuildWorkspaceHasBeenSet)
  {
   payload.WithString("RebuildWorkspace", ReconnectEnumMapper::GetNameForReconnectEnum(m_rebuildWorkspace));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
