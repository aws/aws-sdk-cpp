/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/StartExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartExportRequest::StartExportRequest() : 
    m_s3BucketHasBeenSet(false),
    m_s3BucketOwnerHasBeenSet(false),
    m_s3KeyHasBeenSet(false)
{
}

Aws::String StartExportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("s3Bucket", m_s3Bucket);

  }

  if(m_s3BucketOwnerHasBeenSet)
  {
   payload.WithString("s3BucketOwner", m_s3BucketOwner);

  }

  if(m_s3KeyHasBeenSet)
  {
   payload.WithString("s3Key", m_s3Key);

  }

  return payload.View().WriteReadable();
}




