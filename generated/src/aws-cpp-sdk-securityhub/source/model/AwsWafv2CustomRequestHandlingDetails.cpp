/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafv2CustomRequestHandlingDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsWafv2CustomRequestHandlingDetails::AwsWafv2CustomRequestHandlingDetails() : 
    m_insertHeadersHasBeenSet(false)
{
}

AwsWafv2CustomRequestHandlingDetails::AwsWafv2CustomRequestHandlingDetails(JsonView jsonValue) : 
    m_insertHeadersHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafv2CustomRequestHandlingDetails& AwsWafv2CustomRequestHandlingDetails::operator =(JsonView jsonValue)
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

JsonValue AwsWafv2CustomRequestHandlingDetails::Jsonize() const
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
} // namespace SecurityHub
} // namespace Aws
