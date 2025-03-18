/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/LabelDetection.h>
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

LabelDetection::LabelDetection(JsonView jsonValue)
{
  *this = jsonValue;
}

LabelDetection& LabelDetection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetInt64("Timestamp");
    m_timestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetObject("Label");
    m_labelHasBeenSet = true;
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

JsonValue LabelDetection::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithInt64("Timestamp", m_timestamp);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithObject("Label", m_label.Jsonize());

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
