/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/Studio.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

Studio::Studio() : 
    m_adminRoleArnHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_homeRegionHasBeenSet(false),
    m_ssoClientIdHasBeenSet(false),
    m_state(StudioState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(StudioStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_studioEncryptionConfigurationHasBeenSet(false),
    m_studioIdHasBeenSet(false),
    m_studioNameHasBeenSet(false),
    m_studioUrlHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_userRoleArnHasBeenSet(false)
{
}

Studio::Studio(JsonView jsonValue) : 
    m_adminRoleArnHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_homeRegionHasBeenSet(false),
    m_ssoClientIdHasBeenSet(false),
    m_state(StudioState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(StudioStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_studioEncryptionConfigurationHasBeenSet(false),
    m_studioIdHasBeenSet(false),
    m_studioNameHasBeenSet(false),
    m_studioUrlHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_userRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

Studio& Studio::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adminRoleArn"))
  {
    m_adminRoleArn = jsonValue.GetString("adminRoleArn");

    m_adminRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("homeRegion"))
  {
    m_homeRegion = jsonValue.GetString("homeRegion");

    m_homeRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ssoClientId"))
  {
    m_ssoClientId = jsonValue.GetString("ssoClientId");

    m_ssoClientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = StudioStateMapper::GetStudioStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = StudioStatusCodeMapper::GetStudioStatusCodeForName(jsonValue.GetString("statusCode"));

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("studioEncryptionConfiguration"))
  {
    m_studioEncryptionConfiguration = jsonValue.GetObject("studioEncryptionConfiguration");

    m_studioEncryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("studioId"))
  {
    m_studioId = jsonValue.GetString("studioId");

    m_studioIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("studioName"))
  {
    m_studioName = jsonValue.GetString("studioName");

    m_studioNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("studioUrl"))
  {
    m_studioUrl = jsonValue.GetString("studioUrl");

    m_studioUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userRoleArn"))
  {
    m_userRoleArn = jsonValue.GetString("userRoleArn");

    m_userRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Studio::Jsonize() const
{
  JsonValue payload;

  if(m_adminRoleArnHasBeenSet)
  {
   payload.WithString("adminRoleArn", m_adminRoleArn);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_homeRegionHasBeenSet)
  {
   payload.WithString("homeRegion", m_homeRegion);

  }

  if(m_ssoClientIdHasBeenSet)
  {
   payload.WithString("ssoClientId", m_ssoClientId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", StudioStateMapper::GetNameForStudioState(m_state));
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", StudioStatusCodeMapper::GetNameForStudioStatusCode(m_statusCode));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_studioEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("studioEncryptionConfiguration", m_studioEncryptionConfiguration.Jsonize());

  }

  if(m_studioIdHasBeenSet)
  {
   payload.WithString("studioId", m_studioId);

  }

  if(m_studioNameHasBeenSet)
  {
   payload.WithString("studioName", m_studioName);

  }

  if(m_studioUrlHasBeenSet)
  {
   payload.WithString("studioUrl", m_studioUrl);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_userRoleArnHasBeenSet)
  {
   payload.WithString("userRoleArn", m_userRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
