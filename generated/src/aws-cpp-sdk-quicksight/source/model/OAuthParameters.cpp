/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/OAuthParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

OAuthParameters::OAuthParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

OAuthParameters& OAuthParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TokenProviderUrl"))
  {
    m_tokenProviderUrl = jsonValue.GetString("TokenProviderUrl");
    m_tokenProviderUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OAuthScope"))
  {
    m_oAuthScope = jsonValue.GetString("OAuthScope");
    m_oAuthScopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityProviderVpcConnectionProperties"))
  {
    m_identityProviderVpcConnectionProperties = jsonValue.GetObject("IdentityProviderVpcConnectionProperties");
    m_identityProviderVpcConnectionPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityProviderResourceUri"))
  {
    m_identityProviderResourceUri = jsonValue.GetString("IdentityProviderResourceUri");
    m_identityProviderResourceUriHasBeenSet = true;
  }
  return *this;
}

JsonValue OAuthParameters::Jsonize() const
{
  JsonValue payload;

  if(m_tokenProviderUrlHasBeenSet)
  {
   payload.WithString("TokenProviderUrl", m_tokenProviderUrl);

  }

  if(m_oAuthScopeHasBeenSet)
  {
   payload.WithString("OAuthScope", m_oAuthScope);

  }

  if(m_identityProviderVpcConnectionPropertiesHasBeenSet)
  {
   payload.WithObject("IdentityProviderVpcConnectionProperties", m_identityProviderVpcConnectionProperties.Jsonize());

  }

  if(m_identityProviderResourceUriHasBeenSet)
  {
   payload.WithString("IdentityProviderResourceUri", m_identityProviderResourceUri);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
