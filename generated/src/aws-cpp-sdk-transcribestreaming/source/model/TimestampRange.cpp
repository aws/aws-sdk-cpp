/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/TimestampRange.h>
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

TimestampRange::TimestampRange() : 
    m_beginOffsetMillis(0),
    m_beginOffsetMillisHasBeenSet(false),
    m_endOffsetMillis(0),
    m_endOffsetMillisHasBeenSet(false)
{
}

TimestampRange::TimestampRange(JsonView jsonValue) : 
    m_beginOffsetMillis(0),
    m_beginOffsetMillisHasBeenSet(false),
    m_endOffsetMillis(0),
    m_endOffsetMillisHasBeenSet(false)
{
  *this = jsonValue;
}

TimestampRange& TimestampRange::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue TimestampRange::Jsonize() const
{
  JsonValue payload;

  if(m_beginOffsetMillisHasBeenSet)
  {
   payload.WithInt64("BeginOffsetMillis", m_beginOffsetMillis);

  }

  if(m_endOffsetMillisHasBeenSet)
  {
   payload.WithInt64("EndOffsetMillis", m_endOffsetMillis);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
