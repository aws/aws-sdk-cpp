/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/SamlProviderConfiguration.h>
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

SamlProviderConfiguration::SamlProviderConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SamlProviderConfiguration& SamlProviderConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authenticationUrl"))
  {
    m_authenticationUrl = jsonValue.GetString("authenticationUrl");
    m_authenticationUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue SamlProviderConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationUrlHasBeenSet)
  {
   payload.WithString("authenticationUrl", m_authenticationUrl);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
