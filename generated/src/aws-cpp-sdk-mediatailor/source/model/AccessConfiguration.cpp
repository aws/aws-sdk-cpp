/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AccessConfiguration.h>
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

AccessConfiguration::AccessConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AccessConfiguration& AccessConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessType"))
  {
    m_accessType = AccessTypeMapper::GetAccessTypeForName(jsonValue.GetString("AccessType"));
    m_accessTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretsManagerAccessTokenConfiguration"))
  {
    m_secretsManagerAccessTokenConfiguration = jsonValue.GetObject("SecretsManagerAccessTokenConfiguration");
    m_secretsManagerAccessTokenConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AccessConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accessTypeHasBeenSet)
  {
   payload.WithString("AccessType", AccessTypeMapper::GetNameForAccessType(m_accessType));
  }

  if(m_secretsManagerAccessTokenConfigurationHasBeenSet)
  {
   payload.WithObject("SecretsManagerAccessTokenConfiguration", m_secretsManagerAccessTokenConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
