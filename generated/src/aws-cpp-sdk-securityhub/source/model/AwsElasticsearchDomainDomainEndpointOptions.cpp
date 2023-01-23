/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElasticsearchDomainDomainEndpointOptions.h>
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

AwsElasticsearchDomainDomainEndpointOptions::AwsElasticsearchDomainDomainEndpointOptions() : 
    m_enforceHTTPS(false),
    m_enforceHTTPSHasBeenSet(false),
    m_tLSSecurityPolicyHasBeenSet(false)
{
}

AwsElasticsearchDomainDomainEndpointOptions::AwsElasticsearchDomainDomainEndpointOptions(JsonView jsonValue) : 
    m_enforceHTTPS(false),
    m_enforceHTTPSHasBeenSet(false),
    m_tLSSecurityPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElasticsearchDomainDomainEndpointOptions& AwsElasticsearchDomainDomainEndpointOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnforceHTTPS"))
  {
    m_enforceHTTPS = jsonValue.GetBool("EnforceHTTPS");

    m_enforceHTTPSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TLSSecurityPolicy"))
  {
    m_tLSSecurityPolicy = jsonValue.GetString("TLSSecurityPolicy");

    m_tLSSecurityPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElasticsearchDomainDomainEndpointOptions::Jsonize() const
{
  JsonValue payload;

  if(m_enforceHTTPSHasBeenSet)
  {
   payload.WithBool("EnforceHTTPS", m_enforceHTTPS);

  }

  if(m_tLSSecurityPolicyHasBeenSet)
  {
   payload.WithString("TLSSecurityPolicy", m_tLSSecurityPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
