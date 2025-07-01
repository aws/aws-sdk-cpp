/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/DbNode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

DbNode::DbNode(JsonView jsonValue)
{
  *this = jsonValue;
}

DbNode& DbNode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dbNodeId"))
  {
    m_dbNodeId = jsonValue.GetString("dbNodeId");
    m_dbNodeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbNodeArn"))
  {
    m_dbNodeArn = jsonValue.GetString("dbNodeArn");
    m_dbNodeArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = DbNodeResourceStatusMapper::GetDbNodeResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalDetails"))
  {
    m_additionalDetails = jsonValue.GetString("additionalDetails");
    m_additionalDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("backupIpId"))
  {
    m_backupIpId = jsonValue.GetString("backupIpId");
    m_backupIpIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("backupVnic2Id"))
  {
    m_backupVnic2Id = jsonValue.GetString("backupVnic2Id");
    m_backupVnic2IdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("backupVnicId"))
  {
    m_backupVnicId = jsonValue.GetString("backupVnicId");
    m_backupVnicIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cpuCoreCount"))
  {
    m_cpuCoreCount = jsonValue.GetInteger("cpuCoreCount");
    m_cpuCoreCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbNodeStorageSizeInGBs"))
  {
    m_dbNodeStorageSizeInGBs = jsonValue.GetInteger("dbNodeStorageSizeInGBs");
    m_dbNodeStorageSizeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbServerId"))
  {
    m_dbServerId = jsonValue.GetString("dbServerId");
    m_dbServerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbSystemId"))
  {
    m_dbSystemId = jsonValue.GetString("dbSystemId");
    m_dbSystemIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("faultDomain"))
  {
    m_faultDomain = jsonValue.GetString("faultDomain");
    m_faultDomainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hostIpId"))
  {
    m_hostIpId = jsonValue.GetString("hostIpId");
    m_hostIpIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetString("hostname");
    m_hostnameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ocid"))
  {
    m_ocid = jsonValue.GetString("ocid");
    m_ocidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ociResourceAnchorName"))
  {
    m_ociResourceAnchorName = jsonValue.GetString("ociResourceAnchorName");
    m_ociResourceAnchorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maintenanceType"))
  {
    m_maintenanceType = DbNodeMaintenanceTypeMapper::GetDbNodeMaintenanceTypeForName(jsonValue.GetString("maintenanceType"));
    m_maintenanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memorySizeInGBs"))
  {
    m_memorySizeInGBs = jsonValue.GetInteger("memorySizeInGBs");
    m_memorySizeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("softwareStorageSizeInGB"))
  {
    m_softwareStorageSizeInGB = jsonValue.GetInteger("softwareStorageSizeInGB");
    m_softwareStorageSizeInGBHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeMaintenanceWindowEnd"))
  {
    m_timeMaintenanceWindowEnd = jsonValue.GetString("timeMaintenanceWindowEnd");
    m_timeMaintenanceWindowEndHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeMaintenanceWindowStart"))
  {
    m_timeMaintenanceWindowStart = jsonValue.GetString("timeMaintenanceWindowStart");
    m_timeMaintenanceWindowStartHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalCpuCoreCount"))
  {
    m_totalCpuCoreCount = jsonValue.GetInteger("totalCpuCoreCount");
    m_totalCpuCoreCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vnic2Id"))
  {
    m_vnic2Id = jsonValue.GetString("vnic2Id");
    m_vnic2IdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vnicId"))
  {
    m_vnicId = jsonValue.GetString("vnicId");
    m_vnicIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("privateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("privateIpAddress");
    m_privateIpAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("floatingIpAddress"))
  {
    m_floatingIpAddress = jsonValue.GetString("floatingIpAddress");
    m_floatingIpAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue DbNode::Jsonize() const
{
  JsonValue payload;

  if(m_dbNodeIdHasBeenSet)
  {
   payload.WithString("dbNodeId", m_dbNodeId);

  }

  if(m_dbNodeArnHasBeenSet)
  {
   payload.WithString("dbNodeArn", m_dbNodeArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DbNodeResourceStatusMapper::GetNameForDbNodeResourceStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_additionalDetailsHasBeenSet)
  {
   payload.WithString("additionalDetails", m_additionalDetails);

  }

  if(m_backupIpIdHasBeenSet)
  {
   payload.WithString("backupIpId", m_backupIpId);

  }

  if(m_backupVnic2IdHasBeenSet)
  {
   payload.WithString("backupVnic2Id", m_backupVnic2Id);

  }

  if(m_backupVnicIdHasBeenSet)
  {
   payload.WithString("backupVnicId", m_backupVnicId);

  }

  if(m_cpuCoreCountHasBeenSet)
  {
   payload.WithInteger("cpuCoreCount", m_cpuCoreCount);

  }

  if(m_dbNodeStorageSizeInGBsHasBeenSet)
  {
   payload.WithInteger("dbNodeStorageSizeInGBs", m_dbNodeStorageSizeInGBs);

  }

  if(m_dbServerIdHasBeenSet)
  {
   payload.WithString("dbServerId", m_dbServerId);

  }

  if(m_dbSystemIdHasBeenSet)
  {
   payload.WithString("dbSystemId", m_dbSystemId);

  }

  if(m_faultDomainHasBeenSet)
  {
   payload.WithString("faultDomain", m_faultDomain);

  }

  if(m_hostIpIdHasBeenSet)
  {
   payload.WithString("hostIpId", m_hostIpId);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  if(m_ocidHasBeenSet)
  {
   payload.WithString("ocid", m_ocid);

  }

  if(m_ociResourceAnchorNameHasBeenSet)
  {
   payload.WithString("ociResourceAnchorName", m_ociResourceAnchorName);

  }

  if(m_maintenanceTypeHasBeenSet)
  {
   payload.WithString("maintenanceType", DbNodeMaintenanceTypeMapper::GetNameForDbNodeMaintenanceType(m_maintenanceType));
  }

  if(m_memorySizeInGBsHasBeenSet)
  {
   payload.WithInteger("memorySizeInGBs", m_memorySizeInGBs);

  }

  if(m_softwareStorageSizeInGBHasBeenSet)
  {
   payload.WithInteger("softwareStorageSizeInGB", m_softwareStorageSizeInGB);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_timeMaintenanceWindowEndHasBeenSet)
  {
   payload.WithString("timeMaintenanceWindowEnd", m_timeMaintenanceWindowEnd);

  }

  if(m_timeMaintenanceWindowStartHasBeenSet)
  {
   payload.WithString("timeMaintenanceWindowStart", m_timeMaintenanceWindowStart);

  }

  if(m_totalCpuCoreCountHasBeenSet)
  {
   payload.WithInteger("totalCpuCoreCount", m_totalCpuCoreCount);

  }

  if(m_vnic2IdHasBeenSet)
  {
   payload.WithString("vnic2Id", m_vnic2Id);

  }

  if(m_vnicIdHasBeenSet)
  {
   payload.WithString("vnicId", m_vnicId);

  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("privateIpAddress", m_privateIpAddress);

  }

  if(m_floatingIpAddressHasBeenSet)
  {
   payload.WithString("floatingIpAddress", m_floatingIpAddress);

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
