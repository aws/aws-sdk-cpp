/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/WorkspaceInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

WorkspaceInstance::WorkspaceInstance(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkspaceInstance& WorkspaceInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProvisionState"))
  {
    m_provisionState = ProvisionStateEnumMapper::GetProvisionStateEnumForName(jsonValue.GetString("ProvisionState"));
    m_provisionStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WorkspaceInstanceId"))
  {
    m_workspaceInstanceId = jsonValue.GetString("WorkspaceInstanceId");
    m_workspaceInstanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EC2ManagedInstance"))
  {
    m_eC2ManagedInstance = jsonValue.GetObject("EC2ManagedInstance");
    m_eC2ManagedInstanceHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkspaceInstance::Jsonize() const
{
  JsonValue payload;

  if(m_provisionStateHasBeenSet)
  {
   payload.WithString("ProvisionState", ProvisionStateEnumMapper::GetNameForProvisionStateEnum(m_provisionState));
  }

  if(m_workspaceInstanceIdHasBeenSet)
  {
   payload.WithString("WorkspaceInstanceId", m_workspaceInstanceId);

  }

  if(m_eC2ManagedInstanceHasBeenSet)
  {
   payload.WithObject("EC2ManagedInstance", m_eC2ManagedInstance.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
