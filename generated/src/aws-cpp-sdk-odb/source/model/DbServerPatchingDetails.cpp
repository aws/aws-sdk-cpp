/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/DbServerPatchingDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

DbServerPatchingDetails::DbServerPatchingDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

DbServerPatchingDetails& DbServerPatchingDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("estimatedPatchDuration"))
  {
    m_estimatedPatchDuration = jsonValue.GetInteger("estimatedPatchDuration");
    m_estimatedPatchDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("patchingStatus"))
  {
    m_patchingStatus = DbServerPatchingStatusMapper::GetDbServerPatchingStatusForName(jsonValue.GetString("patchingStatus"));
    m_patchingStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timePatchingEnded"))
  {
    m_timePatchingEnded = jsonValue.GetString("timePatchingEnded");
    m_timePatchingEndedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timePatchingStarted"))
  {
    m_timePatchingStarted = jsonValue.GetString("timePatchingStarted");
    m_timePatchingStartedHasBeenSet = true;
  }
  return *this;
}

JsonValue DbServerPatchingDetails::Jsonize() const
{
  JsonValue payload;

  if(m_estimatedPatchDurationHasBeenSet)
  {
   payload.WithInteger("estimatedPatchDuration", m_estimatedPatchDuration);

  }

  if(m_patchingStatusHasBeenSet)
  {
   payload.WithString("patchingStatus", DbServerPatchingStatusMapper::GetNameForDbServerPatchingStatus(m_patchingStatus));
  }

  if(m_timePatchingEndedHasBeenSet)
  {
   payload.WithString("timePatchingEnded", m_timePatchingEnded);

  }

  if(m_timePatchingStartedHasBeenSet)
  {
   payload.WithString("timePatchingStarted", m_timePatchingStarted);

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
