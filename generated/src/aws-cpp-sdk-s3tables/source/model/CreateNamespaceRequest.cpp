/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/CreateNamespaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateNamespaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namespaceJsonList(m_namespace.size());
   for(unsigned namespaceIndex = 0; namespaceIndex < namespaceJsonList.GetLength(); ++namespaceIndex)
   {
     namespaceJsonList[namespaceIndex].AsString(m_namespace[namespaceIndex]);
   }
   payload.WithArray("namespace", std::move(namespaceJsonList));

  }

  return payload.View().WriteReadable();
}




