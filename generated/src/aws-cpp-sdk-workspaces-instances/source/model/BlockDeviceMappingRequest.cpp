﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/BlockDeviceMappingRequest.h>
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

BlockDeviceMappingRequest::BlockDeviceMappingRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

BlockDeviceMappingRequest& BlockDeviceMappingRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceName"))
  {
    m_deviceName = jsonValue.GetString("DeviceName");
    m_deviceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ebs"))
  {
    m_ebs = jsonValue.GetObject("Ebs");
    m_ebsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NoDevice"))
  {
    m_noDevice = jsonValue.GetString("NoDevice");
    m_noDeviceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VirtualName"))
  {
    m_virtualName = jsonValue.GetString("VirtualName");
    m_virtualNameHasBeenSet = true;
  }
  return *this;
}

JsonValue BlockDeviceMappingRequest::Jsonize() const
{
  JsonValue payload;

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("DeviceName", m_deviceName);

  }

  if(m_ebsHasBeenSet)
  {
   payload.WithObject("Ebs", m_ebs.Jsonize());

  }

  if(m_noDeviceHasBeenSet)
  {
   payload.WithString("NoDevice", m_noDevice);

  }

  if(m_virtualNameHasBeenSet)
  {
   payload.WithString("VirtualName", m_virtualName);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
