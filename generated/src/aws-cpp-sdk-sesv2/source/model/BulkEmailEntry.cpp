/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/BulkEmailEntry.h>
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

BulkEmailEntry::BulkEmailEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

BulkEmailEntry& BulkEmailEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetObject("Destination");
    m_destinationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplacementTags"))
  {
    Aws::Utils::Array<JsonView> replacementTagsJsonList = jsonValue.GetArray("ReplacementTags");
    for(unsigned replacementTagsIndex = 0; replacementTagsIndex < replacementTagsJsonList.GetLength(); ++replacementTagsIndex)
    {
      m_replacementTags.push_back(replacementTagsJsonList[replacementTagsIndex].AsObject());
    }
    m_replacementTagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplacementEmailContent"))
  {
    m_replacementEmailContent = jsonValue.GetObject("ReplacementEmailContent");
    m_replacementEmailContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplacementHeaders"))
  {
    Aws::Utils::Array<JsonView> replacementHeadersJsonList = jsonValue.GetArray("ReplacementHeaders");
    for(unsigned replacementHeadersIndex = 0; replacementHeadersIndex < replacementHeadersJsonList.GetLength(); ++replacementHeadersIndex)
    {
      m_replacementHeaders.push_back(replacementHeadersJsonList[replacementHeadersIndex].AsObject());
    }
    m_replacementHeadersHasBeenSet = true;
  }
  return *this;
}

JsonValue BulkEmailEntry::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("Destination", m_destination.Jsonize());

  }

  if(m_replacementTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replacementTagsJsonList(m_replacementTags.size());
   for(unsigned replacementTagsIndex = 0; replacementTagsIndex < replacementTagsJsonList.GetLength(); ++replacementTagsIndex)
   {
     replacementTagsJsonList[replacementTagsIndex].AsObject(m_replacementTags[replacementTagsIndex].Jsonize());
   }
   payload.WithArray("ReplacementTags", std::move(replacementTagsJsonList));

  }

  if(m_replacementEmailContentHasBeenSet)
  {
   payload.WithObject("ReplacementEmailContent", m_replacementEmailContent.Jsonize());

  }

  if(m_replacementHeadersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replacementHeadersJsonList(m_replacementHeaders.size());
   for(unsigned replacementHeadersIndex = 0; replacementHeadersIndex < replacementHeadersJsonList.GetLength(); ++replacementHeadersIndex)
   {
     replacementHeadersJsonList[replacementHeadersIndex].AsObject(m_replacementHeaders[replacementHeadersIndex].Jsonize());
   }
   payload.WithArray("ReplacementHeaders", std::move(replacementHeadersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
