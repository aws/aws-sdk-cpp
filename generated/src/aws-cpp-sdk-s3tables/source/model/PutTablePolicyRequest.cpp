﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/PutTablePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutTablePolicyRequest::PutTablePolicyRequest() : 
    m_tableBucketARNHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourcePolicyHasBeenSet(false)
{
}

Aws::String PutTablePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourcePolicyHasBeenSet)
  {
   payload.WithString("resourcePolicy", m_resourcePolicy);

  }

  return payload.View().WriteReadable();
}




