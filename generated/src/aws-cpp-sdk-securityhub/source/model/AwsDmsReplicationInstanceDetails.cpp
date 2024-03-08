/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDmsReplicationInstanceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsDmsReplicationInstanceDetails::AwsDmsReplicationInstanceDetails() : 
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_replicationInstanceClassHasBeenSet(false),
    m_replicationInstanceIdentifierHasBeenSet(false),
    m_replicationSubnetGroupHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false)
{
}

AwsDmsReplicationInstanceDetails::AwsDmsReplicationInstanceDetails(JsonView jsonValue) : 
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_replicationInstanceClassHasBeenSet(false),
    m_replicationInstanceIdentifierHasBeenSet(false),
    m_replicationSubnetGroupHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDmsReplicationInstanceDetails& AwsDmsReplicationInstanceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllocatedStorage"))
  {
    m_allocatedStorage = jsonValue.GetInteger("AllocatedStorage");

    m_allocatedStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoMinorVersionUpgrade"))
  {
    m_autoMinorVersionUpgrade = jsonValue.GetBool("AutoMinorVersionUpgrade");

    m_autoMinorVersionUpgradeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MultiAZ"))
  {
    m_multiAZ = jsonValue.GetBool("MultiAZ");

    m_multiAZHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredMaintenanceWindow"))
  {
    m_preferredMaintenanceWindow = jsonValue.GetString("PreferredMaintenanceWindow");

    m_preferredMaintenanceWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PubliclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetBool("PubliclyAccessible");

    m_publiclyAccessibleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationInstanceClass"))
  {
    m_replicationInstanceClass = jsonValue.GetString("ReplicationInstanceClass");

    m_replicationInstanceClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationInstanceIdentifier"))
  {
    m_replicationInstanceIdentifier = jsonValue.GetString("ReplicationInstanceIdentifier");

    m_replicationInstanceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationSubnetGroup"))
  {
    m_replicationSubnetGroup = jsonValue.GetObject("ReplicationSubnetGroup");

    m_replicationSubnetGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcSecurityGroups"))
  {
    Aws::Utils::Array<JsonView> vpcSecurityGroupsJsonList = jsonValue.GetArray("VpcSecurityGroups");
    for(unsigned vpcSecurityGroupsIndex = 0; vpcSecurityGroupsIndex < vpcSecurityGroupsJsonList.GetLength(); ++vpcSecurityGroupsIndex)
    {
      m_vpcSecurityGroups.push_back(vpcSecurityGroupsJsonList[vpcSecurityGroupsIndex].AsObject());
    }
    m_vpcSecurityGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDmsReplicationInstanceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_allocatedStorageHasBeenSet)
  {
   payload.WithInteger("AllocatedStorage", m_allocatedStorage);

  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
   payload.WithBool("AutoMinorVersionUpgrade", m_autoMinorVersionUpgrade);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_multiAZHasBeenSet)
  {
   payload.WithBool("MultiAZ", m_multiAZ);

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("PreferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("PubliclyAccessible", m_publiclyAccessible);

  }

  if(m_replicationInstanceClassHasBeenSet)
  {
   payload.WithString("ReplicationInstanceClass", m_replicationInstanceClass);

  }

  if(m_replicationInstanceIdentifierHasBeenSet)
  {
   payload.WithString("ReplicationInstanceIdentifier", m_replicationInstanceIdentifier);

  }

  if(m_replicationSubnetGroupHasBeenSet)
  {
   payload.WithObject("ReplicationSubnetGroup", m_replicationSubnetGroup.Jsonize());

  }

  if(m_vpcSecurityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcSecurityGroupsJsonList(m_vpcSecurityGroups.size());
   for(unsigned vpcSecurityGroupsIndex = 0; vpcSecurityGroupsIndex < vpcSecurityGroupsJsonList.GetLength(); ++vpcSecurityGroupsIndex)
   {
     vpcSecurityGroupsJsonList[vpcSecurityGroupsIndex].AsObject(m_vpcSecurityGroups[vpcSecurityGroupsIndex].Jsonize());
   }
   payload.WithArray("VpcSecurityGroups", std::move(vpcSecurityGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
