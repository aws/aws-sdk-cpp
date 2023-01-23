/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/UserPendingChanges.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

UserPendingChanges::UserPendingChanges() : 
    m_consoleAccess(false),
    m_consoleAccessHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_pendingChange(ChangeType::NOT_SET),
    m_pendingChangeHasBeenSet(false)
{
}

UserPendingChanges::UserPendingChanges(JsonView jsonValue) : 
    m_consoleAccess(false),
    m_consoleAccessHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_pendingChange(ChangeType::NOT_SET),
    m_pendingChangeHasBeenSet(false)
{
  *this = jsonValue;
}

UserPendingChanges& UserPendingChanges::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("consoleAccess"))
  {
    m_consoleAccess = jsonValue.GetBool("consoleAccess");

    m_consoleAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groups"))
  {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      m_groups.push_back(groupsJsonList[groupsIndex].AsString());
    }
    m_groupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pendingChange"))
  {
    m_pendingChange = ChangeTypeMapper::GetChangeTypeForName(jsonValue.GetString("pendingChange"));

    m_pendingChangeHasBeenSet = true;
  }

  return *this;
}

JsonValue UserPendingChanges::Jsonize() const
{
  JsonValue payload;

  if(m_consoleAccessHasBeenSet)
  {
   payload.WithBool("consoleAccess", m_consoleAccess);

  }

  if(m_groupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     groupsJsonList[groupsIndex].AsString(m_groups[groupsIndex]);
   }
   payload.WithArray("groups", std::move(groupsJsonList));

  }

  if(m_pendingChangeHasBeenSet)
  {
   payload.WithString("pendingChange", ChangeTypeMapper::GetNameForChangeType(m_pendingChange));
  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
