/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GetEnabledStandardsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEnabledStandardsRequest::GetEnabledStandardsRequest() : 
    m_standardsSubscriptionArnsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetEnabledStandardsRequest::SerializePayload() const
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

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




