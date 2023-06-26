/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/JourneyRunResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

JourneyRunResponse::JourneyRunResponse() : 
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_status(JourneyRunStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

JourneyRunResponse::JourneyRunResponse(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_status(JourneyRunStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

JourneyRunResponse& JourneyRunResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetString("LastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunId"))
  {
    m_runId = jsonValue.GetString("RunId");

    m_runIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = JourneyRunStatusMapper::GetJourneyRunStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue JourneyRunResponse::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime);

  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithString("LastUpdateTime", m_lastUpdateTime);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("RunId", m_runId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", JourneyRunStatusMapper::GetNameForJourneyRunStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
