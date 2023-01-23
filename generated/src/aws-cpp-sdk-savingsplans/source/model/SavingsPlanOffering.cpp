/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/SavingsPlanOffering.h>
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

SavingsPlanOffering::SavingsPlanOffering() : 
    m_offeringIdHasBeenSet(false),
    m_productTypesHasBeenSet(false),
    m_planType(SavingsPlanType::NOT_SET),
    m_planTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_paymentOption(SavingsPlanPaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false),
    m_currency(CurrencyCode::NOT_SET),
    m_currencyHasBeenSet(false),
    m_serviceCodeHasBeenSet(false),
    m_usageTypeHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

SavingsPlanOffering::SavingsPlanOffering(JsonView jsonValue) : 
    m_offeringIdHasBeenSet(false),
    m_productTypesHasBeenSet(false),
    m_planType(SavingsPlanType::NOT_SET),
    m_planTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_paymentOption(SavingsPlanPaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false),
    m_currency(CurrencyCode::NOT_SET),
    m_currencyHasBeenSet(false),
    m_serviceCodeHasBeenSet(false),
    m_usageTypeHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlanOffering& SavingsPlanOffering::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("offeringId"))
  {
    m_offeringId = jsonValue.GetString("offeringId");

    m_offeringIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("planType"))
  {
    m_planType = SavingsPlanTypeMapper::GetSavingsPlanTypeForName(jsonValue.GetString("planType"));

    m_planTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("paymentOption"))
  {
    m_paymentOption = SavingsPlanPaymentOptionMapper::GetSavingsPlanPaymentOptionForName(jsonValue.GetString("paymentOption"));

    m_paymentOptionHasBeenSet = true;
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

  if(jsonValue.ValueExists("serviceCode"))
  {
    m_serviceCode = jsonValue.GetString("serviceCode");

    m_serviceCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("usageType"))
  {
    m_usageType = jsonValue.GetString("usageType");

    m_usageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operation"))
  {
    m_operation = jsonValue.GetString("operation");

    m_operationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("properties"))
  {
    Aws::Utils::Array<JsonView> propertiesJsonList = jsonValue.GetArray("properties");
    for(unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex)
    {
      m_properties.push_back(propertiesJsonList[propertiesIndex].AsObject());
    }
    m_propertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlanOffering::Jsonize() const
{
  JsonValue payload;

  if(m_offeringIdHasBeenSet)
  {
   payload.WithString("offeringId", m_offeringId);

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

  if(m_planTypeHasBeenSet)
  {
   payload.WithString("planType", SavingsPlanTypeMapper::GetNameForSavingsPlanType(m_planType));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("paymentOption", SavingsPlanPaymentOptionMapper::GetNameForSavingsPlanPaymentOption(m_paymentOption));
  }

  if(m_durationSecondsHasBeenSet)
  {
   payload.WithInt64("durationSeconds", m_durationSeconds);

  }

  if(m_currencyHasBeenSet)
  {
   payload.WithString("currency", CurrencyCodeMapper::GetNameForCurrencyCode(m_currency));
  }

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("serviceCode", m_serviceCode);

  }

  if(m_usageTypeHasBeenSet)
  {
   payload.WithString("usageType", m_usageType);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("operation", m_operation);

  }

  if(m_propertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertiesJsonList(m_properties.size());
   for(unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex)
   {
     propertiesJsonList[propertiesIndex].AsObject(m_properties[propertiesIndex].Jsonize());
   }
   payload.WithArray("properties", std::move(propertiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
