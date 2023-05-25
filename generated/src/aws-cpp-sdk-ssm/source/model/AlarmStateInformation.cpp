/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AlarmStateInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

AlarmStateInformation::AlarmStateInformation() : 
    m_nameHasBeenSet(false),
    m_state(ExternalAlarmState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

AlarmStateInformation::AlarmStateInformation(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_state(ExternalAlarmState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

AlarmStateInformation& AlarmStateInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ExternalAlarmStateMapper::GetExternalAlarmStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue AlarmStateInformation::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ExternalAlarmStateMapper::GetNameForExternalAlarmState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
