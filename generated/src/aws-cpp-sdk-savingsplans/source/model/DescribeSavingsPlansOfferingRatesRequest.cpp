/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/DescribeSavingsPlansOfferingRatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SavingsPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSavingsPlansOfferingRatesRequest::DescribeSavingsPlansOfferingRatesRequest() : 
    m_savingsPlanOfferingIdsHasBeenSet(false),
    m_savingsPlanPaymentOptionsHasBeenSet(false),
    m_savingsPlanTypesHasBeenSet(false),
    m_productsHasBeenSet(false),
    m_serviceCodesHasBeenSet(false),
    m_usageTypesHasBeenSet(false),
    m_operationsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeSavingsPlansOfferingRatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_savingsPlanOfferingIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> savingsPlanOfferingIdsJsonList(m_savingsPlanOfferingIds.size());
   for(unsigned savingsPlanOfferingIdsIndex = 0; savingsPlanOfferingIdsIndex < savingsPlanOfferingIdsJsonList.GetLength(); ++savingsPlanOfferingIdsIndex)
   {
     savingsPlanOfferingIdsJsonList[savingsPlanOfferingIdsIndex].AsString(m_savingsPlanOfferingIds[savingsPlanOfferingIdsIndex]);
   }
   payload.WithArray("savingsPlanOfferingIds", std::move(savingsPlanOfferingIdsJsonList));

  }

  if(m_savingsPlanPaymentOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> savingsPlanPaymentOptionsJsonList(m_savingsPlanPaymentOptions.size());
   for(unsigned savingsPlanPaymentOptionsIndex = 0; savingsPlanPaymentOptionsIndex < savingsPlanPaymentOptionsJsonList.GetLength(); ++savingsPlanPaymentOptionsIndex)
   {
     savingsPlanPaymentOptionsJsonList[savingsPlanPaymentOptionsIndex].AsString(SavingsPlanPaymentOptionMapper::GetNameForSavingsPlanPaymentOption(m_savingsPlanPaymentOptions[savingsPlanPaymentOptionsIndex]));
   }
   payload.WithArray("savingsPlanPaymentOptions", std::move(savingsPlanPaymentOptionsJsonList));

  }

  if(m_savingsPlanTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> savingsPlanTypesJsonList(m_savingsPlanTypes.size());
   for(unsigned savingsPlanTypesIndex = 0; savingsPlanTypesIndex < savingsPlanTypesJsonList.GetLength(); ++savingsPlanTypesIndex)
   {
     savingsPlanTypesJsonList[savingsPlanTypesIndex].AsString(SavingsPlanTypeMapper::GetNameForSavingsPlanType(m_savingsPlanTypes[savingsPlanTypesIndex]));
   }
   payload.WithArray("savingsPlanTypes", std::move(savingsPlanTypesJsonList));

  }

  if(m_productsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productsJsonList(m_products.size());
   for(unsigned productsIndex = 0; productsIndex < productsJsonList.GetLength(); ++productsIndex)
   {
     productsJsonList[productsIndex].AsString(SavingsPlanProductTypeMapper::GetNameForSavingsPlanProductType(m_products[productsIndex]));
   }
   payload.WithArray("products", std::move(productsJsonList));

  }

  if(m_serviceCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceCodesJsonList(m_serviceCodes.size());
   for(unsigned serviceCodesIndex = 0; serviceCodesIndex < serviceCodesJsonList.GetLength(); ++serviceCodesIndex)
   {
     serviceCodesJsonList[serviceCodesIndex].AsString(SavingsPlanRateServiceCodeMapper::GetNameForSavingsPlanRateServiceCode(m_serviceCodes[serviceCodesIndex]));
   }
   payload.WithArray("serviceCodes", std::move(serviceCodesJsonList));

  }

  if(m_usageTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usageTypesJsonList(m_usageTypes.size());
   for(unsigned usageTypesIndex = 0; usageTypesIndex < usageTypesJsonList.GetLength(); ++usageTypesIndex)
   {
     usageTypesJsonList[usageTypesIndex].AsString(m_usageTypes[usageTypesIndex]);
   }
   payload.WithArray("usageTypes", std::move(usageTypesJsonList));

  }

  if(m_operationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> operationsJsonList(m_operations.size());
   for(unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex)
   {
     operationsJsonList[operationsIndex].AsString(m_operations[operationsIndex]);
   }
   payload.WithArray("operations", std::move(operationsJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




