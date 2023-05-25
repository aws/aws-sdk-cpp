/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/DescribeActionTargetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeActionTargetsRequest::DescribeActionTargetsRequest() : 
    m_actionTargetArnsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeActionTargetsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionTargetArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionTargetArnsJsonList(m_actionTargetArns.size());
   for(unsigned actionTargetArnsIndex = 0; actionTargetArnsIndex < actionTargetArnsJsonList.GetLength(); ++actionTargetArnsIndex)
   {
     actionTargetArnsJsonList[actionTargetArnsIndex].AsString(m_actionTargetArns[actionTargetArnsIndex]);
   }
   payload.WithArray("ActionTargetArns", std::move(actionTargetArnsJsonList));

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




