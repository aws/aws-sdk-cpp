/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ContentModerationDetection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

ContentModerationDetection::ContentModerationDetection() : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_moderationLabelHasBeenSet(false),
    m_startTimestampMillis(0),
    m_startTimestampMillisHasBeenSet(false),
    m_endTimestampMillis(0),
    m_endTimestampMillisHasBeenSet(false),
    m_durationMillis(0),
    m_durationMillisHasBeenSet(false)
{
}

ContentModerationDetection::ContentModerationDetection(JsonView jsonValue) : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_moderationLabelHasBeenSet(false),
    m_startTimestampMillis(0),
    m_startTimestampMillisHasBeenSet(false),
    m_endTimestampMillis(0),
    m_endTimestampMillisHasBeenSet(false),
    m_durationMillis(0),
    m_durationMillisHasBeenSet(false)
{
  *this = jsonValue;
}

ContentModerationDetection& ContentModerationDetection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetInt64("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModerationLabel"))
  {
    m_moderationLabel = jsonValue.GetObject("ModerationLabel");

    m_moderationLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTimestampMillis"))
  {
    m_startTimestampMillis = jsonValue.GetInt64("StartTimestampMillis");

    m_startTimestampMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTimestampMillis"))
  {
    m_endTimestampMillis = jsonValue.GetInt64("EndTimestampMillis");

    m_endTimestampMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DurationMillis"))
  {
    m_durationMillis = jsonValue.GetInt64("DurationMillis");

    m_durationMillisHasBeenSet = true;
  }

  return *this;
}

JsonValue ContentModerationDetection::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithInt64("Timestamp", m_timestamp);

  }

  if(m_moderationLabelHasBeenSet)
  {
   payload.WithObject("ModerationLabel", m_moderationLabel.Jsonize());

  }

  if(m_startTimestampMillisHasBeenSet)
  {
   payload.WithInt64("StartTimestampMillis", m_startTimestampMillis);

  }

  if(m_endTimestampMillisHasBeenSet)
  {
   payload.WithInt64("EndTimestampMillis", m_endTimestampMillis);

  }

  if(m_durationMillisHasBeenSet)
  {
   payload.WithInt64("DurationMillis", m_durationMillis);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
