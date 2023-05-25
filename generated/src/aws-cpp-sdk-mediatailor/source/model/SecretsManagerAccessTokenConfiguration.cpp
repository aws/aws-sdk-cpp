/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/SecretsManagerAccessTokenConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

SecretsManagerAccessTokenConfiguration::SecretsManagerAccessTokenConfiguration() : 
    m_headerNameHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_secretStringKeyHasBeenSet(false)
{
}

SecretsManagerAccessTokenConfiguration::SecretsManagerAccessTokenConfiguration(JsonView jsonValue) : 
    m_headerNameHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_secretStringKeyHasBeenSet(false)
{
  *this = jsonValue;
}

SecretsManagerAccessTokenConfiguration& SecretsManagerAccessTokenConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HeaderName"))
  {
    m_headerName = jsonValue.GetString("HeaderName");

    m_headerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretStringKey"))
  {
    m_secretStringKey = jsonValue.GetString("SecretStringKey");

    m_secretStringKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue SecretsManagerAccessTokenConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_headerNameHasBeenSet)
  {
   payload.WithString("HeaderName", m_headerName);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_secretStringKeyHasBeenSet)
  {
   payload.WithString("SecretStringKey", m_secretStringKey);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
