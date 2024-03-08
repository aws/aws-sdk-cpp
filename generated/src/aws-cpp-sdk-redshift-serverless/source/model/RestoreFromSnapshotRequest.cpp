/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/RestoreFromSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RestoreFromSnapshotRequest::RestoreFromSnapshotRequest() : 
    m_adminPasswordSecretKmsKeyIdHasBeenSet(false),
    m_manageAdminPassword(false),
    m_manageAdminPasswordHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_snapshotArnHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_workgroupNameHasBeenSet(false)
{
}

Aws::String RestoreFromSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adminPasswordSecretKmsKeyIdHasBeenSet)
  {
   payload.WithString("adminPasswordSecretKmsKeyId", m_adminPasswordSecretKmsKeyId);

  }

  if(m_manageAdminPasswordHasBeenSet)
  {
   payload.WithBool("manageAdminPassword", m_manageAdminPassword);

  }

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  if(m_ownerAccountHasBeenSet)
  {
   payload.WithString("ownerAccount", m_ownerAccount);

  }

  if(m_snapshotArnHasBeenSet)
  {
   payload.WithString("snapshotArn", m_snapshotArn);

  }

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("snapshotName", m_snapshotName);

  }

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("workgroupName", m_workgroupName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RestoreFromSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.RestoreFromSnapshot"));
  return headers;

}




