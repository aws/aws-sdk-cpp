/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchDisableStandardsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDisableStandardsRequest::BatchDisableStandardsRequest() : 
    m_standardsSubscriptionArnsHasBeenSet(false)
{
}

Aws::String BatchDisableStandardsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_standardsSubscriptionArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> standardsSubscriptionArnsJsonList(m_standardsSubscriptionArns.size());
   for(unsigned standardsSubscriptionArnsIndex = 0; standardsSubscriptionArnsIndex < standardsSubscriptionArnsJsonList.GetLength(); ++standardsSubscriptionArnsIndex)
   {
     standardsSubscriptionArnsJsonList[standardsSubscriptionArnsIndex].AsString(m_standardsSubscriptionArns[standardsSubscriptionArnsIndex]);
   }
   payload.WithArray("StandardsSubscriptionArns", std::move(standardsSubscriptionArnsJsonList));

  }

  return payload.View().WriteReadable();
}




