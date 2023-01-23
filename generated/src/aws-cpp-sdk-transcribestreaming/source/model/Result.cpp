/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/Result.h>
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

Result::Result() : 
    m_resultIdHasBeenSet(false),
    m_startTime(0.0),
    m_startTimeHasBeenSet(false),
    m_endTime(0.0),
    m_endTimeHasBeenSet(false),
    m_isPartial(false),
    m_isPartialHasBeenSet(false),
    m_alternativesHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_languageIdentificationHasBeenSet(false)
{
}

Result::Result(JsonView jsonValue) : 
    m_resultIdHasBeenSet(false),
    m_startTime(0.0),
    m_startTimeHasBeenSet(false),
    m_endTime(0.0),
    m_endTimeHasBeenSet(false),
    m_isPartial(false),
    m_isPartialHasBeenSet(false),
    m_alternativesHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_languageIdentificationHasBeenSet(false)
{
  *this = jsonValue;
}

Result& Result::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResultId"))
  {
    m_resultId = jsonValue.GetString("ResultId");

    m_resultIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("IsPartial"))
  {
    m_isPartial = jsonValue.GetBool("IsPartial");

    m_isPartialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Alternatives"))
  {
    Aws::Utils::Array<JsonView> alternativesJsonList = jsonValue.GetArray("Alternatives");
    for(unsigned alternativesIndex = 0; alternativesIndex < alternativesJsonList.GetLength(); ++alternativesIndex)
    {
      m_alternatives.push_back(alternativesJsonList[alternativesIndex].AsObject());
    }
    m_alternativesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelId"))
  {
    m_channelId = jsonValue.GetString("ChannelId");

    m_channelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

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

JsonValue Result::Jsonize() const
{
  JsonValue payload;

  if(m_resultIdHasBeenSet)
  {
   payload.WithString("ResultId", m_resultId);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime);

  }

  if(m_isPartialHasBeenSet)
  {
   payload.WithBool("IsPartial", m_isPartial);

  }

  if(m_alternativesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> alternativesJsonList(m_alternatives.size());
   for(unsigned alternativesIndex = 0; alternativesIndex < alternativesJsonList.GetLength(); ++alternativesIndex)
   {
     alternativesJsonList[alternativesIndex].AsObject(m_alternatives[alternativesIndex].Jsonize());
   }
   payload.WithArray("Alternatives", std::move(alternativesJsonList));

  }

  if(m_channelIdHasBeenSet)
  {
   payload.WithString("ChannelId", m_channelId);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
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
