/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ScheduledAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

ScheduledAction::ScheduledAction() : 
    m_idHasBeenSet(false),
    m_type(ActionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_severity(ActionSeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_scheduledTime(0),
    m_scheduledTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scheduledBy(ScheduledBy::NOT_SET),
    m_scheduledByHasBeenSet(false),
    m_status(ActionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_mandatory(false),
    m_mandatoryHasBeenSet(false),
    m_cancellable(false),
    m_cancellableHasBeenSet(false)
{
}

ScheduledAction::ScheduledAction(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(ActionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_severity(ActionSeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_scheduledTime(0),
    m_scheduledTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scheduledBy(ScheduledBy::NOT_SET),
    m_scheduledByHasBeenSet(false),
    m_status(ActionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_mandatory(false),
    m_mandatoryHasBeenSet(false),
    m_cancellable(false),
    m_cancellableHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduledAction& ScheduledAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ActionTypeMapper::GetActionTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = ActionSeverityMapper::GetActionSeverityForName(jsonValue.GetString("Severity"));

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduledTime"))
  {
    m_scheduledTime = jsonValue.GetInt64("ScheduledTime");

    m_scheduledTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduledBy"))
  {
    m_scheduledBy = ScheduledByMapper::GetScheduledByForName(jsonValue.GetString("ScheduledBy"));

    m_scheduledByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ActionStatusMapper::GetActionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mandatory"))
  {
    m_mandatory = jsonValue.GetBool("Mandatory");

    m_mandatoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cancellable"))
  {
    m_cancellable = jsonValue.GetBool("Cancellable");

    m_cancellableHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduledAction::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ActionTypeMapper::GetNameForActionType(m_type));
  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", ActionSeverityMapper::GetNameForActionSeverity(m_severity));
  }

  if(m_scheduledTimeHasBeenSet)
  {
   payload.WithInt64("ScheduledTime", m_scheduledTime);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_scheduledByHasBeenSet)
  {
   payload.WithString("ScheduledBy", ScheduledByMapper::GetNameForScheduledBy(m_scheduledBy));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ActionStatusMapper::GetNameForActionStatus(m_status));
  }

  if(m_mandatoryHasBeenSet)
  {
   payload.WithBool("Mandatory", m_mandatory);

  }

  if(m_cancellableHasBeenSet)
  {
   payload.WithBool("Cancellable", m_cancellable);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
