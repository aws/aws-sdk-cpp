/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/FailureSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

FailureSummary::FailureSummary() : 
    m_totalFailureCount(0),
    m_totalFailureCountHasBeenSet(false),
    m_failuresHasBeenSet(false)
{
}

FailureSummary::FailureSummary(JsonView jsonValue) : 
    m_totalFailureCount(0),
    m_totalFailureCountHasBeenSet(false),
    m_failuresHasBeenSet(false)
{
  *this = jsonValue;
}

FailureSummary& FailureSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("totalFailureCount"))
  {
    m_totalFailureCount = jsonValue.GetInteger("totalFailureCount");

    m_totalFailureCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failures"))
  {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("failures");
    for(unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex)
    {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
    m_failuresHasBeenSet = true;
  }

  return *this;
}

JsonValue FailureSummary::Jsonize() const
{
  JsonValue payload;

  if(m_totalFailureCountHasBeenSet)
  {
   payload.WithInteger("totalFailureCount", m_totalFailureCount);

  }

  if(m_failuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failuresJsonList(m_failures.size());
   for(unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex)
   {
     failuresJsonList[failuresIndex].AsObject(m_failures[failuresIndex].Jsonize());
   }
   payload.WithArray("failures", std::move(failuresJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
