/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DataAccessorIdcTrustedTokenIssuerConfiguration.h>
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

DataAccessorIdcTrustedTokenIssuerConfiguration::DataAccessorIdcTrustedTokenIssuerConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DataAccessorIdcTrustedTokenIssuerConfiguration& DataAccessorIdcTrustedTokenIssuerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idcTrustedTokenIssuerArn"))
  {
    m_idcTrustedTokenIssuerArn = jsonValue.GetString("idcTrustedTokenIssuerArn");
    m_idcTrustedTokenIssuerArnHasBeenSet = true;
  }
  return *this;
}

JsonValue DataAccessorIdcTrustedTokenIssuerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_idcTrustedTokenIssuerArnHasBeenSet)
  {
   payload.WithString("idcTrustedTokenIssuerArn", m_idcTrustedTokenIssuerArn);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
