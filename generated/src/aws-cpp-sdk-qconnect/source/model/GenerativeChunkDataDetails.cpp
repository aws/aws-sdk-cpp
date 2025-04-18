/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GenerativeChunkDataDetails.h>
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

GenerativeChunkDataDetails::GenerativeChunkDataDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

GenerativeChunkDataDetails& GenerativeChunkDataDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("completion"))
  {
    m_completion = jsonValue.GetString("completion");
    m_completionHasBeenSet = true;
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
  if(jsonValue.ValueExists("nextChunkToken"))
  {
    m_nextChunkToken = jsonValue.GetString("nextChunkToken");
    m_nextChunkTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue GenerativeChunkDataDetails::Jsonize() const
{
  JsonValue payload;

  if(m_completionHasBeenSet)
  {
   payload.WithString("completion", m_completion);

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

  if(m_nextChunkTokenHasBeenSet)
  {
   payload.WithString("nextChunkToken", m_nextChunkToken);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
