/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/XssMatchSet.h>
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

XssMatchSet::XssMatchSet() : 
    m_xssMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_xssMatchTuplesHasBeenSet(false)
{
}

XssMatchSet::XssMatchSet(JsonView jsonValue) : 
    m_xssMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_xssMatchTuplesHasBeenSet(false)
{
  *this = jsonValue;
}

XssMatchSet& XssMatchSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("XssMatchSetId"))
  {
    m_xssMatchSetId = jsonValue.GetString("XssMatchSetId");

    m_xssMatchSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XssMatchTuples"))
  {
    Aws::Utils::Array<JsonView> xssMatchTuplesJsonList = jsonValue.GetArray("XssMatchTuples");
    for(unsigned xssMatchTuplesIndex = 0; xssMatchTuplesIndex < xssMatchTuplesJsonList.GetLength(); ++xssMatchTuplesIndex)
    {
      m_xssMatchTuples.push_back(xssMatchTuplesJsonList[xssMatchTuplesIndex].AsObject());
    }
    m_xssMatchTuplesHasBeenSet = true;
  }

  return *this;
}

JsonValue XssMatchSet::Jsonize() const
{
  JsonValue payload;

  if(m_xssMatchSetIdHasBeenSet)
  {
   payload.WithString("XssMatchSetId", m_xssMatchSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_xssMatchTuplesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> xssMatchTuplesJsonList(m_xssMatchTuples.size());
   for(unsigned xssMatchTuplesIndex = 0; xssMatchTuplesIndex < xssMatchTuplesJsonList.GetLength(); ++xssMatchTuplesIndex)
   {
     xssMatchTuplesJsonList[xssMatchTuplesIndex].AsObject(m_xssMatchTuples[xssMatchTuplesIndex].Jsonize());
   }
   payload.WithArray("XssMatchTuples", std::move(xssMatchTuplesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
