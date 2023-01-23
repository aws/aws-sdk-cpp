/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/DisassociateServiceQuotaTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateServiceQuotaTemplateRequest::DisassociateServiceQuotaTemplateRequest()
{
}

Aws::String DisassociateServiceQuotaTemplateRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection DisassociateServiceQuotaTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ServiceQuotasV20190624.DisassociateServiceQuotaTemplate"));
  return headers;

}




