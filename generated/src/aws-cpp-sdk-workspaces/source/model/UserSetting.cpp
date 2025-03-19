/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/UserSetting.h>
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

UserSetting::UserSetting(JsonView jsonValue)
{
  *this = jsonValue;
}

UserSetting& UserSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = UserSettingActionEnumMapper::GetUserSettingActionEnumForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Permission"))
  {
    m_permission = UserSettingPermissionEnumMapper::GetUserSettingPermissionEnumForName(jsonValue.GetString("Permission"));
    m_permissionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaximumLength"))
  {
    m_maximumLength = jsonValue.GetInteger("MaximumLength");
    m_maximumLengthHasBeenSet = true;
  }
  return *this;
}

JsonValue UserSetting::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", UserSettingActionEnumMapper::GetNameForUserSettingActionEnum(m_action));
  }

  if(m_permissionHasBeenSet)
  {
   payload.WithString("Permission", UserSettingPermissionEnumMapper::GetNameForUserSettingPermissionEnum(m_permission));
  }

  if(m_maximumLengthHasBeenSet)
  {
   payload.WithInteger("MaximumLength", m_maximumLength);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
