/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/CreateOrganizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateOrganizationRequest::CreateOrganizationRequest() : 
    m_directoryIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_domainsHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_enableInteroperability(false),
    m_enableInteroperabilityHasBeenSet(false)
{
}

Aws::String CreateOrganizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("Alias", m_alias);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_domainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainsJsonList(m_domains.size());
   for(unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex)
   {
     domainsJsonList[domainsIndex].AsObject(m_domains[domainsIndex].Jsonize());
   }
   payload.WithArray("Domains", std::move(domainsJsonList));

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_enableInteroperabilityHasBeenSet)
  {
   payload.WithBool("EnableInteroperability", m_enableInteroperability);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateOrganizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.CreateOrganization"));
  return headers;

}




