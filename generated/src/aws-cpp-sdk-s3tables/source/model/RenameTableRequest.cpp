/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/RenameTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RenameTableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_newNamespaceNameHasBeenSet)
  {
   payload.WithString("newNamespaceName", m_newNamespaceName);

  }

  if(m_newNameHasBeenSet)
  {
   payload.WithString("newName", m_newName);

  }

  if(m_versionTokenHasBeenSet)
  {
   payload.WithString("versionToken", m_versionToken);

  }

  return payload.View().WriteReadable();
}




