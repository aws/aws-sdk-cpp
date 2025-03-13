/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/PermissionsErrorContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

PermissionsErrorContext::PermissionsErrorContext(JsonView jsonValue)
{
  *this = jsonValue;
}

PermissionsErrorContext& PermissionsErrorContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MissingPermission"))
  {
    m_missingPermission = jsonValue.GetString("MissingPermission");
    m_missingPermissionHasBeenSet = true;
  }
  return *this;
}

JsonValue PermissionsErrorContext::Jsonize() const
{
  JsonValue payload;

  if(m_missingPermissionHasBeenSet)
  {
   payload.WithString("MissingPermission", m_missingPermission);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
