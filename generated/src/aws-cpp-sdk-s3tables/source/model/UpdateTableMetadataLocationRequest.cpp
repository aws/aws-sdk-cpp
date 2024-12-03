/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/UpdateTableMetadataLocationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTableMetadataLocationRequest::UpdateTableMetadataLocationRequest() : 
    m_tableBucketARNHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionTokenHasBeenSet(false),
    m_metadataLocationHasBeenSet(false)
{
}

Aws::String UpdateTableMetadataLocationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_versionTokenHasBeenSet)
  {
   payload.WithString("versionToken", m_versionToken);

  }

  if(m_metadataLocationHasBeenSet)
  {
   payload.WithString("metadataLocation", m_metadataLocation);

  }

  return payload.View().WriteReadable();
}




