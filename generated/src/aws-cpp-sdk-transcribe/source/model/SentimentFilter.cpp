/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/SentimentFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

SentimentFilter::SentimentFilter() : 
    m_sentimentsHasBeenSet(false),
    m_absoluteTimeRangeHasBeenSet(false),
    m_relativeTimeRangeHasBeenSet(false),
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_negate(false),
    m_negateHasBeenSet(false)
{
}

SentimentFilter::SentimentFilter(JsonView jsonValue) : 
    m_sentimentsHasBeenSet(false),
    m_absoluteTimeRangeHasBeenSet(false),
    m_relativeTimeRangeHasBeenSet(false),
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_negate(false),
    m_negateHasBeenSet(false)
{
  *this = jsonValue;
}

SentimentFilter& SentimentFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Sentiments"))
  {
    Aws::Utils::Array<JsonView> sentimentsJsonList = jsonValue.GetArray("Sentiments");
    for(unsigned sentimentsIndex = 0; sentimentsIndex < sentimentsJsonList.GetLength(); ++sentimentsIndex)
    {
      m_sentiments.push_back(SentimentValueMapper::GetSentimentValueForName(sentimentsJsonList[sentimentsIndex].AsString()));
    }
    m_sentimentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AbsoluteTimeRange"))
  {
    m_absoluteTimeRange = jsonValue.GetObject("AbsoluteTimeRange");

    m_absoluteTimeRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelativeTimeRange"))
  {
    m_relativeTimeRange = jsonValue.GetObject("RelativeTimeRange");

    m_relativeTimeRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParticipantRole"))
  {
    m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(jsonValue.GetString("ParticipantRole"));

    m_participantRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Negate"))
  {
    m_negate = jsonValue.GetBool("Negate");

    m_negateHasBeenSet = true;
  }

  return *this;
}

JsonValue SentimentFilter::Jsonize() const
{
  JsonValue payload;

  if(m_sentimentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sentimentsJsonList(m_sentiments.size());
   for(unsigned sentimentsIndex = 0; sentimentsIndex < sentimentsJsonList.GetLength(); ++sentimentsIndex)
   {
     sentimentsJsonList[sentimentsIndex].AsString(SentimentValueMapper::GetNameForSentimentValue(m_sentiments[sentimentsIndex]));
   }
   payload.WithArray("Sentiments", std::move(sentimentsJsonList));

  }

  if(m_absoluteTimeRangeHasBeenSet)
  {
   payload.WithObject("AbsoluteTimeRange", m_absoluteTimeRange.Jsonize());

  }

  if(m_relativeTimeRangeHasBeenSet)
  {
   payload.WithObject("RelativeTimeRange", m_relativeTimeRange.Jsonize());

  }

  if(m_participantRoleHasBeenSet)
  {
   payload.WithString("ParticipantRole", ParticipantRoleMapper::GetNameForParticipantRole(m_participantRole));
  }

  if(m_negateHasBeenSet)
  {
   payload.WithBool("Negate", m_negate);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
