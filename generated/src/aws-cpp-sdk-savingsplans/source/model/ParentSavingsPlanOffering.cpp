/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/ParentSavingsPlanOffering.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SavingsPlans
{
namespace Model
{

ParentSavingsPlanOffering::ParentSavingsPlanOffering(JsonView jsonValue)
{
  *this = jsonValue;
}

ParentSavingsPlanOffering& ParentSavingsPlanOffering::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("offeringId"))
  {
    m_offeringId = jsonValue.GetString("offeringId");
    m_offeringIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("paymentOption"))
  {
    m_paymentOption = SavingsPlanPaymentOptionMapper::GetSavingsPlanPaymentOptionForName(jsonValue.GetString("paymentOption"));
    m_paymentOptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("planType"))
  {
    m_planType = SavingsPlanTypeMapper::GetSavingsPlanTypeForName(jsonValue.GetString("planType"));
    m_planTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("durationSeconds"))
  {
    m_durationSeconds = jsonValue.GetInt64("durationSeconds");
    m_durationSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currency"))
  {
    m_currency = CurrencyCodeMapper::GetCurrencyCodeForName(jsonValue.GetString("currency"));
    m_currencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("planDescription"))
  {
    m_planDescription = jsonValue.GetString("planDescription");
    m_planDescriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue ParentSavingsPlanOffering::Jsonize() const
{
  JsonValue payload;

  if(m_offeringIdHasBeenSet)
  {
   payload.WithString("offeringId", m_offeringId);

  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("paymentOption", SavingsPlanPaymentOptionMapper::GetNameForSavingsPlanPaymentOption(m_paymentOption));
  }

  if(m_planTypeHasBeenSet)
  {
   payload.WithString("planType", SavingsPlanTypeMapper::GetNameForSavingsPlanType(m_planType));
  }

  if(m_durationSecondsHasBeenSet)
  {
   payload.WithInt64("durationSeconds", m_durationSeconds);

  }

  if(m_currencyHasBeenSet)
  {
   payload.WithString("currency", CurrencyCodeMapper::GetNameForCurrencyCode(m_currency));
  }

  if(m_planDescriptionHasBeenSet)
  {
   payload.WithString("planDescription", m_planDescription);

  }

  return payload;
}

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
