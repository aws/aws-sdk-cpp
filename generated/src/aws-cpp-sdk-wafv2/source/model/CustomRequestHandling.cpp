/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/CustomRequestHandling.h>
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

CustomRequestHandling::CustomRequestHandling() : 
    m_insertHeadersHasBeenSet(false)
{
}

CustomRequestHandling::CustomRequestHandling(JsonView jsonValue) : 
    m_insertHeadersHasBeenSet(false)
{
  *this = jsonValue;
}

CustomRequestHandling& CustomRequestHandling::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InsertHeaders"))
  {
    Aws::Utils::Array<JsonView> insertHeadersJsonList = jsonValue.GetArray("InsertHeaders");
    for(unsigned insertHeadersIndex = 0; insertHeadersIndex < insertHeadersJsonList.GetLength(); ++insertHeadersIndex)
    {
      m_insertHeaders.push_back(insertHeadersJsonList[insertHeadersIndex].AsObject());
    }
    m_insertHeadersHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomRequestHandling::Jsonize() const
{
  JsonValue payload;

  if(m_insertHeadersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> insertHeadersJsonList(m_insertHeaders.size());
   for(unsigned insertHeadersIndex = 0; insertHeadersIndex < insertHeadersJsonList.GetLength(); ++insertHeadersIndex)
   {
     insertHeadersJsonList[insertHeadersIndex].AsObject(m_insertHeaders[insertHeadersIndex].Jsonize());
   }
   payload.WithArray("InsertHeaders", std::move(insertHeadersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
