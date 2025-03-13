/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/WhenSentTo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

WhenSentTo::WhenSentTo(JsonView jsonValue)
{
  *this = jsonValue;
}

WhenSentTo& WhenSentTo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WhenSentToSegmentsList"))
  {
    Aws::Utils::Array<JsonView> whenSentToSegmentsListJsonList = jsonValue.GetArray("WhenSentToSegmentsList");
    for(unsigned whenSentToSegmentsListIndex = 0; whenSentToSegmentsListIndex < whenSentToSegmentsListJsonList.GetLength(); ++whenSentToSegmentsListIndex)
    {
      m_whenSentToSegmentsList.push_back(whenSentToSegmentsListJsonList[whenSentToSegmentsListIndex].AsString());
    }
    m_whenSentToSegmentsListHasBeenSet = true;
  }
  return *this;
}

JsonValue WhenSentTo::Jsonize() const
{
  JsonValue payload;

  if(m_whenSentToSegmentsListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> whenSentToSegmentsListJsonList(m_whenSentToSegmentsList.size());
   for(unsigned whenSentToSegmentsListIndex = 0; whenSentToSegmentsListIndex < whenSentToSegmentsListJsonList.GetLength(); ++whenSentToSegmentsListIndex)
   {
     whenSentToSegmentsListJsonList[whenSentToSegmentsListIndex].AsString(m_whenSentToSegmentsList[whenSentToSegmentsListIndex]);
   }
   payload.WithArray("WhenSentToSegmentsList", std::move(whenSentToSegmentsListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
