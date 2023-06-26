/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/Fraudster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VoiceID
{
namespace Model
{

Fraudster::Fraudster() : 
    m_createdAtHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_generatedFraudsterIdHasBeenSet(false),
    m_watchlistIdsHasBeenSet(false)
{
}

Fraudster::Fraudster(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_generatedFraudsterIdHasBeenSet(false),
    m_watchlistIdsHasBeenSet(false)
{
  *this = jsonValue;
}

Fraudster& Fraudster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeneratedFraudsterId"))
  {
    m_generatedFraudsterId = jsonValue.GetString("GeneratedFraudsterId");

    m_generatedFraudsterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WatchlistIds"))
  {
    Aws::Utils::Array<JsonView> watchlistIdsJsonList = jsonValue.GetArray("WatchlistIds");
    for(unsigned watchlistIdsIndex = 0; watchlistIdsIndex < watchlistIdsJsonList.GetLength(); ++watchlistIdsIndex)
    {
      m_watchlistIds.push_back(watchlistIdsJsonList[watchlistIdsIndex].AsString());
    }
    m_watchlistIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue Fraudster::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_generatedFraudsterIdHasBeenSet)
  {
   payload.WithString("GeneratedFraudsterId", m_generatedFraudsterId);

  }

  if(m_watchlistIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> watchlistIdsJsonList(m_watchlistIds.size());
   for(unsigned watchlistIdsIndex = 0; watchlistIdsIndex < watchlistIdsJsonList.GetLength(); ++watchlistIdsIndex)
   {
     watchlistIdsJsonList[watchlistIdsIndex].AsString(m_watchlistIds[watchlistIdsIndex]);
   }
   payload.WithArray("WatchlistIds", std::move(watchlistIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
