/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/CanadaAdditionalInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

CanadaAdditionalInfo::CanadaAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

CanadaAdditionalInfo& CanadaAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("canadaQuebecSalesTaxNumber"))
  {
    m_canadaQuebecSalesTaxNumber = jsonValue.GetString("canadaQuebecSalesTaxNumber");
    m_canadaQuebecSalesTaxNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("canadaRetailSalesTaxNumber"))
  {
    m_canadaRetailSalesTaxNumber = jsonValue.GetString("canadaRetailSalesTaxNumber");
    m_canadaRetailSalesTaxNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isResellerAccount"))
  {
    m_isResellerAccount = jsonValue.GetBool("isResellerAccount");
    m_isResellerAccountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("provincialSalesTaxId"))
  {
    m_provincialSalesTaxId = jsonValue.GetString("provincialSalesTaxId");
    m_provincialSalesTaxIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CanadaAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_canadaQuebecSalesTaxNumberHasBeenSet)
  {
   payload.WithString("canadaQuebecSalesTaxNumber", m_canadaQuebecSalesTaxNumber);

  }

  if(m_canadaRetailSalesTaxNumberHasBeenSet)
  {
   payload.WithString("canadaRetailSalesTaxNumber", m_canadaRetailSalesTaxNumber);

  }

  if(m_isResellerAccountHasBeenSet)
  {
   payload.WithBool("isResellerAccount", m_isResellerAccount);

  }

  if(m_provincialSalesTaxIdHasBeenSet)
  {
   payload.WithString("provincialSalesTaxId", m_provincialSalesTaxId);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
