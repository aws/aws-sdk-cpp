/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore/model/DescribeContainerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeContainerRequest::DescribeContainerRequest() : 
    m_containerNameHasBeenSet(false)
{
}

Aws::String DescribeContainerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("ContainerName", m_containerName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeContainerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MediaStore_20170901.DescribeContainer"));
  return headers;

}




