/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/LaunchProfileMembership.h>
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

LaunchProfileMembership::LaunchProfileMembership() : 
    m_identityStoreIdHasBeenSet(false),
    m_persona(LaunchProfilePersona::NOT_SET),
    m_personaHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_sidHasBeenSet(false)
{
}

LaunchProfileMembership::LaunchProfileMembership(JsonView jsonValue) : 
    m_identityStoreIdHasBeenSet(false),
    m_persona(LaunchProfilePersona::NOT_SET),
    m_personaHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_sidHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchProfileMembership& LaunchProfileMembership::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identityStoreId"))
  {
    m_identityStoreId = jsonValue.GetString("identityStoreId");

    m_identityStoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("persona"))
  {
    m_persona = LaunchProfilePersonaMapper::GetLaunchProfilePersonaForName(jsonValue.GetString("persona"));

    m_personaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalId"))
  {
    m_principalId = jsonValue.GetString("principalId");

    m_principalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sid"))
  {
    m_sid = jsonValue.GetString("sid");

    m_sidHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchProfileMembership::Jsonize() const
{
  JsonValue payload;

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("identityStoreId", m_identityStoreId);

  }

  if(m_personaHasBeenSet)
  {
   payload.WithString("persona", LaunchProfilePersonaMapper::GetNameForLaunchProfilePersona(m_persona));
  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("principalId", m_principalId);

  }

  if(m_sidHasBeenSet)
  {
   payload.WithString("sid", m_sid);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
