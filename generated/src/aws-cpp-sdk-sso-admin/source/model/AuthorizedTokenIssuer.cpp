/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/AuthorizedTokenIssuer.h>
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

AuthorizedTokenIssuer::AuthorizedTokenIssuer() : 
    m_authorizedAudiencesHasBeenSet(false),
    m_trustedTokenIssuerArnHasBeenSet(false)
{
}

AuthorizedTokenIssuer::AuthorizedTokenIssuer(JsonView jsonValue) : 
    m_authorizedAudiencesHasBeenSet(false),
    m_trustedTokenIssuerArnHasBeenSet(false)
{
  *this = jsonValue;
}

AuthorizedTokenIssuer& AuthorizedTokenIssuer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthorizedAudiences"))
  {
    Aws::Utils::Array<JsonView> authorizedAudiencesJsonList = jsonValue.GetArray("AuthorizedAudiences");
    for(unsigned authorizedAudiencesIndex = 0; authorizedAudiencesIndex < authorizedAudiencesJsonList.GetLength(); ++authorizedAudiencesIndex)
    {
      m_authorizedAudiences.push_back(authorizedAudiencesJsonList[authorizedAudiencesIndex].AsString());
    }
    m_authorizedAudiencesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrustedTokenIssuerArn"))
  {
    m_trustedTokenIssuerArn = jsonValue.GetString("TrustedTokenIssuerArn");

    m_trustedTokenIssuerArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthorizedTokenIssuer::Jsonize() const
{
  JsonValue payload;

  if(m_authorizedAudiencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authorizedAudiencesJsonList(m_authorizedAudiences.size());
   for(unsigned authorizedAudiencesIndex = 0; authorizedAudiencesIndex < authorizedAudiencesJsonList.GetLength(); ++authorizedAudiencesIndex)
   {
     authorizedAudiencesJsonList[authorizedAudiencesIndex].AsString(m_authorizedAudiences[authorizedAudiencesIndex]);
   }
   payload.WithArray("AuthorizedAudiences", std::move(authorizedAudiencesJsonList));

  }

  if(m_trustedTokenIssuerArnHasBeenSet)
  {
   payload.WithString("TrustedTokenIssuerArn", m_trustedTokenIssuerArn);

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
