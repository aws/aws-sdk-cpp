/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/UpdateProgramTransition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

UpdateProgramTransition::UpdateProgramTransition() : 
    m_durationMillis(0),
    m_durationMillisHasBeenSet(false),
    m_scheduledStartTimeMillis(0),
    m_scheduledStartTimeMillisHasBeenSet(false)
{
}

UpdateProgramTransition::UpdateProgramTransition(JsonView jsonValue) : 
    m_durationMillis(0),
    m_durationMillisHasBeenSet(false),
    m_scheduledStartTimeMillis(0),
    m_scheduledStartTimeMillisHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateProgramTransition& UpdateProgramTransition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DurationMillis"))
  {
    m_durationMillis = jsonValue.GetInt64("DurationMillis");

    m_durationMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduledStartTimeMillis"))
  {
    m_scheduledStartTimeMillis = jsonValue.GetInt64("ScheduledStartTimeMillis");

    m_scheduledStartTimeMillisHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateProgramTransition::Jsonize() const
{
  JsonValue payload;

  if(m_durationMillisHasBeenSet)
  {
   payload.WithInt64("DurationMillis", m_durationMillis);

  }

  if(m_scheduledStartTimeMillisHasBeenSet)
  {
   payload.WithInt64("ScheduledStartTimeMillis", m_scheduledStartTimeMillis);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
