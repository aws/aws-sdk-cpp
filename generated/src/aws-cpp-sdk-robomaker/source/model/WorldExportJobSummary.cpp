/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/WorldExportJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

WorldExportJobSummary::WorldExportJobSummary() : 
    m_arnHasBeenSet(false),
    m_status(WorldExportJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_worldsHasBeenSet(false),
    m_outputLocationHasBeenSet(false)
{
}

WorldExportJobSummary::WorldExportJobSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_status(WorldExportJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_worldsHasBeenSet(false),
    m_outputLocationHasBeenSet(false)
{
  *this = jsonValue;
}

WorldExportJobSummary& WorldExportJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorldExportJobStatusMapper::GetWorldExportJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("worlds"))
  {
    Aws::Utils::Array<JsonView> worldsJsonList = jsonValue.GetArray("worlds");
    for(unsigned worldsIndex = 0; worldsIndex < worldsJsonList.GetLength(); ++worldsIndex)
    {
      m_worlds.push_back(worldsJsonList[worldsIndex].AsString());
    }
    m_worldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputLocation"))
  {
    m_outputLocation = jsonValue.GetObject("outputLocation");

    m_outputLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue WorldExportJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WorldExportJobStatusMapper::GetNameForWorldExportJobStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_worldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> worldsJsonList(m_worlds.size());
   for(unsigned worldsIndex = 0; worldsIndex < worldsJsonList.GetLength(); ++worldsIndex)
   {
     worldsJsonList[worldsIndex].AsString(m_worlds[worldsIndex]);
   }
   payload.WithArray("worlds", std::move(worldsJsonList));

  }

  if(m_outputLocationHasBeenSet)
  {
   payload.WithObject("outputLocation", m_outputLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
