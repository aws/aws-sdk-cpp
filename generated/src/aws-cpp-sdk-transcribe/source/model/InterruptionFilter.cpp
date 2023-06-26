/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/InterruptionFilter.h>
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

InterruptionFilter::InterruptionFilter() : 
    m_threshold(0),
    m_thresholdHasBeenSet(false),
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_absoluteTimeRangeHasBeenSet(false),
    m_relativeTimeRangeHasBeenSet(false),
    m_negate(false),
    m_negateHasBeenSet(false)
{
}

InterruptionFilter::InterruptionFilter(JsonView jsonValue) : 
    m_threshold(0),
    m_thresholdHasBeenSet(false),
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_absoluteTimeRangeHasBeenSet(false),
    m_relativeTimeRangeHasBeenSet(false),
    m_negate(false),
    m_negateHasBeenSet(false)
{
  *this = jsonValue;
}

InterruptionFilter& InterruptionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Threshold"))
  {
    m_threshold = jsonValue.GetInt64("Threshold");

    m_thresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParticipantRole"))
  {
    m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(jsonValue.GetString("ParticipantRole"));

    m_participantRoleHasBeenSet = true;
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

  if(jsonValue.ValueExists("Negate"))
  {
    m_negate = jsonValue.GetBool("Negate");

    m_negateHasBeenSet = true;
  }

  return *this;
}

JsonValue InterruptionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_thresholdHasBeenSet)
  {
   payload.WithInt64("Threshold", m_threshold);

  }

  if(m_participantRoleHasBeenSet)
  {
   payload.WithString("ParticipantRole", ParticipantRoleMapper::GetNameForParticipantRole(m_participantRole));
  }

  if(m_absoluteTimeRangeHasBeenSet)
  {
   payload.WithObject("AbsoluteTimeRange", m_absoluteTimeRange.Jsonize());

  }

  if(m_relativeTimeRangeHasBeenSet)
  {
   payload.WithObject("RelativeTimeRange", m_relativeTimeRange.Jsonize());

  }

  if(m_negateHasBeenSet)
  {
   payload.WithBool("Negate", m_negate);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
