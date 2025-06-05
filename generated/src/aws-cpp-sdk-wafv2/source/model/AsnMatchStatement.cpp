/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/AsnMatchStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

AsnMatchStatement::AsnMatchStatement(JsonView jsonValue)
{
  *this = jsonValue;
}

AsnMatchStatement& AsnMatchStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AsnList"))
  {
    Aws::Utils::Array<JsonView> asnListJsonList = jsonValue.GetArray("AsnList");
    for(unsigned asnListIndex = 0; asnListIndex < asnListJsonList.GetLength(); ++asnListIndex)
    {
      m_asnList.push_back(asnListJsonList[asnListIndex].AsInt64());
    }
    m_asnListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ForwardedIPConfig"))
  {
    m_forwardedIPConfig = jsonValue.GetObject("ForwardedIPConfig");
    m_forwardedIPConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AsnMatchStatement::Jsonize() const
{
  JsonValue payload;

  if(m_asnListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> asnListJsonList(m_asnList.size());
   for(unsigned asnListIndex = 0; asnListIndex < asnListJsonList.GetLength(); ++asnListIndex)
   {
     asnListJsonList[asnListIndex].AsInt64(m_asnList[asnListIndex]);
   }
   payload.WithArray("AsnList", std::move(asnListJsonList));

  }

  if(m_forwardedIPConfigHasBeenSet)
  {
   payload.WithObject("ForwardedIPConfig", m_forwardedIPConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
