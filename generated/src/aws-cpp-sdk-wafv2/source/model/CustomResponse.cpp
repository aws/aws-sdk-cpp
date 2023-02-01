/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/CustomResponse.h>
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

CustomResponse::CustomResponse() : 
    m_responseCode(0),
    m_responseCodeHasBeenSet(false),
    m_customResponseBodyKeyHasBeenSet(false),
    m_responseHeadersHasBeenSet(false)
{
}

CustomResponse::CustomResponse(JsonView jsonValue) : 
    m_responseCode(0),
    m_responseCodeHasBeenSet(false),
    m_customResponseBodyKeyHasBeenSet(false),
    m_responseHeadersHasBeenSet(false)
{
  *this = jsonValue;
}

CustomResponse& CustomResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResponseCode"))
  {
    m_responseCode = jsonValue.GetInteger("ResponseCode");

    m_responseCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomResponseBodyKey"))
  {
    m_customResponseBodyKey = jsonValue.GetString("CustomResponseBodyKey");

    m_customResponseBodyKeyHasBeenSet = true;
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

JsonValue CustomResponse::Jsonize() const
{
  JsonValue payload;

  if(m_responseCodeHasBeenSet)
  {
   payload.WithInteger("ResponseCode", m_responseCode);

  }

  if(m_customResponseBodyKeyHasBeenSet)
  {
   payload.WithString("CustomResponseBodyKey", m_customResponseBodyKey);

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
} // namespace WAFV2
} // namespace Aws
