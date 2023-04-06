/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/CreateServiceSyncConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateServiceSyncConfigRequest::CreateServiceSyncConfigRequest() : 
    m_branchHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryProvider(RepositoryProvider::NOT_SET),
    m_repositoryProviderHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

Aws::String CreateServiceSyncConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_branchHasBeenSet)
  {
   payload.WithString("branch", m_branch);

  }

  if(m_filePathHasBeenSet)
  {
   payload.WithString("filePath", m_filePath);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_repositoryProviderHasBeenSet)
  {
   payload.WithString("repositoryProvider", RepositoryProviderMapper::GetNameForRepositoryProvider(m_repositoryProvider));
  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateServiceSyncConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.CreateServiceSyncConfig"));
  return headers;

}




