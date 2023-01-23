/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/GetSampledRequestsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSampledRequestsRequest::GetSampledRequestsRequest() : 
    m_webAclArnHasBeenSet(false),
    m_ruleMetricNameHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_timeWindowHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false)
{
}

Aws::String GetSampledRequestsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_webAclArnHasBeenSet)
  {
   payload.WithString("WebAclArn", m_webAclArn);

  }

  if(m_ruleMetricNameHasBeenSet)
  {
   payload.WithString("RuleMetricName", m_ruleMetricName);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if(m_timeWindowHasBeenSet)
  {
   payload.WithObject("TimeWindow", m_timeWindow.Jsonize());

  }

  if(m_maxItemsHasBeenSet)
  {
   payload.WithInt64("MaxItems", m_maxItems);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSampledRequestsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.GetSampledRequests"));
  return headers;

}




