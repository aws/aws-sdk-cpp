/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/SummarizedAttackVector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

SummarizedAttackVector::SummarizedAttackVector() : 
    m_vectorTypeHasBeenSet(false),
    m_vectorCountersHasBeenSet(false)
{
}

SummarizedAttackVector::SummarizedAttackVector(JsonView jsonValue) : 
    m_vectorTypeHasBeenSet(false),
    m_vectorCountersHasBeenSet(false)
{
  *this = jsonValue;
}

SummarizedAttackVector& SummarizedAttackVector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VectorType"))
  {
    m_vectorType = jsonValue.GetString("VectorType");

    m_vectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VectorCounters"))
  {
    Aws::Utils::Array<JsonView> vectorCountersJsonList = jsonValue.GetArray("VectorCounters");
    for(unsigned vectorCountersIndex = 0; vectorCountersIndex < vectorCountersJsonList.GetLength(); ++vectorCountersIndex)
    {
      m_vectorCounters.push_back(vectorCountersJsonList[vectorCountersIndex].AsObject());
    }
    m_vectorCountersHasBeenSet = true;
  }

  return *this;
}

JsonValue SummarizedAttackVector::Jsonize() const
{
  JsonValue payload;

  if(m_vectorTypeHasBeenSet)
  {
   payload.WithString("VectorType", m_vectorType);

  }

  if(m_vectorCountersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vectorCountersJsonList(m_vectorCounters.size());
   for(unsigned vectorCountersIndex = 0; vectorCountersIndex < vectorCountersJsonList.GetLength(); ++vectorCountersIndex)
   {
     vectorCountersJsonList[vectorCountersIndex].AsObject(m_vectorCounters[vectorCountersIndex].Jsonize());
   }
   payload.WithArray("VectorCounters", std::move(vectorCountersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
