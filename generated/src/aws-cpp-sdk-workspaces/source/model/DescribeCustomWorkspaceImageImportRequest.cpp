/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeCustomWorkspaceImageImportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeCustomWorkspaceImageImportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("ImageId", m_imageId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCustomWorkspaceImageImportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DescribeCustomWorkspaceImageImport"));
  return headers;

}




