/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/TaxExemption.h>
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

TaxExemption::TaxExemption(JsonView jsonValue)
{
  *this = jsonValue;
}

TaxExemption& TaxExemption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authority"))
  {
    m_authority = jsonValue.GetObject("authority");
    m_authorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("effectiveDate"))
  {
    m_effectiveDate = jsonValue.GetDouble("effectiveDate");
    m_effectiveDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expirationDate"))
  {
    m_expirationDate = jsonValue.GetDouble("expirationDate");
    m_expirationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = EntityExemptionAccountStatusMapper::GetEntityExemptionAccountStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("systemEffectiveDate"))
  {
    m_systemEffectiveDate = jsonValue.GetDouble("systemEffectiveDate");
    m_systemEffectiveDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taxExemptionType"))
  {
    m_taxExemptionType = jsonValue.GetObject("taxExemptionType");
    m_taxExemptionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue TaxExemption::Jsonize() const
{
  JsonValue payload;

  if(m_authorityHasBeenSet)
  {
   payload.WithObject("authority", m_authority.Jsonize());

  }

  if(m_effectiveDateHasBeenSet)
  {
   payload.WithDouble("effectiveDate", m_effectiveDate.SecondsWithMSPrecision());
  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithDouble("expirationDate", m_expirationDate.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", EntityExemptionAccountStatusMapper::GetNameForEntityExemptionAccountStatus(m_status));
  }

  if(m_systemEffectiveDateHasBeenSet)
  {
   payload.WithDouble("systemEffectiveDate", m_systemEffectiveDate.SecondsWithMSPrecision());
  }

  if(m_taxExemptionTypeHasBeenSet)
  {
   payload.WithObject("taxExemptionType", m_taxExemptionType.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
