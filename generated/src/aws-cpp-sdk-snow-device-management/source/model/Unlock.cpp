/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/Unlock.h>
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

Unlock::Unlock()
{
}

Unlock::Unlock(JsonView jsonValue)
{
  *this = jsonValue;
}

Unlock& Unlock::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue Unlock::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
