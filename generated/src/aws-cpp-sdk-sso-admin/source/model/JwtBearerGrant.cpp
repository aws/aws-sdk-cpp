/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/JwtBearerGrant.h>
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

JwtBearerGrant::JwtBearerGrant() : 
    m_authorizedTokenIssuersHasBeenSet(false)
{
}

JwtBearerGrant::JwtBearerGrant(JsonView jsonValue) : 
    m_authorizedTokenIssuersHasBeenSet(false)
{
  *this = jsonValue;
}

JwtBearerGrant& JwtBearerGrant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthorizedTokenIssuers"))
  {
    Aws::Utils::Array<JsonView> authorizedTokenIssuersJsonList = jsonValue.GetArray("AuthorizedTokenIssuers");
    for(unsigned authorizedTokenIssuersIndex = 0; authorizedTokenIssuersIndex < authorizedTokenIssuersJsonList.GetLength(); ++authorizedTokenIssuersIndex)
    {
      m_authorizedTokenIssuers.push_back(authorizedTokenIssuersJsonList[authorizedTokenIssuersIndex].AsObject());
    }
    m_authorizedTokenIssuersHasBeenSet = true;
  }

  return *this;
}

JsonValue JwtBearerGrant::Jsonize() const
{
  JsonValue payload;

  if(m_authorizedTokenIssuersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authorizedTokenIssuersJsonList(m_authorizedTokenIssuers.size());
   for(unsigned authorizedTokenIssuersIndex = 0; authorizedTokenIssuersIndex < authorizedTokenIssuersJsonList.GetLength(); ++authorizedTokenIssuersIndex)
   {
     authorizedTokenIssuersJsonList[authorizedTokenIssuersIndex].AsObject(m_authorizedTokenIssuers[authorizedTokenIssuersIndex].Jsonize());
   }
   payload.WithArray("AuthorizedTokenIssuers", std::move(authorizedTokenIssuersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
