/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/OAuth2ClientCredentialConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

OAuth2ClientCredentialConfiguration::OAuth2ClientCredentialConfiguration() : 
    m_roleArnHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
}

OAuth2ClientCredentialConfiguration::OAuth2ClientCredentialConfiguration(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
  *this = jsonValue;
}

OAuth2ClientCredentialConfiguration& OAuth2ClientCredentialConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretArn"))
  {
    m_secretArn = jsonValue.GetString("secretArn");

    m_secretArnHasBeenSet = true;
  }

  return *this;
}

JsonValue OAuth2ClientCredentialConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("secretArn", m_secretArn);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
