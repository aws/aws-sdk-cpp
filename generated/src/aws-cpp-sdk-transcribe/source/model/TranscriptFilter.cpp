/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/TranscriptFilter.h>
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

TranscriptFilter::TranscriptFilter() : 
    m_transcriptFilterType(TranscriptFilterType::NOT_SET),
    m_transcriptFilterTypeHasBeenSet(false),
    m_absoluteTimeRangeHasBeenSet(false),
    m_relativeTimeRangeHasBeenSet(false),
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_negate(false),
    m_negateHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
}

TranscriptFilter::TranscriptFilter(JsonView jsonValue) : 
    m_transcriptFilterType(TranscriptFilterType::NOT_SET),
    m_transcriptFilterTypeHasBeenSet(false),
    m_absoluteTimeRangeHasBeenSet(false),
    m_relativeTimeRangeHasBeenSet(false),
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_negate(false),
    m_negateHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
  *this = jsonValue;
}

TranscriptFilter& TranscriptFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TranscriptFilterType"))
  {
    m_transcriptFilterType = TranscriptFilterTypeMapper::GetTranscriptFilterTypeForName(jsonValue.GetString("TranscriptFilterType"));

    m_transcriptFilterTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AbsoluteTimeRange"))
  {
    m_absoluteTimeRange = jsonValue.GetObject("AbsoluteTimeRange");

    m_absoluteTimeRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelativeTimeRange"))
  {
    m_relativeTimeRange = jsonValue.GetObject("RelativeTimeRange");

    m_relativeTimeRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParticipantRole"))
  {
    m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(jsonValue.GetString("ParticipantRole"));

    m_participantRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Negate"))
  {
    m_negate = jsonValue.GetBool("Negate");

    m_negateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Targets"))
  {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsString());
    }
    m_targetsHasBeenSet = true;
  }

  return *this;
}

JsonValue TranscriptFilter::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptFilterTypeHasBeenSet)
  {
   payload.WithString("TranscriptFilterType", TranscriptFilterTypeMapper::GetNameForTranscriptFilterType(m_transcriptFilterType));
  }

  if(m_absoluteTimeRangeHasBeenSet)
  {
   payload.WithObject("AbsoluteTimeRange", m_absoluteTimeRange.Jsonize());

  }

  if(m_relativeTimeRangeHasBeenSet)
  {
   payload.WithObject("RelativeTimeRange", m_relativeTimeRange.Jsonize());

  }

  if(m_participantRoleHasBeenSet)
  {
   payload.WithString("ParticipantRole", ParticipantRoleMapper::GetNameForParticipantRole(m_participantRole));
  }

  if(m_negateHasBeenSet)
  {
   payload.WithBool("Negate", m_negate);

  }

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsString(m_targets[targetsIndex]);
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
