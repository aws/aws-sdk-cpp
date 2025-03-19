/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/PersonalAccessTokenSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

PersonalAccessTokenSummary::PersonalAccessTokenSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

PersonalAccessTokenSummary& PersonalAccessTokenSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PersonalAccessTokenId"))
  {
    m_personalAccessTokenId = jsonValue.GetString("PersonalAccessTokenId");
    m_personalAccessTokenIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");
    m_userIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DateCreated"))
  {
    m_dateCreated = jsonValue.GetDouble("DateCreated");
    m_dateCreatedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DateLastUsed"))
  {
    m_dateLastUsed = jsonValue.GetDouble("DateLastUsed");
    m_dateLastUsedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpiresTime"))
  {
    m_expiresTime = jsonValue.GetDouble("ExpiresTime");
    m_expiresTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Scopes"))
  {
    Aws::Utils::Array<JsonView> scopesJsonList = jsonValue.GetArray("Scopes");
    for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
    {
      m_scopes.push_back(scopesJsonList[scopesIndex].AsString());
    }
    m_scopesHasBeenSet = true;
  }
  return *this;
}

JsonValue PersonalAccessTokenSummary::Jsonize() const
{
  JsonValue payload;

  if(m_personalAccessTokenIdHasBeenSet)
  {
   payload.WithString("PersonalAccessTokenId", m_personalAccessTokenId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithDouble("DateCreated", m_dateCreated.SecondsWithMSPrecision());
  }

  if(m_dateLastUsedHasBeenSet)
  {
   payload.WithDouble("DateLastUsed", m_dateLastUsed.SecondsWithMSPrecision());
  }

  if(m_expiresTimeHasBeenSet)
  {
   payload.WithDouble("ExpiresTime", m_expiresTime.SecondsWithMSPrecision());
  }

  if(m_scopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scopesJsonList(m_scopes.size());
   for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
   {
     scopesJsonList[scopesIndex].AsString(m_scopes[scopesIndex]);
   }
   payload.WithArray("Scopes", std::move(scopesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
