/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/AccountSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

AccountSettings::AccountSettings() : 
    m_groupLifecycleEventsDesiredStatus(GroupLifecycleEventsDesiredStatus::NOT_SET),
    m_groupLifecycleEventsDesiredStatusHasBeenSet(false),
    m_groupLifecycleEventsStatus(GroupLifecycleEventsStatus::NOT_SET),
    m_groupLifecycleEventsStatusHasBeenSet(false),
    m_groupLifecycleEventsStatusMessageHasBeenSet(false)
{
}

AccountSettings::AccountSettings(JsonView jsonValue) : 
    m_groupLifecycleEventsDesiredStatus(GroupLifecycleEventsDesiredStatus::NOT_SET),
    m_groupLifecycleEventsDesiredStatusHasBeenSet(false),
    m_groupLifecycleEventsStatus(GroupLifecycleEventsStatus::NOT_SET),
    m_groupLifecycleEventsStatusHasBeenSet(false),
    m_groupLifecycleEventsStatusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

AccountSettings& AccountSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupLifecycleEventsDesiredStatus"))
  {
    m_groupLifecycleEventsDesiredStatus = GroupLifecycleEventsDesiredStatusMapper::GetGroupLifecycleEventsDesiredStatusForName(jsonValue.GetString("GroupLifecycleEventsDesiredStatus"));

    m_groupLifecycleEventsDesiredStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupLifecycleEventsStatus"))
  {
    m_groupLifecycleEventsStatus = GroupLifecycleEventsStatusMapper::GetGroupLifecycleEventsStatusForName(jsonValue.GetString("GroupLifecycleEventsStatus"));

    m_groupLifecycleEventsStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupLifecycleEventsStatusMessage"))
  {
    m_groupLifecycleEventsStatusMessage = jsonValue.GetString("GroupLifecycleEventsStatusMessage");

    m_groupLifecycleEventsStatusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountSettings::Jsonize() const
{
  JsonValue payload;

  if(m_groupLifecycleEventsDesiredStatusHasBeenSet)
  {
   payload.WithString("GroupLifecycleEventsDesiredStatus", GroupLifecycleEventsDesiredStatusMapper::GetNameForGroupLifecycleEventsDesiredStatus(m_groupLifecycleEventsDesiredStatus));
  }

  if(m_groupLifecycleEventsStatusHasBeenSet)
  {
   payload.WithString("GroupLifecycleEventsStatus", GroupLifecycleEventsStatusMapper::GetNameForGroupLifecycleEventsStatus(m_groupLifecycleEventsStatus));
  }

  if(m_groupLifecycleEventsStatusMessageHasBeenSet)
  {
   payload.WithString("GroupLifecycleEventsStatusMessage", m_groupLifecycleEventsStatusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
