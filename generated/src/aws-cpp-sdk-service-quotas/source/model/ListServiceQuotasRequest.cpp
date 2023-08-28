/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/ListServiceQuotasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListServiceQuotasRequest::ListServiceQuotasRequest() : 
    m_serviceCodeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_quotaCodeHasBeenSet(false),
    m_quotaAppliedAtLevel(AppliedLevelEnum::NOT_SET),
    m_quotaAppliedAtLevelHasBeenSet(false)
{
}

Aws::String ListServiceQuotasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("ServiceCode", m_serviceCode);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_quotaCodeHasBeenSet)
  {
   payload.WithString("QuotaCode", m_quotaCode);

  }

  if(m_quotaAppliedAtLevelHasBeenSet)
  {
   payload.WithString("QuotaAppliedAtLevel", AppliedLevelEnumMapper::GetNameForAppliedLevelEnum(m_quotaAppliedAtLevel));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListServiceQuotasRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ServiceQuotasV20190624.ListServiceQuotas"));
  return headers;

}




