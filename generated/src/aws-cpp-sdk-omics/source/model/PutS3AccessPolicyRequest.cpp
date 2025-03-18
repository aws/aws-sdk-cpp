/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/PutS3AccessPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutS3AccessPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_s3AccessPolicyHasBeenSet)
  {
   payload.WithString("s3AccessPolicy", m_s3AccessPolicy);

  }

  return payload.View().WriteReadable();
}




