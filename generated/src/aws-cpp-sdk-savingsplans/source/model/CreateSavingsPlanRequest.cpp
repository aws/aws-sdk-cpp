﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/CreateSavingsPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SavingsPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSavingsPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_savingsPlanOfferingIdHasBeenSet)
  {
   payload.WithString("savingsPlanOfferingId", m_savingsPlanOfferingId);

  }

  if(m_commitmentHasBeenSet)
  {
   payload.WithString("commitment", m_commitment);

  }

  if(m_upfrontPaymentAmountHasBeenSet)
  {
   payload.WithString("upfrontPaymentAmount", m_upfrontPaymentAmount);

  }

  if(m_purchaseTimeHasBeenSet)
  {
   payload.WithDouble("purchaseTime", m_purchaseTime.SecondsWithMSPrecision());
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

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

  return payload.View().WriteReadable();
}




