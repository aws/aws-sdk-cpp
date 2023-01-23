/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/TagFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RAM
{
namespace Model
{

TagFilter::TagFilter() : 
    m_tagKeyHasBeenSet(false),
    m_tagValuesHasBeenSet(false)
{
}

TagFilter::TagFilter(JsonView jsonValue) : 
    m_tagKeyHasBeenSet(false),
    m_tagValuesHasBeenSet(false)
{
  *this = jsonValue;
}

TagFilter& TagFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tagKey"))
  {
    m_tagKey = jsonValue.GetString("tagKey");

    m_tagKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagValues"))
  {
    Aws::Utils::Array<JsonView> tagValuesJsonList = jsonValue.GetArray("tagValues");
    for(unsigned tagValuesIndex = 0; tagValuesIndex < tagValuesJsonList.GetLength(); ++tagValuesIndex)
    {
      m_tagValues.push_back(tagValuesJsonList[tagValuesIndex].AsString());
    }
    m_tagValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue TagFilter::Jsonize() const
{
  JsonValue payload;

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("tagKey", m_tagKey);

  }

  if(m_tagValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagValuesJsonList(m_tagValues.size());
   for(unsigned tagValuesIndex = 0; tagValuesIndex < tagValuesJsonList.GetLength(); ++tagValuesIndex)
   {
     tagValuesJsonList[tagValuesIndex].AsString(m_tagValues[tagValuesIndex]);
   }
   payload.WithArray("tagValues", std::move(tagValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RAM
} // namespace Aws
