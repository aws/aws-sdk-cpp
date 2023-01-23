/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/UndeprecateActivityTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UndeprecateActivityTypeRequest::UndeprecateActivityTypeRequest() : 
    m_domainHasBeenSet(false),
    m_activityTypeHasBeenSet(false)
{
}

Aws::String UndeprecateActivityTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_activityTypeHasBeenSet)
  {
   payload.WithObject("activityType", m_activityType.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UndeprecateActivityTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.UndeprecateActivityType"));
  return headers;

}




