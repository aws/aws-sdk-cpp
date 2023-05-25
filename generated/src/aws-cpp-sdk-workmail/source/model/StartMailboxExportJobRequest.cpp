/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/StartMailboxExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMailboxExportJobRequest::StartMailboxExportJobRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_organizationIdHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3PrefixHasBeenSet(false)
{
}

Aws::String StartMailboxExportJobRequest::SerializePayload() const
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

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("EntityId", m_entityId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_s3PrefixHasBeenSet)
  {
   payload.WithString("S3Prefix", m_s3Prefix);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartMailboxExportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.StartMailboxExportJob"));
  return headers;

}




