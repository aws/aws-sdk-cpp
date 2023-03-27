/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/RegistrationConfig.h>
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

RegistrationConfig::RegistrationConfig() : 
    m_duplicateRegistrationAction(DuplicateRegistrationAction::NOT_SET),
    m_duplicateRegistrationActionHasBeenSet(false),
    m_fraudsterSimilarityThreshold(0),
    m_fraudsterSimilarityThresholdHasBeenSet(false),
    m_watchlistIdsHasBeenSet(false)
{
}

RegistrationConfig::RegistrationConfig(JsonView jsonValue) : 
    m_duplicateRegistrationAction(DuplicateRegistrationAction::NOT_SET),
    m_duplicateRegistrationActionHasBeenSet(false),
    m_fraudsterSimilarityThreshold(0),
    m_fraudsterSimilarityThresholdHasBeenSet(false),
    m_watchlistIdsHasBeenSet(false)
{
  *this = jsonValue;
}

RegistrationConfig& RegistrationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DuplicateRegistrationAction"))
  {
    m_duplicateRegistrationAction = DuplicateRegistrationActionMapper::GetDuplicateRegistrationActionForName(jsonValue.GetString("DuplicateRegistrationAction"));

    m_duplicateRegistrationActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FraudsterSimilarityThreshold"))
  {
    m_fraudsterSimilarityThreshold = jsonValue.GetInteger("FraudsterSimilarityThreshold");

    m_fraudsterSimilarityThresholdHasBeenSet = true;
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

JsonValue RegistrationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_duplicateRegistrationActionHasBeenSet)
  {
   payload.WithString("DuplicateRegistrationAction", DuplicateRegistrationActionMapper::GetNameForDuplicateRegistrationAction(m_duplicateRegistrationAction));
  }

  if(m_fraudsterSimilarityThresholdHasBeenSet)
  {
   payload.WithInteger("FraudsterSimilarityThreshold", m_fraudsterSimilarityThreshold);

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
