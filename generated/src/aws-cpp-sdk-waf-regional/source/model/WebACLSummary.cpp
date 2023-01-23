/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/WebACLSummary.h>
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

WebACLSummary::WebACLSummary() : 
    m_webACLIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

WebACLSummary::WebACLSummary(JsonView jsonValue) : 
    m_webACLIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

WebACLSummary& WebACLSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WebACLId"))
  {
    m_webACLId = jsonValue.GetString("WebACLId");

    m_webACLIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue WebACLSummary::Jsonize() const
{
  JsonValue payload;

  if(m_webACLIdHasBeenSet)
  {
   payload.WithString("WebACLId", m_webACLId);

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
