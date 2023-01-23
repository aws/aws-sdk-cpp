/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/Connector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

Connector::Connector() : 
    m_connectorIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_status(ConnectorStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_capabilityListHasBeenSet(false),
    m_vmManagerNameHasBeenSet(false),
    m_vmManagerType(VmManagerType::NOT_SET),
    m_vmManagerTypeHasBeenSet(false),
    m_vmManagerIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_associatedOnHasBeenSet(false)
{
}

Connector::Connector(JsonView jsonValue) : 
    m_connectorIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_status(ConnectorStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_capabilityListHasBeenSet(false),
    m_vmManagerNameHasBeenSet(false),
    m_vmManagerType(VmManagerType::NOT_SET),
    m_vmManagerTypeHasBeenSet(false),
    m_vmManagerIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_associatedOnHasBeenSet(false)
{
  *this = jsonValue;
}

Connector& Connector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectorId"))
  {
    m_connectorId = jsonValue.GetString("connectorId");

    m_connectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ConnectorStatusMapper::GetConnectorStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("capabilityList"))
  {
    Aws::Utils::Array<JsonView> capabilityListJsonList = jsonValue.GetArray("capabilityList");
    for(unsigned capabilityListIndex = 0; capabilityListIndex < capabilityListJsonList.GetLength(); ++capabilityListIndex)
    {
      m_capabilityList.push_back(ConnectorCapabilityMapper::GetConnectorCapabilityForName(capabilityListJsonList[capabilityListIndex].AsString()));
    }
    m_capabilityListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vmManagerName"))
  {
    m_vmManagerName = jsonValue.GetString("vmManagerName");

    m_vmManagerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vmManagerType"))
  {
    m_vmManagerType = VmManagerTypeMapper::GetVmManagerTypeForName(jsonValue.GetString("vmManagerType"));

    m_vmManagerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vmManagerId"))
  {
    m_vmManagerId = jsonValue.GetString("vmManagerId");

    m_vmManagerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("macAddress"))
  {
    m_macAddress = jsonValue.GetString("macAddress");

    m_macAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associatedOn"))
  {
    m_associatedOn = jsonValue.GetDouble("associatedOn");

    m_associatedOnHasBeenSet = true;
  }

  return *this;
}

JsonValue Connector::Jsonize() const
{
  JsonValue payload;

  if(m_connectorIdHasBeenSet)
  {
   payload.WithString("connectorId", m_connectorId);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ConnectorStatusMapper::GetNameForConnectorStatus(m_status));
  }

  if(m_capabilityListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capabilityListJsonList(m_capabilityList.size());
   for(unsigned capabilityListIndex = 0; capabilityListIndex < capabilityListJsonList.GetLength(); ++capabilityListIndex)
   {
     capabilityListJsonList[capabilityListIndex].AsString(ConnectorCapabilityMapper::GetNameForConnectorCapability(m_capabilityList[capabilityListIndex]));
   }
   payload.WithArray("capabilityList", std::move(capabilityListJsonList));

  }

  if(m_vmManagerNameHasBeenSet)
  {
   payload.WithString("vmManagerName", m_vmManagerName);

  }

  if(m_vmManagerTypeHasBeenSet)
  {
   payload.WithString("vmManagerType", VmManagerTypeMapper::GetNameForVmManagerType(m_vmManagerType));
  }

  if(m_vmManagerIdHasBeenSet)
  {
   payload.WithString("vmManagerId", m_vmManagerId);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  if(m_macAddressHasBeenSet)
  {
   payload.WithString("macAddress", m_macAddress);

  }

  if(m_associatedOnHasBeenSet)
  {
   payload.WithDouble("associatedOn", m_associatedOn.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
