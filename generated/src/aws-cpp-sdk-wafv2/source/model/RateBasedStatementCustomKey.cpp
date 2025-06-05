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

RateBasedStatementCustomKey::RateBasedStatementCustomKey(JsonView jsonValue)
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
  if(jsonValue.ValueExists("JA3Fingerprint"))
  {
    m_jA3Fingerprint = jsonValue.GetObject("JA3Fingerprint");
    m_jA3FingerprintHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JA4Fingerprint"))
  {
    m_jA4Fingerprint = jsonValue.GetObject("JA4Fingerprint");
    m_jA4FingerprintHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ASN"))
  {
    m_aSN = jsonValue.GetObject("ASN");
    m_aSNHasBeenSet = true;
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

  if(m_jA3FingerprintHasBeenSet)
  {
   payload.WithObject("JA3Fingerprint", m_jA3Fingerprint.Jsonize());

  }

  if(m_jA4FingerprintHasBeenSet)
  {
   payload.WithObject("JA4Fingerprint", m_jA4Fingerprint.Jsonize());

  }

  if(m_aSNHasBeenSet)
  {
   payload.WithObject("ASN", m_aSN.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
