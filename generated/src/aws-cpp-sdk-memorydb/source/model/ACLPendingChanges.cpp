/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ACLPendingChanges.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

ACLPendingChanges::ACLPendingChanges() : 
    m_userNamesToRemoveHasBeenSet(false),
    m_userNamesToAddHasBeenSet(false)
{
}

ACLPendingChanges::ACLPendingChanges(JsonView jsonValue) : 
    m_userNamesToRemoveHasBeenSet(false),
    m_userNamesToAddHasBeenSet(false)
{
  *this = jsonValue;
}

ACLPendingChanges& ACLPendingChanges::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserNamesToRemove"))
  {
    Aws::Utils::Array<JsonView> userNamesToRemoveJsonList = jsonValue.GetArray("UserNamesToRemove");
    for(unsigned userNamesToRemoveIndex = 0; userNamesToRemoveIndex < userNamesToRemoveJsonList.GetLength(); ++userNamesToRemoveIndex)
    {
      m_userNamesToRemove.push_back(userNamesToRemoveJsonList[userNamesToRemoveIndex].AsString());
    }
    m_userNamesToRemoveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserNamesToAdd"))
  {
    Aws::Utils::Array<JsonView> userNamesToAddJsonList = jsonValue.GetArray("UserNamesToAdd");
    for(unsigned userNamesToAddIndex = 0; userNamesToAddIndex < userNamesToAddJsonList.GetLength(); ++userNamesToAddIndex)
    {
      m_userNamesToAdd.push_back(userNamesToAddJsonList[userNamesToAddIndex].AsString());
    }
    m_userNamesToAddHasBeenSet = true;
  }

  return *this;
}

JsonValue ACLPendingChanges::Jsonize() const
{
  JsonValue payload;

  if(m_userNamesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userNamesToRemoveJsonList(m_userNamesToRemove.size());
   for(unsigned userNamesToRemoveIndex = 0; userNamesToRemoveIndex < userNamesToRemoveJsonList.GetLength(); ++userNamesToRemoveIndex)
   {
     userNamesToRemoveJsonList[userNamesToRemoveIndex].AsString(m_userNamesToRemove[userNamesToRemoveIndex]);
   }
   payload.WithArray("UserNamesToRemove", std::move(userNamesToRemoveJsonList));

  }

  if(m_userNamesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userNamesToAddJsonList(m_userNamesToAdd.size());
   for(unsigned userNamesToAddIndex = 0; userNamesToAddIndex < userNamesToAddJsonList.GetLength(); ++userNamesToAddIndex)
   {
     userNamesToAddJsonList[userNamesToAddIndex].AsString(m_userNamesToAdd[userNamesToAddIndex]);
   }
   payload.WithArray("UserNamesToAdd", std::move(userNamesToAddJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
