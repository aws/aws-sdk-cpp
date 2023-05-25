/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/RelativeTimeRange.h>
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

RelativeTimeRange::RelativeTimeRange() : 
    m_startPercentage(0),
    m_startPercentageHasBeenSet(false),
    m_endPercentage(0),
    m_endPercentageHasBeenSet(false),
    m_first(0),
    m_firstHasBeenSet(false),
    m_last(0),
    m_lastHasBeenSet(false)
{
}

RelativeTimeRange::RelativeTimeRange(JsonView jsonValue) : 
    m_startPercentage(0),
    m_startPercentageHasBeenSet(false),
    m_endPercentage(0),
    m_endPercentageHasBeenSet(false),
    m_first(0),
    m_firstHasBeenSet(false),
    m_last(0),
    m_lastHasBeenSet(false)
{
  *this = jsonValue;
}

RelativeTimeRange& RelativeTimeRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartPercentage"))
  {
    m_startPercentage = jsonValue.GetInteger("StartPercentage");

    m_startPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndPercentage"))
  {
    m_endPercentage = jsonValue.GetInteger("EndPercentage");

    m_endPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("First"))
  {
    m_first = jsonValue.GetInteger("First");

    m_firstHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Last"))
  {
    m_last = jsonValue.GetInteger("Last");

    m_lastHasBeenSet = true;
  }

  return *this;
}

JsonValue RelativeTimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_startPercentageHasBeenSet)
  {
   payload.WithInteger("StartPercentage", m_startPercentage);

  }

  if(m_endPercentageHasBeenSet)
  {
   payload.WithInteger("EndPercentage", m_endPercentage);

  }

  if(m_firstHasBeenSet)
  {
   payload.WithInteger("First", m_first);

  }

  if(m_lastHasBeenSet)
  {
   payload.WithInteger("Last", m_last);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
