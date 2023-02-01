/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/FailuresResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

FailuresResponse::FailuresResponse() : 
    m_failuresHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

FailuresResponse::FailuresResponse(JsonView jsonValue) : 
    m_failuresHasBeenSet(false),
    m_regionHasBeenSet(false)
{
  *this = jsonValue;
}

FailuresResponse& FailuresResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failures"))
  {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("failures");
    for(unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex)
    {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
    m_failuresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  return *this;
}

JsonValue FailuresResponse::Jsonize() const
{
  JsonValue payload;

  if(m_failuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failuresJsonList(m_failures.size());
   for(unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex)
   {
     failuresJsonList[failuresIndex].AsObject(m_failures[failuresIndex].Jsonize());
   }
   payload.WithArray("failures", std::move(failuresJsonList));

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
