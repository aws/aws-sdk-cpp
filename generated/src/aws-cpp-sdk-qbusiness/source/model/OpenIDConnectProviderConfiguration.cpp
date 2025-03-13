/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/OpenIDConnectProviderConfiguration.h>
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

OpenIDConnectProviderConfiguration::OpenIDConnectProviderConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenIDConnectProviderConfiguration& OpenIDConnectProviderConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("secretsArn"))
  {
    m_secretsArn = jsonValue.GetString("secretsArn");
    m_secretsArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("secretsRole"))
  {
    m_secretsRole = jsonValue.GetString("secretsRole");
    m_secretsRoleHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenIDConnectProviderConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_secretsArnHasBeenSet)
  {
   payload.WithString("secretsArn", m_secretsArn);

  }

  if(m_secretsRoleHasBeenSet)
  {
   payload.WithString("secretsRole", m_secretsRole);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
