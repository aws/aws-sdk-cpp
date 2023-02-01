/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/ScheduleSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Scheduler
{
namespace Model
{

ScheduleSummary::ScheduleSummary() : 
    m_arnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_lastModificationDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(ScheduleState::NOT_SET),
    m_stateHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

ScheduleSummary::ScheduleSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_lastModificationDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(ScheduleState::NOT_SET),
    m_stateHasBeenSet(false),
    m_targetHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleSummary& ScheduleSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModificationDate"))
  {
    m_lastModificationDate = jsonValue.GetDouble("LastModificationDate");

    m_lastModificationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ScheduleStateMapper::GetScheduleStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetObject("Target");

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_lastModificationDateHasBeenSet)
  {
   payload.WithDouble("LastModificationDate", m_lastModificationDate.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ScheduleStateMapper::GetNameForScheduleState(m_state));
  }

  if(m_targetHasBeenSet)
  {
   payload.WithObject("Target", m_target.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Scheduler
} // namespace Aws
