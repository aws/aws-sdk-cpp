/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/RegexMatchSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

RegexMatchSet::RegexMatchSet() : 
    m_regexMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regexMatchTuplesHasBeenSet(false)
{
}

RegexMatchSet::RegexMatchSet(JsonView jsonValue) : 
    m_regexMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regexMatchTuplesHasBeenSet(false)
{
  *this = jsonValue;
}

RegexMatchSet& RegexMatchSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegexMatchSetId"))
  {
    m_regexMatchSetId = jsonValue.GetString("RegexMatchSetId");

    m_regexMatchSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegexMatchTuples"))
  {
    Aws::Utils::Array<JsonView> regexMatchTuplesJsonList = jsonValue.GetArray("RegexMatchTuples");
    for(unsigned regexMatchTuplesIndex = 0; regexMatchTuplesIndex < regexMatchTuplesJsonList.GetLength(); ++regexMatchTuplesIndex)
    {
      m_regexMatchTuples.push_back(regexMatchTuplesJsonList[regexMatchTuplesIndex].AsObject());
    }
    m_regexMatchTuplesHasBeenSet = true;
  }

  return *this;
}

JsonValue RegexMatchSet::Jsonize() const
{
  JsonValue payload;

  if(m_regexMatchSetIdHasBeenSet)
  {
   payload.WithString("RegexMatchSetId", m_regexMatchSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_regexMatchTuplesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regexMatchTuplesJsonList(m_regexMatchTuples.size());
   for(unsigned regexMatchTuplesIndex = 0; regexMatchTuplesIndex < regexMatchTuplesJsonList.GetLength(); ++regexMatchTuplesIndex)
   {
     regexMatchTuplesJsonList[regexMatchTuplesIndex].AsObject(m_regexMatchTuples[regexMatchTuplesIndex].Jsonize());
   }
   payload.WithArray("RegexMatchTuples", std::move(regexMatchTuplesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
