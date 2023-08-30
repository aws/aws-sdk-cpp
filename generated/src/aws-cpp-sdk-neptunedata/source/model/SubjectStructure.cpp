/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/SubjectStructure.h>
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

SubjectStructure::SubjectStructure() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_predicatesHasBeenSet(false)
{
}

SubjectStructure::SubjectStructure(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_predicatesHasBeenSet(false)
{
  *this = jsonValue;
}

SubjectStructure& SubjectStructure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInt64("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("predicates"))
  {
    Aws::Utils::Array<JsonView> predicatesJsonList = jsonValue.GetArray("predicates");
    for(unsigned predicatesIndex = 0; predicatesIndex < predicatesJsonList.GetLength(); ++predicatesIndex)
    {
      m_predicates.push_back(predicatesJsonList[predicatesIndex].AsString());
    }
    m_predicatesHasBeenSet = true;
  }

  return *this;
}

JsonValue SubjectStructure::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInt64("count", m_count);

  }

  if(m_predicatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> predicatesJsonList(m_predicates.size());
   for(unsigned predicatesIndex = 0; predicatesIndex < predicatesJsonList.GetLength(); ++predicatesIndex)
   {
     predicatesJsonList[predicatesIndex].AsString(m_predicates[predicatesIndex]);
   }
   payload.WithArray("predicates", std::move(predicatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
