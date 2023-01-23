/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/SimulationMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{

SimulationMetadata::SimulationMetadata() : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(SimulationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetStatus(SimulationTargetStatus::NOT_SET),
    m_targetStatusHasBeenSet(false)
{
}

SimulationMetadata::SimulationMetadata(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(SimulationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetStatus(SimulationTargetStatus::NOT_SET),
    m_targetStatusHasBeenSet(false)
{
  *this = jsonValue;
}

SimulationMetadata& SimulationMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SimulationStatusMapper::GetSimulationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetStatus"))
  {
    m_targetStatus = SimulationTargetStatusMapper::GetSimulationTargetStatusForName(jsonValue.GetString("TargetStatus"));

    m_targetStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue SimulationMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SimulationStatusMapper::GetNameForSimulationStatus(m_status));
  }

  if(m_targetStatusHasBeenSet)
  {
   payload.WithString("TargetStatus", SimulationTargetStatusMapper::GetNameForSimulationTargetStatus(m_targetStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
