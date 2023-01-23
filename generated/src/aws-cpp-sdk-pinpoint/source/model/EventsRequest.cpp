/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/EventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

EventsRequest::EventsRequest() : 
    m_batchItemHasBeenSet(false)
{
}

EventsRequest::EventsRequest(JsonView jsonValue) : 
    m_batchItemHasBeenSet(false)
{
  *this = jsonValue;
}

EventsRequest& EventsRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BatchItem"))
  {
    Aws::Map<Aws::String, JsonView> batchItemJsonMap = jsonValue.GetObject("BatchItem").GetAllObjects();
    for(auto& batchItemItem : batchItemJsonMap)
    {
      m_batchItem[batchItemItem.first] = batchItemItem.second.AsObject();
    }
    m_batchItemHasBeenSet = true;
  }

  return *this;
}

JsonValue EventsRequest::Jsonize() const
{
  JsonValue payload;

  if(m_batchItemHasBeenSet)
  {
   JsonValue batchItemJsonMap;
   for(auto& batchItemItem : m_batchItem)
   {
     batchItemJsonMap.WithObject(batchItemItem.first, batchItemItem.second.Jsonize());
   }
   payload.WithObject("BatchItem", std::move(batchItemJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
