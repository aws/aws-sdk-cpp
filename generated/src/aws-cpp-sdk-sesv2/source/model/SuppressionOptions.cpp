/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/SuppressionOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

SuppressionOptions::SuppressionOptions() : 
    m_suppressedReasonsHasBeenSet(false)
{
}

SuppressionOptions::SuppressionOptions(JsonView jsonValue) : 
    m_suppressedReasonsHasBeenSet(false)
{
  *this = jsonValue;
}

SuppressionOptions& SuppressionOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SuppressedReasons"))
  {
    Aws::Utils::Array<JsonView> suppressedReasonsJsonList = jsonValue.GetArray("SuppressedReasons");
    for(unsigned suppressedReasonsIndex = 0; suppressedReasonsIndex < suppressedReasonsJsonList.GetLength(); ++suppressedReasonsIndex)
    {
      m_suppressedReasons.push_back(SuppressionListReasonMapper::GetSuppressionListReasonForName(suppressedReasonsJsonList[suppressedReasonsIndex].AsString()));
    }
    m_suppressedReasonsHasBeenSet = true;
  }

  return *this;
}

JsonValue SuppressionOptions::Jsonize() const
{
  JsonValue payload;

  if(m_suppressedReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> suppressedReasonsJsonList(m_suppressedReasons.size());
   for(unsigned suppressedReasonsIndex = 0; suppressedReasonsIndex < suppressedReasonsJsonList.GetLength(); ++suppressedReasonsIndex)
   {
     suppressedReasonsJsonList[suppressedReasonsIndex].AsString(SuppressionListReasonMapper::GetNameForSuppressionListReason(m_suppressedReasons[suppressedReasonsIndex]));
   }
   payload.WithArray("SuppressedReasons", std::move(suppressedReasonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
