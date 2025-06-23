/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/Placement.h>
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

Placement::Placement(JsonView jsonValue)
{
  *this = jsonValue;
}

Placement& Placement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Affinity"))
  {
    m_affinity = jsonValue.GetString("Affinity");
    m_affinityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupId"))
  {
    m_groupId = jsonValue.GetString("GroupId");
    m_groupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");
    m_groupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HostId"))
  {
    m_hostId = jsonValue.GetString("HostId");
    m_hostIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HostResourceGroupArn"))
  {
    m_hostResourceGroupArn = jsonValue.GetString("HostResourceGroupArn");
    m_hostResourceGroupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PartitionNumber"))
  {
    m_partitionNumber = jsonValue.GetInteger("PartitionNumber");
    m_partitionNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tenancy"))
  {
    m_tenancy = TenancyEnumMapper::GetTenancyEnumForName(jsonValue.GetString("Tenancy"));
    m_tenancyHasBeenSet = true;
  }
  return *this;
}

JsonValue Placement::Jsonize() const
{
  JsonValue payload;

  if(m_affinityHasBeenSet)
  {
   payload.WithString("Affinity", m_affinity);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_hostIdHasBeenSet)
  {
   payload.WithString("HostId", m_hostId);

  }

  if(m_hostResourceGroupArnHasBeenSet)
  {
   payload.WithString("HostResourceGroupArn", m_hostResourceGroupArn);

  }

  if(m_partitionNumberHasBeenSet)
  {
   payload.WithInteger("PartitionNumber", m_partitionNumber);

  }

  if(m_tenancyHasBeenSet)
  {
   payload.WithString("Tenancy", TenancyEnumMapper::GetNameForTenancyEnum(m_tenancy));
  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
