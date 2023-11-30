/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/RecurringPaymentTerm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AgreementService
{
namespace Model
{

RecurringPaymentTerm::RecurringPaymentTerm() : 
    m_billingPeriodHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

RecurringPaymentTerm::RecurringPaymentTerm(JsonView jsonValue) : 
    m_billingPeriodHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

RecurringPaymentTerm& RecurringPaymentTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("billingPeriod"))
  {
    m_billingPeriod = jsonValue.GetString("billingPeriod");

    m_billingPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currencyCode"))
  {
    m_currencyCode = jsonValue.GetString("currencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("price"))
  {
    m_price = jsonValue.GetString("price");

    m_priceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue RecurringPaymentTerm::Jsonize() const
{
  JsonValue payload;

  if(m_billingPeriodHasBeenSet)
  {
   payload.WithString("billingPeriod", m_billingPeriod);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("currencyCode", m_currencyCode);

  }

  if(m_priceHasBeenSet)
  {
   payload.WithString("price", m_price);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
