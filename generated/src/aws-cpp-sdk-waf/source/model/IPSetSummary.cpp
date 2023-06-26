/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/IPSetSummary.h>
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

IPSetSummary::IPSetSummary() : 
    m_iPSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

IPSetSummary::IPSetSummary(JsonView jsonValue) : 
    m_iPSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

IPSetSummary& IPSetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IPSetId"))
  {
    m_iPSetId = jsonValue.GetString("IPSetId");

    m_iPSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue IPSetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_iPSetIdHasBeenSet)
  {
   payload.WithString("IPSetId", m_iPSetId);

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
