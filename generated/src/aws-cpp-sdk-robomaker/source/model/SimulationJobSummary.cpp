/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/SimulationJobSummary.h>
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

SimulationJobSummary::SimulationJobSummary() : 
    m_arnHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(SimulationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_simulationApplicationNamesHasBeenSet(false),
    m_robotApplicationNamesHasBeenSet(false),
    m_dataSourceNamesHasBeenSet(false),
    m_computeType(ComputeType::NOT_SET),
    m_computeTypeHasBeenSet(false)
{
}

SimulationJobSummary::SimulationJobSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(SimulationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_simulationApplicationNamesHasBeenSet(false),
    m_robotApplicationNamesHasBeenSet(false),
    m_dataSourceNamesHasBeenSet(false),
    m_computeType(ComputeType::NOT_SET),
    m_computeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SimulationJobSummary& SimulationJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SimulationJobStatusMapper::GetSimulationJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("simulationApplicationNames"))
  {
    Aws::Utils::Array<JsonView> simulationApplicationNamesJsonList = jsonValue.GetArray("simulationApplicationNames");
    for(unsigned simulationApplicationNamesIndex = 0; simulationApplicationNamesIndex < simulationApplicationNamesJsonList.GetLength(); ++simulationApplicationNamesIndex)
    {
      m_simulationApplicationNames.push_back(simulationApplicationNamesJsonList[simulationApplicationNamesIndex].AsString());
    }
    m_simulationApplicationNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("robotApplicationNames"))
  {
    Aws::Utils::Array<JsonView> robotApplicationNamesJsonList = jsonValue.GetArray("robotApplicationNames");
    for(unsigned robotApplicationNamesIndex = 0; robotApplicationNamesIndex < robotApplicationNamesJsonList.GetLength(); ++robotApplicationNamesIndex)
    {
      m_robotApplicationNames.push_back(robotApplicationNamesJsonList[robotApplicationNamesIndex].AsString());
    }
    m_robotApplicationNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSourceNames"))
  {
    Aws::Utils::Array<JsonView> dataSourceNamesJsonList = jsonValue.GetArray("dataSourceNames");
    for(unsigned dataSourceNamesIndex = 0; dataSourceNamesIndex < dataSourceNamesJsonList.GetLength(); ++dataSourceNamesIndex)
    {
      m_dataSourceNames.push_back(dataSourceNamesJsonList[dataSourceNamesIndex].AsString());
    }
    m_dataSourceNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("computeType"))
  {
    m_computeType = ComputeTypeMapper::GetComputeTypeForName(jsonValue.GetString("computeType"));

    m_computeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SimulationJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SimulationJobStatusMapper::GetNameForSimulationJobStatus(m_status));
  }

  if(m_simulationApplicationNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> simulationApplicationNamesJsonList(m_simulationApplicationNames.size());
   for(unsigned simulationApplicationNamesIndex = 0; simulationApplicationNamesIndex < simulationApplicationNamesJsonList.GetLength(); ++simulationApplicationNamesIndex)
   {
     simulationApplicationNamesJsonList[simulationApplicationNamesIndex].AsString(m_simulationApplicationNames[simulationApplicationNamesIndex]);
   }
   payload.WithArray("simulationApplicationNames", std::move(simulationApplicationNamesJsonList));

  }

  if(m_robotApplicationNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> robotApplicationNamesJsonList(m_robotApplicationNames.size());
   for(unsigned robotApplicationNamesIndex = 0; robotApplicationNamesIndex < robotApplicationNamesJsonList.GetLength(); ++robotApplicationNamesIndex)
   {
     robotApplicationNamesJsonList[robotApplicationNamesIndex].AsString(m_robotApplicationNames[robotApplicationNamesIndex]);
   }
   payload.WithArray("robotApplicationNames", std::move(robotApplicationNamesJsonList));

  }

  if(m_dataSourceNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSourceNamesJsonList(m_dataSourceNames.size());
   for(unsigned dataSourceNamesIndex = 0; dataSourceNamesIndex < dataSourceNamesJsonList.GetLength(); ++dataSourceNamesIndex)
   {
     dataSourceNamesJsonList[dataSourceNamesIndex].AsString(m_dataSourceNames[dataSourceNamesIndex]);
   }
   payload.WithArray("dataSourceNames", std::move(dataSourceNamesJsonList));

  }

  if(m_computeTypeHasBeenSet)
  {
   payload.WithString("computeType", ComputeTypeMapper::GetNameForComputeType(m_computeType));
  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
