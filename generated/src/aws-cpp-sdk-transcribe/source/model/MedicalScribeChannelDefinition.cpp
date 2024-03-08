/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/MedicalScribeChannelDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

MedicalScribeChannelDefinition::MedicalScribeChannelDefinition() : 
    m_channelId(0),
    m_channelIdHasBeenSet(false),
    m_participantRole(MedicalScribeParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false)
{
}

MedicalScribeChannelDefinition::MedicalScribeChannelDefinition(JsonView jsonValue) : 
    m_channelId(0),
    m_channelIdHasBeenSet(false),
    m_participantRole(MedicalScribeParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false)
{
  *this = jsonValue;
}

MedicalScribeChannelDefinition& MedicalScribeChannelDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelId"))
  {
    m_channelId = jsonValue.GetInteger("ChannelId");

    m_channelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParticipantRole"))
  {
    m_participantRole = MedicalScribeParticipantRoleMapper::GetMedicalScribeParticipantRoleForName(jsonValue.GetString("ParticipantRole"));

    m_participantRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue MedicalScribeChannelDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_channelIdHasBeenSet)
  {
   payload.WithInteger("ChannelId", m_channelId);

  }

  if(m_participantRoleHasBeenSet)
  {
   payload.WithString("ParticipantRole", MedicalScribeParticipantRoleMapper::GetNameForMedicalScribeParticipantRole(m_participantRole));
  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
