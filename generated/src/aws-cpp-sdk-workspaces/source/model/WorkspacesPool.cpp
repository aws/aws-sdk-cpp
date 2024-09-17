/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspacesPool.h>
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

WorkspacesPool::WorkspacesPool() : 
    m_poolIdHasBeenSet(false),
    m_poolArnHasBeenSet(false),
    m_capacityStatusHasBeenSet(false),
    m_poolNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_state(WorkspacesPoolState::NOT_SET),
    m_stateHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_errorsHasBeenSet(false),
    m_applicationSettingsHasBeenSet(false),
    m_timeoutSettingsHasBeenSet(false)
{
}

WorkspacesPool::WorkspacesPool(JsonView jsonValue)
  : WorkspacesPool()
{
  *this = jsonValue;
}

WorkspacesPool& WorkspacesPool::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PoolId"))
  {
    m_poolId = jsonValue.GetString("PoolId");

    m_poolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PoolArn"))
  {
    m_poolArn = jsonValue.GetString("PoolArn");

    m_poolArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityStatus"))
  {
    m_capacityStatus = jsonValue.GetObject("CapacityStatus");

    m_capacityStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PoolName"))
  {
    m_poolName = jsonValue.GetString("PoolName");

    m_poolNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = WorkspacesPoolStateMapper::GetWorkspacesPoolStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BundleId"))
  {
    m_bundleId = jsonValue.GetString("BundleId");

    m_bundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationSettings"))
  {
    m_applicationSettings = jsonValue.GetObject("ApplicationSettings");

    m_applicationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeoutSettings"))
  {
    m_timeoutSettings = jsonValue.GetObject("TimeoutSettings");

    m_timeoutSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkspacesPool::Jsonize() const
{
  JsonValue payload;

  if(m_poolIdHasBeenSet)
  {
   payload.WithString("PoolId", m_poolId);

  }

  if(m_poolArnHasBeenSet)
  {
   payload.WithString("PoolArn", m_poolArn);

  }

  if(m_capacityStatusHasBeenSet)
  {
   payload.WithObject("CapacityStatus", m_capacityStatus.Jsonize());

  }

  if(m_poolNameHasBeenSet)
  {
   payload.WithString("PoolName", m_poolName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", WorkspacesPoolStateMapper::GetNameForWorkspacesPoolState(m_state));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("BundleId", m_bundleId);

  }

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_errorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorsJsonList(m_errors.size());
   for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
   {
     errorsJsonList[errorsIndex].AsObject(m_errors[errorsIndex].Jsonize());
   }
   payload.WithArray("Errors", std::move(errorsJsonList));

  }

  if(m_applicationSettingsHasBeenSet)
  {
   payload.WithObject("ApplicationSettings", m_applicationSettings.Jsonize());

  }

  if(m_timeoutSettingsHasBeenSet)
  {
   payload.WithObject("TimeoutSettings", m_timeoutSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
