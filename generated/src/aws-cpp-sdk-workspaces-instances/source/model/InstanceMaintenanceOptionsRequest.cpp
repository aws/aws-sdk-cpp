/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/InstanceMaintenanceOptionsRequest.h>
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

InstanceMaintenanceOptionsRequest::InstanceMaintenanceOptionsRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

InstanceMaintenanceOptionsRequest& InstanceMaintenanceOptionsRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoRecovery"))
  {
    m_autoRecovery = AutoRecoveryEnumMapper::GetAutoRecoveryEnumForName(jsonValue.GetString("AutoRecovery"));
    m_autoRecoveryHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceMaintenanceOptionsRequest::Jsonize() const
{
  JsonValue payload;

  if(m_autoRecoveryHasBeenSet)
  {
   payload.WithString("AutoRecovery", AutoRecoveryEnumMapper::GetNameForAutoRecoveryEnum(m_autoRecovery));
  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
