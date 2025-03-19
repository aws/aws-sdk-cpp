/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ApplicationSettingsRequest.h>
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

ApplicationSettingsRequest::ApplicationSettingsRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

ApplicationSettingsRequest& ApplicationSettingsRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ApplicationSettingsStatusEnumMapper::GetApplicationSettingsStatusEnumForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SettingsGroup"))
  {
    m_settingsGroup = jsonValue.GetString("SettingsGroup");
    m_settingsGroupHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationSettingsRequest::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ApplicationSettingsStatusEnumMapper::GetNameForApplicationSettingsStatusEnum(m_status));
  }

  if(m_settingsGroupHasBeenSet)
  {
   payload.WithString("SettingsGroup", m_settingsGroup);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
