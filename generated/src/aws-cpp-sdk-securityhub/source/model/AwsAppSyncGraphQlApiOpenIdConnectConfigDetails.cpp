/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAppSyncGraphQlApiOpenIdConnectConfigDetails.h>
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

AwsAppSyncGraphQlApiOpenIdConnectConfigDetails::AwsAppSyncGraphQlApiOpenIdConnectConfigDetails() : 
    m_authTtL(0),
    m_authTtLHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_iatTtL(0),
    m_iatTtLHasBeenSet(false),
    m_issuerHasBeenSet(false)
{
}

AwsAppSyncGraphQlApiOpenIdConnectConfigDetails::AwsAppSyncGraphQlApiOpenIdConnectConfigDetails(JsonView jsonValue) : 
    m_authTtL(0),
    m_authTtLHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_iatTtL(0),
    m_iatTtLHasBeenSet(false),
    m_issuerHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& AwsAppSyncGraphQlApiOpenIdConnectConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthTtL"))
  {
    m_authTtL = jsonValue.GetInt64("AuthTtL");

    m_authTtLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IatTtL"))
  {
    m_iatTtL = jsonValue.GetInt64("IatTtL");

    m_iatTtLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Issuer"))
  {
    m_issuer = jsonValue.GetString("Issuer");

    m_issuerHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAppSyncGraphQlApiOpenIdConnectConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_authTtLHasBeenSet)
  {
   payload.WithInt64("AuthTtL", m_authTtL);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_iatTtLHasBeenSet)
  {
   payload.WithInt64("IatTtL", m_iatTtL);

  }

  if(m_issuerHasBeenSet)
  {
   payload.WithString("Issuer", m_issuer);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
