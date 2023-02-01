/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/UpdateProgramScheduleConfiguration.h>
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

UpdateProgramScheduleConfiguration::UpdateProgramScheduleConfiguration() : 
    m_clipRangeHasBeenSet(false),
    m_transitionHasBeenSet(false)
{
}

UpdateProgramScheduleConfiguration::UpdateProgramScheduleConfiguration(JsonView jsonValue) : 
    m_clipRangeHasBeenSet(false),
    m_transitionHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateProgramScheduleConfiguration& UpdateProgramScheduleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClipRange"))
  {
    m_clipRange = jsonValue.GetObject("ClipRange");

    m_clipRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Transition"))
  {
    m_transition = jsonValue.GetObject("Transition");

    m_transitionHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateProgramScheduleConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_clipRangeHasBeenSet)
  {
   payload.WithObject("ClipRange", m_clipRange.Jsonize());

  }

  if(m_transitionHasBeenSet)
  {
   payload.WithObject("Transition", m_transition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
