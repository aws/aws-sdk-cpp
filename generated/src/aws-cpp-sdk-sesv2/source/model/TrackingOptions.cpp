/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/TrackingOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

TrackingOptions::TrackingOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

TrackingOptions& TrackingOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomRedirectDomain"))
  {
    m_customRedirectDomain = jsonValue.GetString("CustomRedirectDomain");
    m_customRedirectDomainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HttpsPolicy"))
  {
    m_httpsPolicy = HttpsPolicyMapper::GetHttpsPolicyForName(jsonValue.GetString("HttpsPolicy"));
    m_httpsPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue TrackingOptions::Jsonize() const
{
  JsonValue payload;

  if(m_customRedirectDomainHasBeenSet)
  {
   payload.WithString("CustomRedirectDomain", m_customRedirectDomain);

  }

  if(m_httpsPolicyHasBeenSet)
  {
   payload.WithString("HttpsPolicy", HttpsPolicyMapper::GetNameForHttpsPolicy(m_httpsPolicy));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
