/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/RegexPatternSetSummary.h>
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

RegexPatternSetSummary::RegexPatternSetSummary() : 
    m_regexPatternSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

RegexPatternSetSummary::RegexPatternSetSummary(JsonView jsonValue) : 
    m_regexPatternSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

RegexPatternSetSummary& RegexPatternSetSummary::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue RegexPatternSetSummary::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
