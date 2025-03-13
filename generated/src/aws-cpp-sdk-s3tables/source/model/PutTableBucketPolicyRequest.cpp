/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/PutTableBucketPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutTableBucketPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourcePolicyHasBeenSet)
  {
   payload.WithString("resourcePolicy", m_resourcePolicy);

  }

  return payload.View().WriteReadable();
}




