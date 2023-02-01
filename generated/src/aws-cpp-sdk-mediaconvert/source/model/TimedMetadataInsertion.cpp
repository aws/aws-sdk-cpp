/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/TimedMetadataInsertion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

TimedMetadataInsertion::TimedMetadataInsertion() : 
    m_id3InsertionsHasBeenSet(false)
{
}

TimedMetadataInsertion::TimedMetadataInsertion(JsonView jsonValue) : 
    m_id3InsertionsHasBeenSet(false)
{
  *this = jsonValue;
}

TimedMetadataInsertion& TimedMetadataInsertion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id3Insertions"))
  {
    Aws::Utils::Array<JsonView> id3InsertionsJsonList = jsonValue.GetArray("id3Insertions");
    for(unsigned id3InsertionsIndex = 0; id3InsertionsIndex < id3InsertionsJsonList.GetLength(); ++id3InsertionsIndex)
    {
      m_id3Insertions.push_back(id3InsertionsJsonList[id3InsertionsIndex].AsObject());
    }
    m_id3InsertionsHasBeenSet = true;
  }

  return *this;
}

JsonValue TimedMetadataInsertion::Jsonize() const
{
  JsonValue payload;

  if(m_id3InsertionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> id3InsertionsJsonList(m_id3Insertions.size());
   for(unsigned id3InsertionsIndex = 0; id3InsertionsIndex < id3InsertionsJsonList.GetLength(); ++id3InsertionsIndex)
   {
     id3InsertionsJsonList[id3InsertionsIndex].AsObject(m_id3Insertions[id3InsertionsIndex].Jsonize());
   }
   payload.WithArray("id3Insertions", std::move(id3InsertionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
