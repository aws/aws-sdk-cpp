﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/Reboot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{

Reboot::Reboot()
{
}

Reboot::Reboot(JsonView jsonValue)
{
  *this = jsonValue;
}

Reboot& Reboot::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue Reboot::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
