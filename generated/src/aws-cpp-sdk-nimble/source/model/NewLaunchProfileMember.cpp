/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/NewLaunchProfileMember.h>
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

NewLaunchProfileMember::NewLaunchProfileMember() : 
    m_persona(LaunchProfilePersona::NOT_SET),
    m_personaHasBeenSet(false),
    m_principalIdHasBeenSet(false)
{
}

NewLaunchProfileMember::NewLaunchProfileMember(JsonView jsonValue) : 
    m_persona(LaunchProfilePersona::NOT_SET),
    m_personaHasBeenSet(false),
    m_principalIdHasBeenSet(false)
{
  *this = jsonValue;
}

NewLaunchProfileMember& NewLaunchProfileMember::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue NewLaunchProfileMember::Jsonize() const
{
  JsonValue payload;

  if(m_personaHasBeenSet)
  {
   payload.WithString("persona", LaunchProfilePersonaMapper::GetNameForLaunchProfilePersona(m_persona));
  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("principalId", m_principalId);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
