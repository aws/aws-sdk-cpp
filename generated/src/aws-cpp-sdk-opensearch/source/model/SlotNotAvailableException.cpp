/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/SlotNotAvailableException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

SlotNotAvailableException::SlotNotAvailableException() : 
    m_slotSuggestionsHasBeenSet(false)
{
}

SlotNotAvailableException::SlotNotAvailableException(JsonView jsonValue) : 
    m_slotSuggestionsHasBeenSet(false)
{
  *this = jsonValue;
}

SlotNotAvailableException& SlotNotAvailableException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SlotSuggestions"))
  {
    Aws::Utils::Array<JsonView> slotSuggestionsJsonList = jsonValue.GetArray("SlotSuggestions");
    for(unsigned slotSuggestionsIndex = 0; slotSuggestionsIndex < slotSuggestionsJsonList.GetLength(); ++slotSuggestionsIndex)
    {
      m_slotSuggestions.push_back(slotSuggestionsJsonList[slotSuggestionsIndex].AsInt64());
    }
    m_slotSuggestionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotNotAvailableException::Jsonize() const
{
  JsonValue payload;

  if(m_slotSuggestionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> slotSuggestionsJsonList(m_slotSuggestions.size());
   for(unsigned slotSuggestionsIndex = 0; slotSuggestionsIndex < slotSuggestionsJsonList.GetLength(); ++slotSuggestionsIndex)
   {
     slotSuggestionsJsonList[slotSuggestionsIndex].AsInt64(m_slotSuggestions[slotSuggestionsIndex]);
   }
   payload.WithArray("SlotSuggestions", std::move(slotSuggestionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
