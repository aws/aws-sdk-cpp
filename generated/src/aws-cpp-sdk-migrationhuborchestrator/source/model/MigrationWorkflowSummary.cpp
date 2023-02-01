/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/MigrationWorkflowSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{

MigrationWorkflowSummary::MigrationWorkflowSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_adsApplicationConfigurationNameHasBeenSet(false),
    m_status(MigrationWorkflowStatusEnum::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_completedSteps(0),
    m_completedStepsHasBeenSet(false),
    m_totalSteps(0),
    m_totalStepsHasBeenSet(false)
{
}

MigrationWorkflowSummary::MigrationWorkflowSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_adsApplicationConfigurationNameHasBeenSet(false),
    m_status(MigrationWorkflowStatusEnum::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_completedSteps(0),
    m_completedStepsHasBeenSet(false),
    m_totalSteps(0),
    m_totalStepsHasBeenSet(false)
{
  *this = jsonValue;
}

MigrationWorkflowSummary& MigrationWorkflowSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateId"))
  {
    m_templateId = jsonValue.GetString("templateId");

    m_templateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("adsApplicationConfigurationName"))
  {
    m_adsApplicationConfigurationName = jsonValue.GetString("adsApplicationConfigurationName");

    m_adsApplicationConfigurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = MigrationWorkflowStatusEnumMapper::GetMigrationWorkflowStatusEnumForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("completedSteps"))
  {
    m_completedSteps = jsonValue.GetInteger("completedSteps");

    m_completedStepsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalSteps"))
  {
    m_totalSteps = jsonValue.GetInteger("totalSteps");

    m_totalStepsHasBeenSet = true;
  }

  return *this;
}

JsonValue MigrationWorkflowSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_templateIdHasBeenSet)
  {
   payload.WithString("templateId", m_templateId);

  }

  if(m_adsApplicationConfigurationNameHasBeenSet)
  {
   payload.WithString("adsApplicationConfigurationName", m_adsApplicationConfigurationName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", MigrationWorkflowStatusEnumMapper::GetNameForMigrationWorkflowStatusEnum(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_completedStepsHasBeenSet)
  {
   payload.WithInteger("completedSteps", m_completedSteps);

  }

  if(m_totalStepsHasBeenSet)
  {
   payload.WithInteger("totalSteps", m_totalSteps);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
