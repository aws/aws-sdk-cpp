/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/DbServerSummary.h>
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

DbServerSummary::DbServerSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

DbServerSummary& DbServerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dbServerId"))
  {
    m_dbServerId = jsonValue.GetString("dbServerId");
    m_dbServerIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("dbServerPatchingDetails"))
  {
    m_dbServerPatchingDetails = jsonValue.GetObject("dbServerPatchingDetails");
    m_dbServerPatchingDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exadataInfrastructureId"))
  {
    m_exadataInfrastructureId = jsonValue.GetString("exadataInfrastructureId");
    m_exadataInfrastructureIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("maxCpuCount"))
  {
    m_maxCpuCount = jsonValue.GetInteger("maxCpuCount");
    m_maxCpuCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxDbNodeStorageInGBs"))
  {
    m_maxDbNodeStorageInGBs = jsonValue.GetInteger("maxDbNodeStorageInGBs");
    m_maxDbNodeStorageInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxMemoryInGBs"))
  {
    m_maxMemoryInGBs = jsonValue.GetInteger("maxMemoryInGBs");
    m_maxMemoryInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memorySizeInGBs"))
  {
    m_memorySizeInGBs = jsonValue.GetInteger("memorySizeInGBs");
    m_memorySizeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shape"))
  {
    m_shape = jsonValue.GetString("shape");
    m_shapeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vmClusterIds"))
  {
    Aws::Utils::Array<JsonView> vmClusterIdsJsonList = jsonValue.GetArray("vmClusterIds");
    for(unsigned vmClusterIdsIndex = 0; vmClusterIdsIndex < vmClusterIdsJsonList.GetLength(); ++vmClusterIdsIndex)
    {
      m_vmClusterIds.push_back(vmClusterIdsJsonList[vmClusterIdsIndex].AsString());
    }
    m_vmClusterIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeModel"))
  {
    m_computeModel = ComputeModelMapper::GetComputeModelForName(jsonValue.GetString("computeModel"));
    m_computeModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autonomousVmClusterIds"))
  {
    Aws::Utils::Array<JsonView> autonomousVmClusterIdsJsonList = jsonValue.GetArray("autonomousVmClusterIds");
    for(unsigned autonomousVmClusterIdsIndex = 0; autonomousVmClusterIdsIndex < autonomousVmClusterIdsJsonList.GetLength(); ++autonomousVmClusterIdsIndex)
    {
      m_autonomousVmClusterIds.push_back(autonomousVmClusterIdsJsonList[autonomousVmClusterIdsIndex].AsString());
    }
    m_autonomousVmClusterIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autonomousVirtualMachineIds"))
  {
    Aws::Utils::Array<JsonView> autonomousVirtualMachineIdsJsonList = jsonValue.GetArray("autonomousVirtualMachineIds");
    for(unsigned autonomousVirtualMachineIdsIndex = 0; autonomousVirtualMachineIdsIndex < autonomousVirtualMachineIdsJsonList.GetLength(); ++autonomousVirtualMachineIdsIndex)
    {
      m_autonomousVirtualMachineIds.push_back(autonomousVirtualMachineIdsJsonList[autonomousVirtualMachineIdsIndex].AsString());
    }
    m_autonomousVirtualMachineIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue DbServerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_dbServerIdHasBeenSet)
  {
   payload.WithString("dbServerId", m_dbServerId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_cpuCoreCountHasBeenSet)
  {
   payload.WithInteger("cpuCoreCount", m_cpuCoreCount);

  }

  if(m_dbNodeStorageSizeInGBsHasBeenSet)
  {
   payload.WithInteger("dbNodeStorageSizeInGBs", m_dbNodeStorageSizeInGBs);

  }

  if(m_dbServerPatchingDetailsHasBeenSet)
  {
   payload.WithObject("dbServerPatchingDetails", m_dbServerPatchingDetails.Jsonize());

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_exadataInfrastructureIdHasBeenSet)
  {
   payload.WithString("exadataInfrastructureId", m_exadataInfrastructureId);

  }

  if(m_ocidHasBeenSet)
  {
   payload.WithString("ocid", m_ocid);

  }

  if(m_ociResourceAnchorNameHasBeenSet)
  {
   payload.WithString("ociResourceAnchorName", m_ociResourceAnchorName);

  }

  if(m_maxCpuCountHasBeenSet)
  {
   payload.WithInteger("maxCpuCount", m_maxCpuCount);

  }

  if(m_maxDbNodeStorageInGBsHasBeenSet)
  {
   payload.WithInteger("maxDbNodeStorageInGBs", m_maxDbNodeStorageInGBs);

  }

  if(m_maxMemoryInGBsHasBeenSet)
  {
   payload.WithInteger("maxMemoryInGBs", m_maxMemoryInGBs);

  }

  if(m_memorySizeInGBsHasBeenSet)
  {
   payload.WithInteger("memorySizeInGBs", m_memorySizeInGBs);

  }

  if(m_shapeHasBeenSet)
  {
   payload.WithString("shape", m_shape);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_vmClusterIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vmClusterIdsJsonList(m_vmClusterIds.size());
   for(unsigned vmClusterIdsIndex = 0; vmClusterIdsIndex < vmClusterIdsJsonList.GetLength(); ++vmClusterIdsIndex)
   {
     vmClusterIdsJsonList[vmClusterIdsIndex].AsString(m_vmClusterIds[vmClusterIdsIndex]);
   }
   payload.WithArray("vmClusterIds", std::move(vmClusterIdsJsonList));

  }

  if(m_computeModelHasBeenSet)
  {
   payload.WithString("computeModel", ComputeModelMapper::GetNameForComputeModel(m_computeModel));
  }

  if(m_autonomousVmClusterIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> autonomousVmClusterIdsJsonList(m_autonomousVmClusterIds.size());
   for(unsigned autonomousVmClusterIdsIndex = 0; autonomousVmClusterIdsIndex < autonomousVmClusterIdsJsonList.GetLength(); ++autonomousVmClusterIdsIndex)
   {
     autonomousVmClusterIdsJsonList[autonomousVmClusterIdsIndex].AsString(m_autonomousVmClusterIds[autonomousVmClusterIdsIndex]);
   }
   payload.WithArray("autonomousVmClusterIds", std::move(autonomousVmClusterIdsJsonList));

  }

  if(m_autonomousVirtualMachineIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> autonomousVirtualMachineIdsJsonList(m_autonomousVirtualMachineIds.size());
   for(unsigned autonomousVirtualMachineIdsIndex = 0; autonomousVirtualMachineIdsIndex < autonomousVirtualMachineIdsJsonList.GetLength(); ++autonomousVirtualMachineIdsIndex)
   {
     autonomousVirtualMachineIdsJsonList[autonomousVirtualMachineIdsIndex].AsString(m_autonomousVirtualMachineIds[autonomousVirtualMachineIdsIndex]);
   }
   payload.WithArray("autonomousVirtualMachineIds", std::move(autonomousVirtualMachineIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
