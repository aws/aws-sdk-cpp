/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ResponseInspectionBodyContains.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ResponseInspectionBodyContains::ResponseInspectionBodyContains() : 
    m_successStringsHasBeenSet(false),
    m_failureStringsHasBeenSet(false)
{
}

ResponseInspectionBodyContains::ResponseInspectionBodyContains(JsonView jsonValue) : 
    m_successStringsHasBeenSet(false),
    m_failureStringsHasBeenSet(false)
{
  *this = jsonValue;
}

ResponseInspectionBodyContains& ResponseInspectionBodyContains::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SuccessStrings"))
  {
    Aws::Utils::Array<JsonView> successStringsJsonList = jsonValue.GetArray("SuccessStrings");
    for(unsigned successStringsIndex = 0; successStringsIndex < successStringsJsonList.GetLength(); ++successStringsIndex)
    {
      m_successStrings.push_back(successStringsJsonList[successStringsIndex].AsString());
    }
    m_successStringsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureStrings"))
  {
    Aws::Utils::Array<JsonView> failureStringsJsonList = jsonValue.GetArray("FailureStrings");
    for(unsigned failureStringsIndex = 0; failureStringsIndex < failureStringsJsonList.GetLength(); ++failureStringsIndex)
    {
      m_failureStrings.push_back(failureStringsJsonList[failureStringsIndex].AsString());
    }
    m_failureStringsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResponseInspectionBodyContains::Jsonize() const
{
  JsonValue payload;

  if(m_successStringsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> successStringsJsonList(m_successStrings.size());
   for(unsigned successStringsIndex = 0; successStringsIndex < successStringsJsonList.GetLength(); ++successStringsIndex)
   {
     successStringsJsonList[successStringsIndex].AsString(m_successStrings[successStringsIndex]);
   }
   payload.WithArray("SuccessStrings", std::move(successStringsJsonList));

  }

  if(m_failureStringsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failureStringsJsonList(m_failureStrings.size());
   for(unsigned failureStringsIndex = 0; failureStringsIndex < failureStringsJsonList.GetLength(); ++failureStringsIndex)
   {
     failureStringsJsonList[failureStringsIndex].AsString(m_failureStrings[failureStringsIndex]);
   }
   payload.WithArray("FailureStrings", std::move(failureStringsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
