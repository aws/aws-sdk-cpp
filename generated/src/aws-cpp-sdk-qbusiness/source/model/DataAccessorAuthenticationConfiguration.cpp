/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DataAccessorAuthenticationConfiguration.h>
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

DataAccessorAuthenticationConfiguration::DataAccessorAuthenticationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DataAccessorAuthenticationConfiguration& DataAccessorAuthenticationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idcTrustedTokenIssuerConfiguration"))
  {
    m_idcTrustedTokenIssuerConfiguration = jsonValue.GetObject("idcTrustedTokenIssuerConfiguration");
    m_idcTrustedTokenIssuerConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DataAccessorAuthenticationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_idcTrustedTokenIssuerConfigurationHasBeenSet)
  {
   payload.WithObject("idcTrustedTokenIssuerConfiguration", m_idcTrustedTokenIssuerConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
