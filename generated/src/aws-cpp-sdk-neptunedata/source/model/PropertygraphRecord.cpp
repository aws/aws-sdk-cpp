/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/PropertygraphRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace neptunedata
{
namespace Model
{

PropertygraphRecord::PropertygraphRecord() : 
    m_commitTimestampInMillis(0),
    m_commitTimestampInMillisHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_opHasBeenSet(false),
    m_isLastOp(false),
    m_isLastOpHasBeenSet(false)
{
}

PropertygraphRecord::PropertygraphRecord(JsonView jsonValue) : 
    m_commitTimestampInMillis(0),
    m_commitTimestampInMillisHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_opHasBeenSet(false),
    m_isLastOp(false),
    m_isLastOpHasBeenSet(false)
{
  *this = jsonValue;
}

PropertygraphRecord& PropertygraphRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("commitTimestamp"))
  {
    m_commitTimestampInMillis = jsonValue.GetInt64("commitTimestamp");

    m_commitTimestampInMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventId"))
  {
    Aws::Map<Aws::String, JsonView> eventIdJsonMap = jsonValue.GetObject("eventId").GetAllObjects();
    for(auto& eventIdItem : eventIdJsonMap)
    {
      m_eventId[eventIdItem.first] = eventIdItem.second.AsString();
    }
    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("data"))
  {
    m_data = jsonValue.GetObject("data");

    m_dataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("op"))
  {
    m_op = jsonValue.GetString("op");

    m_opHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isLastOp"))
  {
    m_isLastOp = jsonValue.GetBool("isLastOp");

    m_isLastOpHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertygraphRecord::Jsonize() const
{
  JsonValue payload;

  if(m_commitTimestampInMillisHasBeenSet)
  {
   payload.WithInt64("commitTimestamp", m_commitTimestampInMillis);

  }

  if(m_eventIdHasBeenSet)
  {
   JsonValue eventIdJsonMap;
   for(auto& eventIdItem : m_eventId)
   {
     eventIdJsonMap.WithString(eventIdItem.first, eventIdItem.second);
   }
   payload.WithObject("eventId", std::move(eventIdJsonMap));

  }

  if(m_dataHasBeenSet)
  {
   payload.WithObject("data", m_data.Jsonize());

  }

  if(m_opHasBeenSet)
  {
   payload.WithString("op", m_op);

  }

  if(m_isLastOpHasBeenSet)
  {
   payload.WithBool("isLastOp", m_isLastOp);

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
