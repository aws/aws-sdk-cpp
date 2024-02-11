/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/BlockedPhrasesConfigurationUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

BlockedPhrasesConfigurationUpdate::BlockedPhrasesConfigurationUpdate() : 
    m_blockedPhrasesToCreateOrUpdateHasBeenSet(false),
    m_blockedPhrasesToDeleteHasBeenSet(false),
    m_systemMessageOverrideHasBeenSet(false)
{
}

BlockedPhrasesConfigurationUpdate::BlockedPhrasesConfigurationUpdate(JsonView jsonValue) : 
    m_blockedPhrasesToCreateOrUpdateHasBeenSet(false),
    m_blockedPhrasesToDeleteHasBeenSet(false),
    m_systemMessageOverrideHasBeenSet(false)
{
  *this = jsonValue;
}

BlockedPhrasesConfigurationUpdate& BlockedPhrasesConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blockedPhrasesToCreateOrUpdate"))
  {
    Aws::Utils::Array<JsonView> blockedPhrasesToCreateOrUpdateJsonList = jsonValue.GetArray("blockedPhrasesToCreateOrUpdate");
    for(unsigned blockedPhrasesToCreateOrUpdateIndex = 0; blockedPhrasesToCreateOrUpdateIndex < blockedPhrasesToCreateOrUpdateJsonList.GetLength(); ++blockedPhrasesToCreateOrUpdateIndex)
    {
      m_blockedPhrasesToCreateOrUpdate.push_back(blockedPhrasesToCreateOrUpdateJsonList[blockedPhrasesToCreateOrUpdateIndex].AsString());
    }
    m_blockedPhrasesToCreateOrUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blockedPhrasesToDelete"))
  {
    Aws::Utils::Array<JsonView> blockedPhrasesToDeleteJsonList = jsonValue.GetArray("blockedPhrasesToDelete");
    for(unsigned blockedPhrasesToDeleteIndex = 0; blockedPhrasesToDeleteIndex < blockedPhrasesToDeleteJsonList.GetLength(); ++blockedPhrasesToDeleteIndex)
    {
      m_blockedPhrasesToDelete.push_back(blockedPhrasesToDeleteJsonList[blockedPhrasesToDeleteIndex].AsString());
    }
    m_blockedPhrasesToDeleteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("systemMessageOverride"))
  {
    m_systemMessageOverride = jsonValue.GetString("systemMessageOverride");

    m_systemMessageOverrideHasBeenSet = true;
  }

  return *this;
}

JsonValue BlockedPhrasesConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_blockedPhrasesToCreateOrUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockedPhrasesToCreateOrUpdateJsonList(m_blockedPhrasesToCreateOrUpdate.size());
   for(unsigned blockedPhrasesToCreateOrUpdateIndex = 0; blockedPhrasesToCreateOrUpdateIndex < blockedPhrasesToCreateOrUpdateJsonList.GetLength(); ++blockedPhrasesToCreateOrUpdateIndex)
   {
     blockedPhrasesToCreateOrUpdateJsonList[blockedPhrasesToCreateOrUpdateIndex].AsString(m_blockedPhrasesToCreateOrUpdate[blockedPhrasesToCreateOrUpdateIndex]);
   }
   payload.WithArray("blockedPhrasesToCreateOrUpdate", std::move(blockedPhrasesToCreateOrUpdateJsonList));

  }

  if(m_blockedPhrasesToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockedPhrasesToDeleteJsonList(m_blockedPhrasesToDelete.size());
   for(unsigned blockedPhrasesToDeleteIndex = 0; blockedPhrasesToDeleteIndex < blockedPhrasesToDeleteJsonList.GetLength(); ++blockedPhrasesToDeleteIndex)
   {
     blockedPhrasesToDeleteJsonList[blockedPhrasesToDeleteIndex].AsString(m_blockedPhrasesToDelete[blockedPhrasesToDeleteIndex]);
   }
   payload.WithArray("blockedPhrasesToDelete", std::move(blockedPhrasesToDeleteJsonList));

  }

  if(m_systemMessageOverrideHasBeenSet)
  {
   payload.WithString("systemMessageOverride", m_systemMessageOverride);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
