/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/UtteranceEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

UtteranceEvent::UtteranceEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

UtteranceEvent& UtteranceEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UtteranceId"))
  {
    m_utteranceId = jsonValue.GetString("UtteranceId");
    m_utteranceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsPartial"))
  {
    m_isPartial = jsonValue.GetBool("IsPartial");
    m_isPartialHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParticipantRole"))
  {
    m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(jsonValue.GetString("ParticipantRole"));
    m_participantRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BeginOffsetMillis"))
  {
    m_beginOffsetMillis = jsonValue.GetInt64("BeginOffsetMillis");
    m_beginOffsetMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndOffsetMillis"))
  {
    m_endOffsetMillis = jsonValue.GetInt64("EndOffsetMillis");
    m_endOffsetMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Transcript"))
  {
    m_transcript = jsonValue.GetString("Transcript");
    m_transcriptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Items"))
  {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("Items");
    for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
    {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
    }
    m_itemsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Entities"))
  {
    Aws::Utils::Array<JsonView> entitiesJsonList = jsonValue.GetArray("Entities");
    for(unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex)
    {
      m_entities.push_back(entitiesJsonList[entitiesIndex].AsObject());
    }
    m_entitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sentiment"))
  {
    m_sentiment = SentimentMapper::GetSentimentForName(jsonValue.GetString("Sentiment"));
    m_sentimentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IssuesDetected"))
  {
    Aws::Utils::Array<JsonView> issuesDetectedJsonList = jsonValue.GetArray("IssuesDetected");
    for(unsigned issuesDetectedIndex = 0; issuesDetectedIndex < issuesDetectedJsonList.GetLength(); ++issuesDetectedIndex)
    {
      m_issuesDetected.push_back(issuesDetectedJsonList[issuesDetectedIndex].AsObject());
    }
    m_issuesDetectedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = CallAnalyticsLanguageCodeMapper::GetCallAnalyticsLanguageCodeForName(jsonValue.GetString("LanguageCode"));
    m_languageCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LanguageIdentification"))
  {
    Aws::Utils::Array<JsonView> languageIdentificationJsonList = jsonValue.GetArray("LanguageIdentification");
    for(unsigned languageIdentificationIndex = 0; languageIdentificationIndex < languageIdentificationJsonList.GetLength(); ++languageIdentificationIndex)
    {
      m_languageIdentification.push_back(languageIdentificationJsonList[languageIdentificationIndex].AsObject());
    }
    m_languageIdentificationHasBeenSet = true;
  }
  return *this;
}

JsonValue UtteranceEvent::Jsonize() const
{
  JsonValue payload;

  if(m_utteranceIdHasBeenSet)
  {
   payload.WithString("UtteranceId", m_utteranceId);

  }

  if(m_isPartialHasBeenSet)
  {
   payload.WithBool("IsPartial", m_isPartial);

  }

  if(m_participantRoleHasBeenSet)
  {
   payload.WithString("ParticipantRole", ParticipantRoleMapper::GetNameForParticipantRole(m_participantRole));
  }

  if(m_beginOffsetMillisHasBeenSet)
  {
   payload.WithInt64("BeginOffsetMillis", m_beginOffsetMillis);

  }

  if(m_endOffsetMillisHasBeenSet)
  {
   payload.WithInt64("EndOffsetMillis", m_endOffsetMillis);

  }

  if(m_transcriptHasBeenSet)
  {
   payload.WithString("Transcript", m_transcript);

  }

  if(m_itemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
   for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
   {
     itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
   }
   payload.WithArray("Items", std::move(itemsJsonList));

  }

  if(m_entitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entitiesJsonList(m_entities.size());
   for(unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex)
   {
     entitiesJsonList[entitiesIndex].AsObject(m_entities[entitiesIndex].Jsonize());
   }
   payload.WithArray("Entities", std::move(entitiesJsonList));

  }

  if(m_sentimentHasBeenSet)
  {
   payload.WithString("Sentiment", SentimentMapper::GetNameForSentiment(m_sentiment));
  }

  if(m_issuesDetectedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> issuesDetectedJsonList(m_issuesDetected.size());
   for(unsigned issuesDetectedIndex = 0; issuesDetectedIndex < issuesDetectedJsonList.GetLength(); ++issuesDetectedIndex)
   {
     issuesDetectedJsonList[issuesDetectedIndex].AsObject(m_issuesDetected[issuesDetectedIndex].Jsonize());
   }
   payload.WithArray("IssuesDetected", std::move(issuesDetectedJsonList));

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", CallAnalyticsLanguageCodeMapper::GetNameForCallAnalyticsLanguageCode(m_languageCode));
  }

  if(m_languageIdentificationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> languageIdentificationJsonList(m_languageIdentification.size());
   for(unsigned languageIdentificationIndex = 0; languageIdentificationIndex < languageIdentificationJsonList.GetLength(); ++languageIdentificationIndex)
   {
     languageIdentificationJsonList[languageIdentificationIndex].AsObject(m_languageIdentification[languageIdentificationIndex].Jsonize());
   }
   payload.WithArray("LanguageIdentification", std::move(languageIdentificationJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
