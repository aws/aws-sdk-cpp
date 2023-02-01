/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafv2CustomResponseDetails.h>
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

AwsWafv2CustomResponseDetails::AwsWafv2CustomResponseDetails() : 
    m_customResponseBodyKeyHasBeenSet(false),
    m_responseCode(0),
    m_responseCodeHasBeenSet(false),
    m_responseHeadersHasBeenSet(false)
{
}

AwsWafv2CustomResponseDetails::AwsWafv2CustomResponseDetails(JsonView jsonValue) : 
    m_customResponseBodyKeyHasBeenSet(false),
    m_responseCode(0),
    m_responseCodeHasBeenSet(false),
    m_responseHeadersHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafv2CustomResponseDetails& AwsWafv2CustomResponseDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomResponseBodyKey"))
  {
    m_customResponseBodyKey = jsonValue.GetString("CustomResponseBodyKey");

    m_customResponseBodyKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResponseCode"))
  {
    m_responseCode = jsonValue.GetInteger("ResponseCode");

    m_responseCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResponseHeaders"))
  {
    Aws::Utils::Array<JsonView> responseHeadersJsonList = jsonValue.GetArray("ResponseHeaders");
    for(unsigned responseHeadersIndex = 0; responseHeadersIndex < responseHeadersJsonList.GetLength(); ++responseHeadersIndex)
    {
      m_responseHeaders.push_back(responseHeadersJsonList[responseHeadersIndex].AsObject());
    }
    m_responseHeadersHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafv2CustomResponseDetails::Jsonize() const
{
  JsonValue payload;

  if(m_customResponseBodyKeyHasBeenSet)
  {
   payload.WithString("CustomResponseBodyKey", m_customResponseBodyKey);

  }

  if(m_responseCodeHasBeenSet)
  {
   payload.WithInteger("ResponseCode", m_responseCode);

  }

  if(m_responseHeadersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> responseHeadersJsonList(m_responseHeaders.size());
   for(unsigned responseHeadersIndex = 0; responseHeadersIndex < responseHeadersJsonList.GetLength(); ++responseHeadersIndex)
   {
     responseHeadersJsonList[responseHeadersIndex].AsObject(m_responseHeaders[responseHeadersIndex].Jsonize());
   }
   payload.WithArray("ResponseHeaders", std::move(responseHeadersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
