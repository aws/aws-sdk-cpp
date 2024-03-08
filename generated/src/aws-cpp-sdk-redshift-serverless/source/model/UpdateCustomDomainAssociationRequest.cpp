/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/UpdateCustomDomainAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCustomDomainAssociationRequest::UpdateCustomDomainAssociationRequest() : 
    m_customDomainCertificateArnHasBeenSet(false),
    m_customDomainNameHasBeenSet(false),
    m_workgroupNameHasBeenSet(false)
{
}

Aws::String UpdateCustomDomainAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_customDomainCertificateArnHasBeenSet)
  {
   payload.WithString("customDomainCertificateArn", m_customDomainCertificateArn);

  }

  if(m_customDomainNameHasBeenSet)
  {
   payload.WithString("customDomainName", m_customDomainName);

  }

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("workgroupName", m_workgroupName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCustomDomainAssociationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.UpdateCustomDomainAssociation"));
  return headers;

}




