/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/SavingsPlanRate.h>
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

SavingsPlanRate::SavingsPlanRate() : 
    m_rateHasBeenSet(false),
    m_currency(CurrencyCode::NOT_SET),
    m_currencyHasBeenSet(false),
    m_unit(SavingsPlanRateUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_productType(SavingsPlanProductType::NOT_SET),
    m_productTypeHasBeenSet(false),
    m_serviceCode(SavingsPlanRateServiceCode::NOT_SET),
    m_serviceCodeHasBeenSet(false),
    m_usageTypeHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

SavingsPlanRate::SavingsPlanRate(JsonView jsonValue) : 
    m_rateHasBeenSet(false),
    m_currency(CurrencyCode::NOT_SET),
    m_currencyHasBeenSet(false),
    m_unit(SavingsPlanRateUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_productType(SavingsPlanProductType::NOT_SET),
    m_productTypeHasBeenSet(false),
    m_serviceCode(SavingsPlanRateServiceCode::NOT_SET),
    m_serviceCodeHasBeenSet(false),
    m_usageTypeHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlanRate& SavingsPlanRate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rate"))
  {
    m_rate = jsonValue.GetString("rate");

    m_rateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currency"))
  {
    m_currency = CurrencyCodeMapper::GetCurrencyCodeForName(jsonValue.GetString("currency"));

    m_currencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = SavingsPlanRateUnitMapper::GetSavingsPlanRateUnitForName(jsonValue.GetString("unit"));

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("productType"))
  {
    m_productType = SavingsPlanProductTypeMapper::GetSavingsPlanProductTypeForName(jsonValue.GetString("productType"));

    m_productTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceCode"))
  {
    m_serviceCode = SavingsPlanRateServiceCodeMapper::GetSavingsPlanRateServiceCodeForName(jsonValue.GetString("serviceCode"));

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

JsonValue SavingsPlanRate::Jsonize() const
{
  JsonValue payload;

  if(m_rateHasBeenSet)
  {
   payload.WithString("rate", m_rate);

  }

  if(m_currencyHasBeenSet)
  {
   payload.WithString("currency", CurrencyCodeMapper::GetNameForCurrencyCode(m_currency));
  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", SavingsPlanRateUnitMapper::GetNameForSavingsPlanRateUnit(m_unit));
  }

  if(m_productTypeHasBeenSet)
  {
   payload.WithString("productType", SavingsPlanProductTypeMapper::GetNameForSavingsPlanProductType(m_productType));
  }

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("serviceCode", SavingsPlanRateServiceCodeMapper::GetNameForSavingsPlanRateServiceCode(m_serviceCode));
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
