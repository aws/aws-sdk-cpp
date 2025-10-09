/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AuthenticationMetadata.h>
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

AuthenticationMetadata::AuthenticationMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthenticationMetadata& AuthenticationMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthorizationCodeGrantMetadata"))
  {
    m_authorizationCodeGrantMetadata = jsonValue.GetObject("AuthorizationCodeGrantMetadata");
    m_authorizationCodeGrantMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClientCredentialsGrantMetadata"))
  {
    m_clientCredentialsGrantMetadata = jsonValue.GetObject("ClientCredentialsGrantMetadata");
    m_clientCredentialsGrantMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BasicAuthConnectionMetadata"))
  {
    m_basicAuthConnectionMetadata = jsonValue.GetObject("BasicAuthConnectionMetadata");
    m_basicAuthConnectionMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApiKeyConnectionMetadata"))
  {
    m_apiKeyConnectionMetadata = jsonValue.GetObject("ApiKeyConnectionMetadata");
    m_apiKeyConnectionMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NoneConnectionMetadata"))
  {
    m_noneConnectionMetadata = jsonValue.GetObject("NoneConnectionMetadata");
    m_noneConnectionMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IamConnectionMetadata"))
  {
    m_iamConnectionMetadata = jsonValue.GetObject("IamConnectionMetadata");
    m_iamConnectionMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthenticationMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationCodeGrantMetadataHasBeenSet)
  {
   payload.WithObject("AuthorizationCodeGrantMetadata", m_authorizationCodeGrantMetadata.Jsonize());

  }

  if(m_clientCredentialsGrantMetadataHasBeenSet)
  {
   payload.WithObject("ClientCredentialsGrantMetadata", m_clientCredentialsGrantMetadata.Jsonize());

  }

  if(m_basicAuthConnectionMetadataHasBeenSet)
  {
   payload.WithObject("BasicAuthConnectionMetadata", m_basicAuthConnectionMetadata.Jsonize());

  }

  if(m_apiKeyConnectionMetadataHasBeenSet)
  {
   payload.WithObject("ApiKeyConnectionMetadata", m_apiKeyConnectionMetadata.Jsonize());

  }

  if(m_noneConnectionMetadataHasBeenSet)
  {
   payload.WithObject("NoneConnectionMetadata", m_noneConnectionMetadata.Jsonize());

  }

  if(m_iamConnectionMetadataHasBeenSet)
  {
   payload.WithObject("IamConnectionMetadata", m_iamConnectionMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
