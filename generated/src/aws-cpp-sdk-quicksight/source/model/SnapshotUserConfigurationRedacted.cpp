/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnapshotUserConfigurationRedacted.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

SnapshotUserConfigurationRedacted::SnapshotUserConfigurationRedacted() : 
    m_anonymousUsersHasBeenSet(false)
{
}

SnapshotUserConfigurationRedacted::SnapshotUserConfigurationRedacted(JsonView jsonValue) : 
    m_anonymousUsersHasBeenSet(false)
{
  *this = jsonValue;
}

SnapshotUserConfigurationRedacted& SnapshotUserConfigurationRedacted::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnonymousUsers"))
  {
    Aws::Utils::Array<JsonView> anonymousUsersJsonList = jsonValue.GetArray("AnonymousUsers");
    for(unsigned anonymousUsersIndex = 0; anonymousUsersIndex < anonymousUsersJsonList.GetLength(); ++anonymousUsersIndex)
    {
      m_anonymousUsers.push_back(anonymousUsersJsonList[anonymousUsersIndex].AsObject());
    }
    m_anonymousUsersHasBeenSet = true;
  }

  return *this;
}

JsonValue SnapshotUserConfigurationRedacted::Jsonize() const
{
  JsonValue payload;

  if(m_anonymousUsersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> anonymousUsersJsonList(m_anonymousUsers.size());
   for(unsigned anonymousUsersIndex = 0; anonymousUsersIndex < anonymousUsersJsonList.GetLength(); ++anonymousUsersIndex)
   {
     anonymousUsersJsonList[anonymousUsersIndex].AsObject(m_anonymousUsers[anonymousUsersIndex].Jsonize());
   }
   payload.WithArray("AnonymousUsers", std::move(anonymousUsersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
