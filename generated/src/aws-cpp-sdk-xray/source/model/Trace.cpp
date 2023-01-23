/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/Trace.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

Trace::Trace() : 
    m_idHasBeenSet(false),
    m_duration(0.0),
    m_durationHasBeenSet(false),
    m_limitExceeded(false),
    m_limitExceededHasBeenSet(false),
    m_segmentsHasBeenSet(false)
{
}

Trace::Trace(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_duration(0.0),
    m_durationHasBeenSet(false),
    m_limitExceeded(false),
    m_limitExceededHasBeenSet(false),
    m_segmentsHasBeenSet(false)
{
  *this = jsonValue;
}

Trace& Trace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetDouble("Duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LimitExceeded"))
  {
    m_limitExceeded = jsonValue.GetBool("LimitExceeded");

    m_limitExceededHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Segments"))
  {
    Aws::Utils::Array<JsonView> segmentsJsonList = jsonValue.GetArray("Segments");
    for(unsigned segmentsIndex = 0; segmentsIndex < segmentsJsonList.GetLength(); ++segmentsIndex)
    {
      m_segments.push_back(segmentsJsonList[segmentsIndex].AsObject());
    }
    m_segmentsHasBeenSet = true;
  }

  return *this;
}

JsonValue Trace::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithDouble("Duration", m_duration);

  }

  if(m_limitExceededHasBeenSet)
  {
   payload.WithBool("LimitExceeded", m_limitExceeded);

  }

  if(m_segmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> segmentsJsonList(m_segments.size());
   for(unsigned segmentsIndex = 0; segmentsIndex < segmentsJsonList.GetLength(); ++segmentsIndex)
   {
     segmentsJsonList[segmentsIndex].AsObject(m_segments[segmentsIndex].Jsonize());
   }
   payload.WithArray("Segments", std::move(segmentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
