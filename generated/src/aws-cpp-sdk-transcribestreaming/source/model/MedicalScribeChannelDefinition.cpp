/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribeChannelDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

MedicalScribeChannelDefinition::MedicalScribeChannelDefinition(JsonView jsonValue)
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
} // namespace TranscribeStreamingService
} // namespace Aws
