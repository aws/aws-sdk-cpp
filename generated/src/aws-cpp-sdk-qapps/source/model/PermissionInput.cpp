/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/PermissionInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QApps
{
namespace Model
{

PermissionInput::PermissionInput(JsonView jsonValue)
{
  *this = jsonValue;
}

PermissionInput& PermissionInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = PermissionInputActionEnumMapper::GetPermissionInputActionEnumForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("principal"))
  {
    m_principal = jsonValue.GetString("principal");
    m_principalHasBeenSet = true;
  }
  return *this;
}

JsonValue PermissionInput::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", PermissionInputActionEnumMapper::GetNameForPermissionInputActionEnum(m_action));
  }

  if(m_principalHasBeenSet)
  {
   payload.WithString("principal", m_principal);

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
