/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/PreviewOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

PreviewOverride::PreviewOverride() : 
    m_newMembersHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

PreviewOverride::PreviewOverride(JsonView jsonValue) : 
    m_newMembersHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

PreviewOverride& PreviewOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NewMembers"))
  {
    Aws::Utils::Array<JsonView> newMembersJsonList = jsonValue.GetArray("NewMembers");
    for(unsigned newMembersIndex = 0; newMembersIndex < newMembersJsonList.GetLength(); ++newMembersIndex)
    {
      m_newMembers.push_back(newMembersJsonList[newMembersIndex].AsString());
    }
    m_newMembersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue PreviewOverride::Jsonize() const
{
  JsonValue payload;

  if(m_newMembersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> newMembersJsonList(m_newMembers.size());
   for(unsigned newMembersIndex = 0; newMembersIndex < newMembersJsonList.GetLength(); ++newMembersIndex)
   {
     newMembersJsonList[newMembersIndex].AsString(m_newMembers[newMembersIndex]);
   }
   payload.WithArray("NewMembers", std::move(newMembersJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
