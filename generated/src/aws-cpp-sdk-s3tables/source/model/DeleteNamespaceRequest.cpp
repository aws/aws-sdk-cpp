/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/DeleteNamespaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteNamespaceRequest::DeleteNamespaceRequest() : 
    m_tableBucketARNHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

Aws::String DeleteNamespaceRequest::SerializePayload() const
{
  return {};
}




