/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RateBasedStatementCustomKey.h>
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

RateBasedStatementCustomKey::RateBasedStatementCustomKey() : 
    m_headerHasBeenSet(false),
    m_cookieHasBeenSet(false),
    m_queryArgumentHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_hTTPMethodHasBeenSet(false),
    m_forwardedIPHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_labelNamespaceHasBeenSet(false),
    m_uriPathHasBeenSet(false)
{
}

RateBasedStatementCustomKey::RateBasedStatementCustomKey(JsonView jsonValue) : 
    m_headerHasBeenSet(false),
    m_cookieHasBeenSet(false),
    m_queryArgumentHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_hTTPMethodHasBeenSet(false),
    m_forwardedIPHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_labelNamespaceHasBeenSet(false),
    m_uriPathHasBeenSet(false)
{
  *this = jsonValue;
}

RateBasedStatementCustomKey& RateBasedStatementCustomKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Header"))
  {
    m_header = jsonValue.GetObject("Header");

    m_headerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cookie"))
  {
    m_cookie = jsonValue.GetObject("Cookie");

    m_cookieHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryArgument"))
  {
    m_queryArgument = jsonValue.GetObject("QueryArgument");

    m_queryArgumentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryString"))
  {
    m_queryString = jsonValue.GetObject("QueryString");

    m_queryStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HTTPMethod"))
  {
    m_hTTPMethod = jsonValue.GetObject("HTTPMethod");

    m_hTTPMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForwardedIP"))
  {
    m_forwardedIP = jsonValue.GetObject("ForwardedIP");

    m_forwardedIPHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IP"))
  {
    m_iP = jsonValue.GetObject("IP");

    m_iPHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelNamespace"))
  {
    m_labelNamespace = jsonValue.GetObject("LabelNamespace");

    m_labelNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UriPath"))
  {
    m_uriPath = jsonValue.GetObject("UriPath");

    m_uriPathHasBeenSet = true;
  }

  return *this;
}

JsonValue RateBasedStatementCustomKey::Jsonize() const
{
  JsonValue payload;

  if(m_headerHasBeenSet)
  {
   payload.WithObject("Header", m_header.Jsonize());

  }

  if(m_cookieHasBeenSet)
  {
   payload.WithObject("Cookie", m_cookie.Jsonize());

  }

  if(m_queryArgumentHasBeenSet)
  {
   payload.WithObject("QueryArgument", m_queryArgument.Jsonize());

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithObject("QueryString", m_queryString.Jsonize());

  }

  if(m_hTTPMethodHasBeenSet)
  {
   payload.WithObject("HTTPMethod", m_hTTPMethod.Jsonize());

  }

  if(m_forwardedIPHasBeenSet)
  {
   payload.WithObject("ForwardedIP", m_forwardedIP.Jsonize());

  }

  if(m_iPHasBeenSet)
  {
   payload.WithObject("IP", m_iP.Jsonize());

  }

  if(m_labelNamespaceHasBeenSet)
  {
   payload.WithObject("LabelNamespace", m_labelNamespace.Jsonize());

  }

  if(m_uriPathHasBeenSet)
  {
   payload.WithObject("UriPath", m_uriPath.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
