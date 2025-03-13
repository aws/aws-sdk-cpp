/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ReplaceRecipientAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

ReplaceRecipientAction::ReplaceRecipientAction(JsonView jsonValue)
{
  *this = jsonValue;
}

ReplaceRecipientAction& ReplaceRecipientAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplaceWith"))
  {
    Aws::Utils::Array<JsonView> replaceWithJsonList = jsonValue.GetArray("ReplaceWith");
    for(unsigned replaceWithIndex = 0; replaceWithIndex < replaceWithJsonList.GetLength(); ++replaceWithIndex)
    {
      m_replaceWith.push_back(replaceWithJsonList[replaceWithIndex].AsString());
    }
    m_replaceWithHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplaceRecipientAction::Jsonize() const
{
  JsonValue payload;

  if(m_replaceWithHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replaceWithJsonList(m_replaceWith.size());
   for(unsigned replaceWithIndex = 0; replaceWithIndex < replaceWithJsonList.GetLength(); ++replaceWithIndex)
   {
     replaceWithJsonList[replaceWithIndex].AsString(m_replaceWith[replaceWithIndex]);
   }
   payload.WithArray("ReplaceWith", std::move(replaceWithJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
