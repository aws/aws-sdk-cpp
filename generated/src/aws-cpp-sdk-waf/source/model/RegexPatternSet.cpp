/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/RegexPatternSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

RegexPatternSet::RegexPatternSet() : 
    m_regexPatternSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regexPatternStringsHasBeenSet(false)
{
}

RegexPatternSet::RegexPatternSet(JsonView jsonValue) : 
    m_regexPatternSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regexPatternStringsHasBeenSet(false)
{
  *this = jsonValue;
}

RegexPatternSet& RegexPatternSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegexPatternSetId"))
  {
    m_regexPatternSetId = jsonValue.GetString("RegexPatternSetId");

    m_regexPatternSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegexPatternStrings"))
  {
    Aws::Utils::Array<JsonView> regexPatternStringsJsonList = jsonValue.GetArray("RegexPatternStrings");
    for(unsigned regexPatternStringsIndex = 0; regexPatternStringsIndex < regexPatternStringsJsonList.GetLength(); ++regexPatternStringsIndex)
    {
      m_regexPatternStrings.push_back(regexPatternStringsJsonList[regexPatternStringsIndex].AsString());
    }
    m_regexPatternStringsHasBeenSet = true;
  }

  return *this;
}

JsonValue RegexPatternSet::Jsonize() const
{
  JsonValue payload;

  if(m_regexPatternSetIdHasBeenSet)
  {
   payload.WithString("RegexPatternSetId", m_regexPatternSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_regexPatternStringsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regexPatternStringsJsonList(m_regexPatternStrings.size());
   for(unsigned regexPatternStringsIndex = 0; regexPatternStringsIndex < regexPatternStringsJsonList.GetLength(); ++regexPatternStringsIndex)
   {
     regexPatternStringsJsonList[regexPatternStringsIndex].AsString(m_regexPatternStrings[regexPatternStringsIndex]);
   }
   payload.WithArray("RegexPatternStrings", std::move(regexPatternStringsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
