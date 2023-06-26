/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/XssMatchSetSummary.h>
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

XssMatchSetSummary::XssMatchSetSummary() : 
    m_xssMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

XssMatchSetSummary::XssMatchSetSummary(JsonView jsonValue) : 
    m_xssMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

XssMatchSetSummary& XssMatchSetSummary::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue XssMatchSetSummary::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
