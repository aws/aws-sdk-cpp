/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/APNSChannelResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

APNSChannelResponse::APNSChannelResponse() : 
    m_applicationIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_defaultAuthenticationMethodHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_hasCredential(false),
    m_hasCredentialHasBeenSet(false),
    m_hasTokenKey(false),
    m_hasTokenKeyHasBeenSet(false),
    m_idHasBeenSet(false),
    m_isArchived(false),
    m_isArchivedHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
}

APNSChannelResponse::APNSChannelResponse(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_defaultAuthenticationMethodHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_hasCredential(false),
    m_hasCredentialHasBeenSet(false),
    m_hasTokenKey(false),
    m_hasTokenKeyHasBeenSet(false),
    m_idHasBeenSet(false),
    m_isArchived(false),
    m_isArchivedHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

APNSChannelResponse& APNSChannelResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultAuthenticationMethod"))
  {
    m_defaultAuthenticationMethod = jsonValue.GetString("DefaultAuthenticationMethod");

    m_defaultAuthenticationMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HasCredential"))
  {
    m_hasCredential = jsonValue.GetBool("HasCredential");

    m_hasCredentialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HasTokenKey"))
  {
    m_hasTokenKey = jsonValue.GetBool("HasTokenKey");

    m_hasTokenKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsArchived"))
  {
    m_isArchived = jsonValue.GetBool("IsArchived");

    m_isArchivedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("LastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Platform"))
  {
    m_platform = jsonValue.GetString("Platform");

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInteger("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue APNSChannelResponse::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  if(m_defaultAuthenticationMethodHasBeenSet)
  {
   payload.WithString("DefaultAuthenticationMethod", m_defaultAuthenticationMethod);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_hasCredentialHasBeenSet)
  {
   payload.WithBool("HasCredential", m_hasCredential);

  }

  if(m_hasTokenKeyHasBeenSet)
  {
   payload.WithBool("HasTokenKey", m_hasTokenKey);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_isArchivedHasBeenSet)
  {
   payload.WithBool("IsArchived", m_isArchived);

  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithString("LastModifiedBy", m_lastModifiedBy);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("Platform", m_platform);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
