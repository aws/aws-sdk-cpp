/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspaceProperties.h>
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

WorkspaceProperties::WorkspaceProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkspaceProperties& WorkspaceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RunningMode"))
  {
    m_runningMode = RunningModeMapper::GetRunningModeForName(jsonValue.GetString("RunningMode"));
    m_runningModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RunningModeAutoStopTimeoutInMinutes"))
  {
    m_runningModeAutoStopTimeoutInMinutes = jsonValue.GetInteger("RunningModeAutoStopTimeoutInMinutes");
    m_runningModeAutoStopTimeoutInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RootVolumeSizeGib"))
  {
    m_rootVolumeSizeGib = jsonValue.GetInteger("RootVolumeSizeGib");
    m_rootVolumeSizeGibHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserVolumeSizeGib"))
  {
    m_userVolumeSizeGib = jsonValue.GetInteger("UserVolumeSizeGib");
    m_userVolumeSizeGibHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComputeTypeName"))
  {
    m_computeTypeName = ComputeMapper::GetComputeForName(jsonValue.GetString("ComputeTypeName"));
    m_computeTypeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Protocols"))
  {
    Aws::Utils::Array<JsonView> protocolsJsonList = jsonValue.GetArray("Protocols");
    for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
    {
      m_protocols.push_back(ProtocolMapper::GetProtocolForName(protocolsJsonList[protocolsIndex].AsString()));
    }
    m_protocolsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OperatingSystemName"))
  {
    m_operatingSystemName = OperatingSystemNameMapper::GetOperatingSystemNameForName(jsonValue.GetString("OperatingSystemName"));
    m_operatingSystemNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GlobalAccelerator"))
  {
    m_globalAccelerator = jsonValue.GetObject("GlobalAccelerator");
    m_globalAcceleratorHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkspaceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_runningModeHasBeenSet)
  {
   payload.WithString("RunningMode", RunningModeMapper::GetNameForRunningMode(m_runningMode));
  }

  if(m_runningModeAutoStopTimeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("RunningModeAutoStopTimeoutInMinutes", m_runningModeAutoStopTimeoutInMinutes);

  }

  if(m_rootVolumeSizeGibHasBeenSet)
  {
   payload.WithInteger("RootVolumeSizeGib", m_rootVolumeSizeGib);

  }

  if(m_userVolumeSizeGibHasBeenSet)
  {
   payload.WithInteger("UserVolumeSizeGib", m_userVolumeSizeGib);

  }

  if(m_computeTypeNameHasBeenSet)
  {
   payload.WithString("ComputeTypeName", ComputeMapper::GetNameForCompute(m_computeTypeName));
  }

  if(m_protocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsString(ProtocolMapper::GetNameForProtocol(m_protocols[protocolsIndex]));
   }
   payload.WithArray("Protocols", std::move(protocolsJsonList));

  }

  if(m_operatingSystemNameHasBeenSet)
  {
   payload.WithString("OperatingSystemName", OperatingSystemNameMapper::GetNameForOperatingSystemName(m_operatingSystemName));
  }

  if(m_globalAcceleratorHasBeenSet)
  {
   payload.WithObject("GlobalAccelerator", m_globalAccelerator.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
