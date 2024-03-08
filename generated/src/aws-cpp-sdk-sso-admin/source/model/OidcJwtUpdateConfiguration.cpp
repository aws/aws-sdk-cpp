/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/OidcJwtUpdateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

OidcJwtUpdateConfiguration::OidcJwtUpdateConfiguration() : 
    m_claimAttributePathHasBeenSet(false),
    m_identityStoreAttributePathHasBeenSet(false),
    m_jwksRetrievalOption(JwksRetrievalOption::NOT_SET),
    m_jwksRetrievalOptionHasBeenSet(false)
{
}

OidcJwtUpdateConfiguration::OidcJwtUpdateConfiguration(JsonView jsonValue) : 
    m_claimAttributePathHasBeenSet(false),
    m_identityStoreAttributePathHasBeenSet(false),
    m_jwksRetrievalOption(JwksRetrievalOption::NOT_SET),
    m_jwksRetrievalOptionHasBeenSet(false)
{
  *this = jsonValue;
}

OidcJwtUpdateConfiguration& OidcJwtUpdateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClaimAttributePath"))
  {
    m_claimAttributePath = jsonValue.GetString("ClaimAttributePath");

    m_claimAttributePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityStoreAttributePath"))
  {
    m_identityStoreAttributePath = jsonValue.GetString("IdentityStoreAttributePath");

    m_identityStoreAttributePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JwksRetrievalOption"))
  {
    m_jwksRetrievalOption = JwksRetrievalOptionMapper::GetJwksRetrievalOptionForName(jsonValue.GetString("JwksRetrievalOption"));

    m_jwksRetrievalOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue OidcJwtUpdateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_claimAttributePathHasBeenSet)
  {
   payload.WithString("ClaimAttributePath", m_claimAttributePath);

  }

  if(m_identityStoreAttributePathHasBeenSet)
  {
   payload.WithString("IdentityStoreAttributePath", m_identityStoreAttributePath);

  }

  if(m_jwksRetrievalOptionHasBeenSet)
  {
   payload.WithString("JwksRetrievalOption", JwksRetrievalOptionMapper::GetNameForJwksRetrievalOption(m_jwksRetrievalOption));
  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
