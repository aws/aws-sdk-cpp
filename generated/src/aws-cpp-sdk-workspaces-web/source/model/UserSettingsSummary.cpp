/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/UserSettingsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

UserSettingsSummary::UserSettingsSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

UserSettingsSummary& UserSettingsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userSettingsArn"))
  {
    m_userSettingsArn = jsonValue.GetString("userSettingsArn");
    m_userSettingsArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("copyAllowed"))
  {
    m_copyAllowed = EnabledTypeMapper::GetEnabledTypeForName(jsonValue.GetString("copyAllowed"));
    m_copyAllowedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pasteAllowed"))
  {
    m_pasteAllowed = EnabledTypeMapper::GetEnabledTypeForName(jsonValue.GetString("pasteAllowed"));
    m_pasteAllowedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("downloadAllowed"))
  {
    m_downloadAllowed = EnabledTypeMapper::GetEnabledTypeForName(jsonValue.GetString("downloadAllowed"));
    m_downloadAllowedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uploadAllowed"))
  {
    m_uploadAllowed = EnabledTypeMapper::GetEnabledTypeForName(jsonValue.GetString("uploadAllowed"));
    m_uploadAllowedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("printAllowed"))
  {
    m_printAllowed = EnabledTypeMapper::GetEnabledTypeForName(jsonValue.GetString("printAllowed"));
    m_printAllowedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("disconnectTimeoutInMinutes"))
  {
    m_disconnectTimeoutInMinutes = jsonValue.GetInteger("disconnectTimeoutInMinutes");
    m_disconnectTimeoutInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("idleDisconnectTimeoutInMinutes"))
  {
    m_idleDisconnectTimeoutInMinutes = jsonValue.GetInteger("idleDisconnectTimeoutInMinutes");
    m_idleDisconnectTimeoutInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cookieSynchronizationConfiguration"))
  {
    m_cookieSynchronizationConfiguration = jsonValue.GetObject("cookieSynchronizationConfiguration");
    m_cookieSynchronizationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deepLinkAllowed"))
  {
    m_deepLinkAllowed = EnabledTypeMapper::GetEnabledTypeForName(jsonValue.GetString("deepLinkAllowed"));
    m_deepLinkAllowedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("toolbarConfiguration"))
  {
    m_toolbarConfiguration = jsonValue.GetObject("toolbarConfiguration");
    m_toolbarConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue UserSettingsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_userSettingsArnHasBeenSet)
  {
   payload.WithString("userSettingsArn", m_userSettingsArn);

  }

  if(m_copyAllowedHasBeenSet)
  {
   payload.WithString("copyAllowed", EnabledTypeMapper::GetNameForEnabledType(m_copyAllowed));
  }

  if(m_pasteAllowedHasBeenSet)
  {
   payload.WithString("pasteAllowed", EnabledTypeMapper::GetNameForEnabledType(m_pasteAllowed));
  }

  if(m_downloadAllowedHasBeenSet)
  {
   payload.WithString("downloadAllowed", EnabledTypeMapper::GetNameForEnabledType(m_downloadAllowed));
  }

  if(m_uploadAllowedHasBeenSet)
  {
   payload.WithString("uploadAllowed", EnabledTypeMapper::GetNameForEnabledType(m_uploadAllowed));
  }

  if(m_printAllowedHasBeenSet)
  {
   payload.WithString("printAllowed", EnabledTypeMapper::GetNameForEnabledType(m_printAllowed));
  }

  if(m_disconnectTimeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("disconnectTimeoutInMinutes", m_disconnectTimeoutInMinutes);

  }

  if(m_idleDisconnectTimeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("idleDisconnectTimeoutInMinutes", m_idleDisconnectTimeoutInMinutes);

  }

  if(m_cookieSynchronizationConfigurationHasBeenSet)
  {
   payload.WithObject("cookieSynchronizationConfiguration", m_cookieSynchronizationConfiguration.Jsonize());

  }

  if(m_deepLinkAllowedHasBeenSet)
  {
   payload.WithString("deepLinkAllowed", EnabledTypeMapper::GetNameForEnabledType(m_deepLinkAllowed));
  }

  if(m_toolbarConfigurationHasBeenSet)
  {
   payload.WithObject("toolbarConfiguration", m_toolbarConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
