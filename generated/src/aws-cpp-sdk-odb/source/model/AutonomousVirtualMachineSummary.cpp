/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/AutonomousVirtualMachineSummary.h>
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

AutonomousVirtualMachineSummary::AutonomousVirtualMachineSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

AutonomousVirtualMachineSummary& AutonomousVirtualMachineSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autonomousVirtualMachineId"))
  {
    m_autonomousVirtualMachineId = jsonValue.GetString("autonomousVirtualMachineId");
    m_autonomousVirtualMachineIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vmName"))
  {
    m_vmName = jsonValue.GetString("vmName");
    m_vmNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbServerId"))
  {
    m_dbServerId = jsonValue.GetString("dbServerId");
    m_dbServerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbServerDisplayName"))
  {
    m_dbServerDisplayName = jsonValue.GetString("dbServerDisplayName");
    m_dbServerDisplayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cpuCoreCount"))
  {
    m_cpuCoreCount = jsonValue.GetInteger("cpuCoreCount");
    m_cpuCoreCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memorySizeInGBs"))
  {
    m_memorySizeInGBs = jsonValue.GetInteger("memorySizeInGBs");
    m_memorySizeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbNodeStorageSizeInGBs"))
  {
    m_dbNodeStorageSizeInGBs = jsonValue.GetInteger("dbNodeStorageSizeInGBs");
    m_dbNodeStorageSizeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientIpAddress"))
  {
    m_clientIpAddress = jsonValue.GetString("clientIpAddress");
    m_clientIpAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cloudAutonomousVmClusterId"))
  {
    m_cloudAutonomousVmClusterId = jsonValue.GetString("cloudAutonomousVmClusterId");
    m_cloudAutonomousVmClusterIdHasBeenSet = true;
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
  return *this;
}

JsonValue AutonomousVirtualMachineSummary::Jsonize() const
{
  JsonValue payload;

  if(m_autonomousVirtualMachineIdHasBeenSet)
  {
   payload.WithString("autonomousVirtualMachineId", m_autonomousVirtualMachineId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_vmNameHasBeenSet)
  {
   payload.WithString("vmName", m_vmName);

  }

  if(m_dbServerIdHasBeenSet)
  {
   payload.WithString("dbServerId", m_dbServerId);

  }

  if(m_dbServerDisplayNameHasBeenSet)
  {
   payload.WithString("dbServerDisplayName", m_dbServerDisplayName);

  }

  if(m_cpuCoreCountHasBeenSet)
  {
   payload.WithInteger("cpuCoreCount", m_cpuCoreCount);

  }

  if(m_memorySizeInGBsHasBeenSet)
  {
   payload.WithInteger("memorySizeInGBs", m_memorySizeInGBs);

  }

  if(m_dbNodeStorageSizeInGBsHasBeenSet)
  {
   payload.WithInteger("dbNodeStorageSizeInGBs", m_dbNodeStorageSizeInGBs);

  }

  if(m_clientIpAddressHasBeenSet)
  {
   payload.WithString("clientIpAddress", m_clientIpAddress);

  }

  if(m_cloudAutonomousVmClusterIdHasBeenSet)
  {
   payload.WithString("cloudAutonomousVmClusterId", m_cloudAutonomousVmClusterId);

  }

  if(m_ocidHasBeenSet)
  {
   payload.WithString("ocid", m_ocid);

  }

  if(m_ociResourceAnchorNameHasBeenSet)
  {
   payload.WithString("ociResourceAnchorName", m_ociResourceAnchorName);

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
