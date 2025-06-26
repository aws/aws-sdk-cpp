/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspaceAccessProperties.h>
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

WorkspaceAccessProperties::WorkspaceAccessProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkspaceAccessProperties& WorkspaceAccessProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceTypeWindows"))
  {
    m_deviceTypeWindows = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeWindows"));
    m_deviceTypeWindowsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceTypeOsx"))
  {
    m_deviceTypeOsx = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeOsx"));
    m_deviceTypeOsxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceTypeWeb"))
  {
    m_deviceTypeWeb = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeWeb"));
    m_deviceTypeWebHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceTypeIos"))
  {
    m_deviceTypeIos = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeIos"));
    m_deviceTypeIosHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceTypeAndroid"))
  {
    m_deviceTypeAndroid = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeAndroid"));
    m_deviceTypeAndroidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceTypeChromeOs"))
  {
    m_deviceTypeChromeOs = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeChromeOs"));
    m_deviceTypeChromeOsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceTypeZeroClient"))
  {
    m_deviceTypeZeroClient = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeZeroClient"));
    m_deviceTypeZeroClientHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceTypeLinux"))
  {
    m_deviceTypeLinux = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeLinux"));
    m_deviceTypeLinuxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceTypeWorkSpacesThinClient"))
  {
    m_deviceTypeWorkSpacesThinClient = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeWorkSpacesThinClient"));
    m_deviceTypeWorkSpacesThinClientHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccessEndpointConfig"))
  {
    m_accessEndpointConfig = jsonValue.GetObject("AccessEndpointConfig");
    m_accessEndpointConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkspaceAccessProperties::Jsonize() const
{
  JsonValue payload;

  if(m_deviceTypeWindowsHasBeenSet)
  {
   payload.WithString("DeviceTypeWindows", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeWindows));
  }

  if(m_deviceTypeOsxHasBeenSet)
  {
   payload.WithString("DeviceTypeOsx", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeOsx));
  }

  if(m_deviceTypeWebHasBeenSet)
  {
   payload.WithString("DeviceTypeWeb", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeWeb));
  }

  if(m_deviceTypeIosHasBeenSet)
  {
   payload.WithString("DeviceTypeIos", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeIos));
  }

  if(m_deviceTypeAndroidHasBeenSet)
  {
   payload.WithString("DeviceTypeAndroid", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeAndroid));
  }

  if(m_deviceTypeChromeOsHasBeenSet)
  {
   payload.WithString("DeviceTypeChromeOs", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeChromeOs));
  }

  if(m_deviceTypeZeroClientHasBeenSet)
  {
   payload.WithString("DeviceTypeZeroClient", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeZeroClient));
  }

  if(m_deviceTypeLinuxHasBeenSet)
  {
   payload.WithString("DeviceTypeLinux", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeLinux));
  }

  if(m_deviceTypeWorkSpacesThinClientHasBeenSet)
  {
   payload.WithString("DeviceTypeWorkSpacesThinClient", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeWorkSpacesThinClient));
  }

  if(m_accessEndpointConfigHasBeenSet)
  {
   payload.WithObject("AccessEndpointConfig", m_accessEndpointConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
