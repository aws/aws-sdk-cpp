/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/CallAnalyticsJobDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

CallAnalyticsJobDetails::CallAnalyticsJobDetails() : 
    m_skippedHasBeenSet(false)
{
}

CallAnalyticsJobDetails::CallAnalyticsJobDetails(JsonView jsonValue) : 
    m_skippedHasBeenSet(false)
{
  *this = jsonValue;
}

CallAnalyticsJobDetails& CallAnalyticsJobDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Skipped"))
  {
    Aws::Utils::Array<JsonView> skippedJsonList = jsonValue.GetArray("Skipped");
    for(unsigned skippedIndex = 0; skippedIndex < skippedJsonList.GetLength(); ++skippedIndex)
    {
      m_skipped.push_back(skippedJsonList[skippedIndex].AsObject());
    }
    m_skippedHasBeenSet = true;
  }

  return *this;
}

JsonValue CallAnalyticsJobDetails::Jsonize() const
{
  JsonValue payload;

  if(m_skippedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> skippedJsonList(m_skipped.size());
   for(unsigned skippedIndex = 0; skippedIndex < skippedJsonList.GetLength(); ++skippedIndex)
   {
     skippedJsonList[skippedIndex].AsObject(m_skipped[skippedIndex].Jsonize());
   }
   payload.WithArray("Skipped", std::move(skippedJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
