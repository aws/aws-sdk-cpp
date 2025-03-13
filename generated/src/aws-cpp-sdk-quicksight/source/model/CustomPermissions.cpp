/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CustomPermissions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

CustomPermissions::CustomPermissions(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomPermissions& CustomPermissions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomPermissionsName"))
  {
    m_customPermissionsName = jsonValue.GetString("CustomPermissionsName");
    m_customPermissionsNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Capabilities"))
  {
    m_capabilities = jsonValue.GetObject("Capabilities");
    m_capabilitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomPermissions::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_customPermissionsNameHasBeenSet)
  {
   payload.WithString("CustomPermissionsName", m_customPermissionsName);

  }

  if(m_capabilitiesHasBeenSet)
  {
   payload.WithObject("Capabilities", m_capabilities.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
