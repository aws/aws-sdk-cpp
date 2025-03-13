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

UpdateProgramTransition::UpdateProgramTransition(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateProgramTransition& UpdateProgramTransition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScheduledStartTimeMillis"))
  {
    m_scheduledStartTimeMillis = jsonValue.GetInt64("ScheduledStartTimeMillis");
    m_scheduledStartTimeMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DurationMillis"))
  {
    m_durationMillis = jsonValue.GetInt64("DurationMillis");
    m_durationMillisHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateProgramTransition::Jsonize() const
{
  JsonValue payload;

  if(m_scheduledStartTimeMillisHasBeenSet)
  {
   payload.WithInt64("ScheduledStartTimeMillis", m_scheduledStartTimeMillis);

  }

  if(m_durationMillisHasBeenSet)
  {
   payload.WithInt64("DurationMillis", m_durationMillis);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
