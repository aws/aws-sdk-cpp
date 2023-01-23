/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/DeleteQueuedSavingsPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SavingsPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteQueuedSavingsPlanRequest::DeleteQueuedSavingsPlanRequest() : 
    m_savingsPlanIdHasBeenSet(false)
{
}

Aws::String DeleteQueuedSavingsPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_savingsPlanIdHasBeenSet)
  {
   payload.WithString("savingsPlanId", m_savingsPlanId);

  }

  return payload.View().WriteReadable();
}




