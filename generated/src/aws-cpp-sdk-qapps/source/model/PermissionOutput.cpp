/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/PermissionOutput.h>
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

PermissionOutput::PermissionOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

PermissionOutput& PermissionOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = PermissionOutputActionEnumMapper::GetPermissionOutputActionEnumForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("principal"))
  {
    m_principal = jsonValue.GetObject("principal");
    m_principalHasBeenSet = true;
  }
  return *this;
}

JsonValue PermissionOutput::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", PermissionOutputActionEnumMapper::GetNameForPermissionOutputActionEnum(m_action));
  }

  if(m_principalHasBeenSet)
  {
   payload.WithObject("principal", m_principal.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
