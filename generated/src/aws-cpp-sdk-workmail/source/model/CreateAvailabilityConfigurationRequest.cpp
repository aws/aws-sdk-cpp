/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/CreateAvailabilityConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAvailabilityConfigurationRequest::CreateAvailabilityConfigurationRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_organizationIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_ewsProviderHasBeenSet(false),
    m_lambdaProviderHasBeenSet(false)
{
}

Aws::String CreateAvailabilityConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_ewsProviderHasBeenSet)
  {
   payload.WithObject("EwsProvider", m_ewsProvider.Jsonize());

  }

  if(m_lambdaProviderHasBeenSet)
  {
   payload.WithObject("LambdaProvider", m_lambdaProvider.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAvailabilityConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.CreateAvailabilityConfiguration"));
  return headers;

}




