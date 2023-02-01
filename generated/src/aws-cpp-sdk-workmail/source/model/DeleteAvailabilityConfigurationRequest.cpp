/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/DeleteAvailabilityConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAvailabilityConfigurationRequest::DeleteAvailabilityConfigurationRequest() : 
    m_organizationIdHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
}

Aws::String DeleteAvailabilityConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAvailabilityConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.DeleteAvailabilityConfiguration"));
  return headers;

}




