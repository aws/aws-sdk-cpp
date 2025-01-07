/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ExpectedCustomerSpend.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

ExpectedCustomerSpend::ExpectedCustomerSpend() : 
    m_amountHasBeenSet(false),
    m_currencyCode(ExpectedCustomerSpendCurrencyCodeEnum::NOT_SET),
    m_currencyCodeHasBeenSet(false),
    m_estimationUrlHasBeenSet(false),
    m_frequency(PaymentFrequency::NOT_SET),
    m_frequencyHasBeenSet(false),
    m_targetCompanyHasBeenSet(false)
{
}

ExpectedCustomerSpend::ExpectedCustomerSpend(JsonView jsonValue)
  : ExpectedCustomerSpend()
{
  *this = jsonValue;
}

ExpectedCustomerSpend& ExpectedCustomerSpend::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Amount"))
  {
    m_amount = jsonValue.GetString("Amount");

    m_amountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = ExpectedCustomerSpendCurrencyCodeEnumMapper::GetExpectedCustomerSpendCurrencyCodeEnumForName(jsonValue.GetString("CurrencyCode"));

    m_currencyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimationUrl"))
  {
    m_estimationUrl = jsonValue.GetString("EstimationUrl");

    m_estimationUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Frequency"))
  {
    m_frequency = PaymentFrequencyMapper::GetPaymentFrequencyForName(jsonValue.GetString("Frequency"));

    m_frequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetCompany"))
  {
    m_targetCompany = jsonValue.GetString("TargetCompany");

    m_targetCompanyHasBeenSet = true;
  }

  return *this;
}

JsonValue ExpectedCustomerSpend::Jsonize() const
{
  JsonValue payload;

  if(m_amountHasBeenSet)
  {
   payload.WithString("Amount", m_amount);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", ExpectedCustomerSpendCurrencyCodeEnumMapper::GetNameForExpectedCustomerSpendCurrencyCodeEnum(m_currencyCode));
  }

  if(m_estimationUrlHasBeenSet)
  {
   payload.WithString("EstimationUrl", m_estimationUrl);

  }

  if(m_frequencyHasBeenSet)
  {
   payload.WithString("Frequency", PaymentFrequencyMapper::GetNameForPaymentFrequency(m_frequency));
  }

  if(m_targetCompanyHasBeenSet)
  {
   payload.WithString("TargetCompany", m_targetCompany);

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
