/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AuthorizationCodeGrantMetadata.h>
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

AuthorizationCodeGrantMetadata::AuthorizationCodeGrantMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthorizationCodeGrantMetadata& AuthorizationCodeGrantMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaseEndpoint"))
  {
    m_baseEndpoint = jsonValue.GetString("BaseEndpoint");
    m_baseEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RedirectUrl"))
  {
    m_redirectUrl = jsonValue.GetString("RedirectUrl");
    m_redirectUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthorizationCodeGrantCredentialsSource"))
  {
    m_authorizationCodeGrantCredentialsSource = AuthorizationCodeGrantCredentialsSourceMapper::GetAuthorizationCodeGrantCredentialsSourceForName(jsonValue.GetString("AuthorizationCodeGrantCredentialsSource"));
    m_authorizationCodeGrantCredentialsSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthorizationCodeGrantCredentialsDetails"))
  {
    m_authorizationCodeGrantCredentialsDetails = jsonValue.GetObject("AuthorizationCodeGrantCredentialsDetails");
    m_authorizationCodeGrantCredentialsDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthorizationCodeGrantMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_baseEndpointHasBeenSet)
  {
   payload.WithString("BaseEndpoint", m_baseEndpoint);

  }

  if(m_redirectUrlHasBeenSet)
  {
   payload.WithString("RedirectUrl", m_redirectUrl);

  }

  if(m_authorizationCodeGrantCredentialsSourceHasBeenSet)
  {
   payload.WithString("AuthorizationCodeGrantCredentialsSource", AuthorizationCodeGrantCredentialsSourceMapper::GetNameForAuthorizationCodeGrantCredentialsSource(m_authorizationCodeGrantCredentialsSource));
  }

  if(m_authorizationCodeGrantCredentialsDetailsHasBeenSet)
  {
   payload.WithObject("AuthorizationCodeGrantCredentialsDetails", m_authorizationCodeGrantCredentialsDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
