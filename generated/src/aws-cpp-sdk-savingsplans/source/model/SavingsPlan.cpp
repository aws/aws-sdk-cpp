/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/SavingsPlan.h>
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

SavingsPlan::SavingsPlan() : 
    m_offeringIdHasBeenSet(false),
    m_savingsPlanIdHasBeenSet(false),
    m_savingsPlanArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_startHasBeenSet(false),
    m_endHasBeenSet(false),
    m_state(SavingsPlanState::NOT_SET),
    m_stateHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_ec2InstanceFamilyHasBeenSet(false),
    m_savingsPlanType(SavingsPlanType::NOT_SET),
    m_savingsPlanTypeHasBeenSet(false),
    m_paymentOption(SavingsPlanPaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_productTypesHasBeenSet(false),
    m_currency(CurrencyCode::NOT_SET),
    m_currencyHasBeenSet(false),
    m_commitmentHasBeenSet(false),
    m_upfrontPaymentAmountHasBeenSet(false),
    m_recurringPaymentAmountHasBeenSet(false),
    m_termDurationInSeconds(0),
    m_termDurationInSecondsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

SavingsPlan::SavingsPlan(JsonView jsonValue) : 
    m_offeringIdHasBeenSet(false),
    m_savingsPlanIdHasBeenSet(false),
    m_savingsPlanArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_startHasBeenSet(false),
    m_endHasBeenSet(false),
    m_state(SavingsPlanState::NOT_SET),
    m_stateHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_ec2InstanceFamilyHasBeenSet(false),
    m_savingsPlanType(SavingsPlanType::NOT_SET),
    m_savingsPlanTypeHasBeenSet(false),
    m_paymentOption(SavingsPlanPaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_productTypesHasBeenSet(false),
    m_currency(CurrencyCode::NOT_SET),
    m_currencyHasBeenSet(false),
    m_commitmentHasBeenSet(false),
    m_upfrontPaymentAmountHasBeenSet(false),
    m_recurringPaymentAmountHasBeenSet(false),
    m_termDurationInSeconds(0),
    m_termDurationInSecondsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlan& SavingsPlan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("offeringId"))
  {
    m_offeringId = jsonValue.GetString("offeringId");

    m_offeringIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("savingsPlanId"))
  {
    m_savingsPlanId = jsonValue.GetString("savingsPlanId");

    m_savingsPlanIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("savingsPlanArn"))
  {
    m_savingsPlanArn = jsonValue.GetString("savingsPlanArn");

    m_savingsPlanArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetString("start");

    m_startHasBeenSet = true;
  }

  if(jsonValue.ValueExists("end"))
  {
    m_end = jsonValue.GetString("end");

    m_endHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = SavingsPlanStateMapper::GetSavingsPlanStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2InstanceFamily"))
  {
    m_ec2InstanceFamily = jsonValue.GetString("ec2InstanceFamily");

    m_ec2InstanceFamilyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("savingsPlanType"))
  {
    m_savingsPlanType = SavingsPlanTypeMapper::GetSavingsPlanTypeForName(jsonValue.GetString("savingsPlanType"));

    m_savingsPlanTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("paymentOption"))
  {
    m_paymentOption = SavingsPlanPaymentOptionMapper::GetSavingsPlanPaymentOptionForName(jsonValue.GetString("paymentOption"));

    m_paymentOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("productTypes"))
  {
    Aws::Utils::Array<JsonView> productTypesJsonList = jsonValue.GetArray("productTypes");
    for(unsigned productTypesIndex = 0; productTypesIndex < productTypesJsonList.GetLength(); ++productTypesIndex)
    {
      m_productTypes.push_back(SavingsPlanProductTypeMapper::GetSavingsPlanProductTypeForName(productTypesJsonList[productTypesIndex].AsString()));
    }
    m_productTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currency"))
  {
    m_currency = CurrencyCodeMapper::GetCurrencyCodeForName(jsonValue.GetString("currency"));

    m_currencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("commitment"))
  {
    m_commitment = jsonValue.GetString("commitment");

    m_commitmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("upfrontPaymentAmount"))
  {
    m_upfrontPaymentAmount = jsonValue.GetString("upfrontPaymentAmount");

    m_upfrontPaymentAmountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recurringPaymentAmount"))
  {
    m_recurringPaymentAmount = jsonValue.GetString("recurringPaymentAmount");

    m_recurringPaymentAmountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("termDurationInSeconds"))
  {
    m_termDurationInSeconds = jsonValue.GetInt64("termDurationInSeconds");

    m_termDurationInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlan::Jsonize() const
{
  JsonValue payload;

  if(m_offeringIdHasBeenSet)
  {
   payload.WithString("offeringId", m_offeringId);

  }

  if(m_savingsPlanIdHasBeenSet)
  {
   payload.WithString("savingsPlanId", m_savingsPlanId);

  }

  if(m_savingsPlanArnHasBeenSet)
  {
   payload.WithString("savingsPlanArn", m_savingsPlanArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_startHasBeenSet)
  {
   payload.WithString("start", m_start);

  }

  if(m_endHasBeenSet)
  {
   payload.WithString("end", m_end);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", SavingsPlanStateMapper::GetNameForSavingsPlanState(m_state));
  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_ec2InstanceFamilyHasBeenSet)
  {
   payload.WithString("ec2InstanceFamily", m_ec2InstanceFamily);

  }

  if(m_savingsPlanTypeHasBeenSet)
  {
   payload.WithString("savingsPlanType", SavingsPlanTypeMapper::GetNameForSavingsPlanType(m_savingsPlanType));
  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("paymentOption", SavingsPlanPaymentOptionMapper::GetNameForSavingsPlanPaymentOption(m_paymentOption));
  }

  if(m_productTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productTypesJsonList(m_productTypes.size());
   for(unsigned productTypesIndex = 0; productTypesIndex < productTypesJsonList.GetLength(); ++productTypesIndex)
   {
     productTypesJsonList[productTypesIndex].AsString(SavingsPlanProductTypeMapper::GetNameForSavingsPlanProductType(m_productTypes[productTypesIndex]));
   }
   payload.WithArray("productTypes", std::move(productTypesJsonList));

  }

  if(m_currencyHasBeenSet)
  {
   payload.WithString("currency", CurrencyCodeMapper::GetNameForCurrencyCode(m_currency));
  }

  if(m_commitmentHasBeenSet)
  {
   payload.WithString("commitment", m_commitment);

  }

  if(m_upfrontPaymentAmountHasBeenSet)
  {
   payload.WithString("upfrontPaymentAmount", m_upfrontPaymentAmount);

  }

  if(m_recurringPaymentAmountHasBeenSet)
  {
   payload.WithString("recurringPaymentAmount", m_recurringPaymentAmount);

  }

  if(m_termDurationInSecondsHasBeenSet)
  {
   payload.WithInt64("termDurationInSeconds", m_termDurationInSeconds);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
