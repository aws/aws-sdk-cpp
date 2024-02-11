/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/FieldToMatch.h>
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

FieldToMatch::FieldToMatch() : 
    m_singleHeaderHasBeenSet(false),
    m_singleQueryArgumentHasBeenSet(false),
    m_allQueryArgumentsHasBeenSet(false),
    m_uriPathHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_jsonBodyHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_cookiesHasBeenSet(false),
    m_headerOrderHasBeenSet(false),
    m_jA3FingerprintHasBeenSet(false)
{
}

FieldToMatch::FieldToMatch(JsonView jsonValue) : 
    m_singleHeaderHasBeenSet(false),
    m_singleQueryArgumentHasBeenSet(false),
    m_allQueryArgumentsHasBeenSet(false),
    m_uriPathHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_jsonBodyHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_cookiesHasBeenSet(false),
    m_headerOrderHasBeenSet(false),
    m_jA3FingerprintHasBeenSet(false)
{
  *this = jsonValue;
}

FieldToMatch& FieldToMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SingleHeader"))
  {
    m_singleHeader = jsonValue.GetObject("SingleHeader");

    m_singleHeaderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SingleQueryArgument"))
  {
    m_singleQueryArgument = jsonValue.GetObject("SingleQueryArgument");

    m_singleQueryArgumentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllQueryArguments"))
  {
    m_allQueryArguments = jsonValue.GetObject("AllQueryArguments");

    m_allQueryArgumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UriPath"))
  {
    m_uriPath = jsonValue.GetObject("UriPath");

    m_uriPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryString"))
  {
    m_queryString = jsonValue.GetObject("QueryString");

    m_queryStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetObject("Body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Method"))
  {
    m_method = jsonValue.GetObject("Method");

    m_methodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JsonBody"))
  {
    m_jsonBody = jsonValue.GetObject("JsonBody");

    m_jsonBodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Headers"))
  {
    m_headers = jsonValue.GetObject("Headers");

    m_headersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cookies"))
  {
    m_cookies = jsonValue.GetObject("Cookies");

    m_cookiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeaderOrder"))
  {
    m_headerOrder = jsonValue.GetObject("HeaderOrder");

    m_headerOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JA3Fingerprint"))
  {
    m_jA3Fingerprint = jsonValue.GetObject("JA3Fingerprint");

    m_jA3FingerprintHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldToMatch::Jsonize() const
{
  JsonValue payload;

  if(m_singleHeaderHasBeenSet)
  {
   payload.WithObject("SingleHeader", m_singleHeader.Jsonize());

  }

  if(m_singleQueryArgumentHasBeenSet)
  {
   payload.WithObject("SingleQueryArgument", m_singleQueryArgument.Jsonize());

  }

  if(m_allQueryArgumentsHasBeenSet)
  {
   payload.WithObject("AllQueryArguments", m_allQueryArguments.Jsonize());

  }

  if(m_uriPathHasBeenSet)
  {
   payload.WithObject("UriPath", m_uriPath.Jsonize());

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithObject("QueryString", m_queryString.Jsonize());

  }

  if(m_bodyHasBeenSet)
  {
   payload.WithObject("Body", m_body.Jsonize());

  }

  if(m_methodHasBeenSet)
  {
   payload.WithObject("Method", m_method.Jsonize());

  }

  if(m_jsonBodyHasBeenSet)
  {
   payload.WithObject("JsonBody", m_jsonBody.Jsonize());

  }

  if(m_headersHasBeenSet)
  {
   payload.WithObject("Headers", m_headers.Jsonize());

  }

  if(m_cookiesHasBeenSet)
  {
   payload.WithObject("Cookies", m_cookies.Jsonize());

  }

  if(m_headerOrderHasBeenSet)
  {
   payload.WithObject("HeaderOrder", m_headerOrder.Jsonize());

  }

  if(m_jA3FingerprintHasBeenSet)
  {
   payload.WithObject("JA3Fingerprint", m_jA3Fingerprint.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
