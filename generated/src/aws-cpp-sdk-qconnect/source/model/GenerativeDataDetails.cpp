/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GenerativeDataDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

GenerativeDataDetails::GenerativeDataDetails() : 
    m_completionHasBeenSet(false),
    m_rankingDataHasBeenSet(false),
    m_referencesHasBeenSet(false)
{
}

GenerativeDataDetails::GenerativeDataDetails(JsonView jsonValue) : 
    m_completionHasBeenSet(false),
    m_rankingDataHasBeenSet(false),
    m_referencesHasBeenSet(false)
{
  *this = jsonValue;
}

GenerativeDataDetails& GenerativeDataDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("completion"))
  {
    m_completion = jsonValue.GetString("completion");

    m_completionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rankingData"))
  {
    m_rankingData = jsonValue.GetObject("rankingData");

    m_rankingDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("references"))
  {
    Aws::Utils::Array<JsonView> referencesJsonList = jsonValue.GetArray("references");
    for(unsigned referencesIndex = 0; referencesIndex < referencesJsonList.GetLength(); ++referencesIndex)
    {
      m_references.push_back(referencesJsonList[referencesIndex].AsObject());
    }
    m_referencesHasBeenSet = true;
  }

  return *this;
}

JsonValue GenerativeDataDetails::Jsonize() const
{
  JsonValue payload;

  if(m_completionHasBeenSet)
  {
   payload.WithString("completion", m_completion);

  }

  if(m_rankingDataHasBeenSet)
  {
   payload.WithObject("rankingData", m_rankingData.Jsonize());

  }

  if(m_referencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> referencesJsonList(m_references.size());
   for(unsigned referencesIndex = 0; referencesIndex < referencesJsonList.GetLength(); ++referencesIndex)
   {
     referencesJsonList[referencesIndex].AsObject(m_references[referencesIndex].Jsonize());
   }
   payload.WithArray("references", std::move(referencesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
