/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/AcceptedTerm.h>
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

AcceptedTerm::AcceptedTerm() : 
    m_byolPricingTermHasBeenSet(false),
    m_configurableUpfrontPricingTermHasBeenSet(false),
    m_fixedUpfrontPricingTermHasBeenSet(false),
    m_freeTrialPricingTermHasBeenSet(false),
    m_legalTermHasBeenSet(false),
    m_paymentScheduleTermHasBeenSet(false),
    m_recurringPaymentTermHasBeenSet(false),
    m_renewalTermHasBeenSet(false),
    m_supportTermHasBeenSet(false),
    m_usageBasedPricingTermHasBeenSet(false),
    m_validityTermHasBeenSet(false)
{
}

AcceptedTerm::AcceptedTerm(JsonView jsonValue) : 
    m_byolPricingTermHasBeenSet(false),
    m_configurableUpfrontPricingTermHasBeenSet(false),
    m_fixedUpfrontPricingTermHasBeenSet(false),
    m_freeTrialPricingTermHasBeenSet(false),
    m_legalTermHasBeenSet(false),
    m_paymentScheduleTermHasBeenSet(false),
    m_recurringPaymentTermHasBeenSet(false),
    m_renewalTermHasBeenSet(false),
    m_supportTermHasBeenSet(false),
    m_usageBasedPricingTermHasBeenSet(false),
    m_validityTermHasBeenSet(false)
{
  *this = jsonValue;
}

AcceptedTerm& AcceptedTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("byolPricingTerm"))
  {
    m_byolPricingTerm = jsonValue.GetObject("byolPricingTerm");

    m_byolPricingTermHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurableUpfrontPricingTerm"))
  {
    m_configurableUpfrontPricingTerm = jsonValue.GetObject("configurableUpfrontPricingTerm");

    m_configurableUpfrontPricingTermHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fixedUpfrontPricingTerm"))
  {
    m_fixedUpfrontPricingTerm = jsonValue.GetObject("fixedUpfrontPricingTerm");

    m_fixedUpfrontPricingTermHasBeenSet = true;
  }

  if(jsonValue.ValueExists("freeTrialPricingTerm"))
  {
    m_freeTrialPricingTerm = jsonValue.GetObject("freeTrialPricingTerm");

    m_freeTrialPricingTermHasBeenSet = true;
  }

  if(jsonValue.ValueExists("legalTerm"))
  {
    m_legalTerm = jsonValue.GetObject("legalTerm");

    m_legalTermHasBeenSet = true;
  }

  if(jsonValue.ValueExists("paymentScheduleTerm"))
  {
    m_paymentScheduleTerm = jsonValue.GetObject("paymentScheduleTerm");

    m_paymentScheduleTermHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recurringPaymentTerm"))
  {
    m_recurringPaymentTerm = jsonValue.GetObject("recurringPaymentTerm");

    m_recurringPaymentTermHasBeenSet = true;
  }

  if(jsonValue.ValueExists("renewalTerm"))
  {
    m_renewalTerm = jsonValue.GetObject("renewalTerm");

    m_renewalTermHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportTerm"))
  {
    m_supportTerm = jsonValue.GetObject("supportTerm");

    m_supportTermHasBeenSet = true;
  }

  if(jsonValue.ValueExists("usageBasedPricingTerm"))
  {
    m_usageBasedPricingTerm = jsonValue.GetObject("usageBasedPricingTerm");

    m_usageBasedPricingTermHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validityTerm"))
  {
    m_validityTerm = jsonValue.GetObject("validityTerm");

    m_validityTermHasBeenSet = true;
  }

  return *this;
}

JsonValue AcceptedTerm::Jsonize() const
{
  JsonValue payload;

  if(m_byolPricingTermHasBeenSet)
  {
   payload.WithObject("byolPricingTerm", m_byolPricingTerm.Jsonize());

  }

  if(m_configurableUpfrontPricingTermHasBeenSet)
  {
   payload.WithObject("configurableUpfrontPricingTerm", m_configurableUpfrontPricingTerm.Jsonize());

  }

  if(m_fixedUpfrontPricingTermHasBeenSet)
  {
   payload.WithObject("fixedUpfrontPricingTerm", m_fixedUpfrontPricingTerm.Jsonize());

  }

  if(m_freeTrialPricingTermHasBeenSet)
  {
   payload.WithObject("freeTrialPricingTerm", m_freeTrialPricingTerm.Jsonize());

  }

  if(m_legalTermHasBeenSet)
  {
   payload.WithObject("legalTerm", m_legalTerm.Jsonize());

  }

  if(m_paymentScheduleTermHasBeenSet)
  {
   payload.WithObject("paymentScheduleTerm", m_paymentScheduleTerm.Jsonize());

  }

  if(m_recurringPaymentTermHasBeenSet)
  {
   payload.WithObject("recurringPaymentTerm", m_recurringPaymentTerm.Jsonize());

  }

  if(m_renewalTermHasBeenSet)
  {
   payload.WithObject("renewalTerm", m_renewalTerm.Jsonize());

  }

  if(m_supportTermHasBeenSet)
  {
   payload.WithObject("supportTerm", m_supportTerm.Jsonize());

  }

  if(m_usageBasedPricingTermHasBeenSet)
  {
   payload.WithObject("usageBasedPricingTerm", m_usageBasedPricingTerm.Jsonize());

  }

  if(m_validityTermHasBeenSet)
  {
   payload.WithObject("validityTerm", m_validityTerm.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
