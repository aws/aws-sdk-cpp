/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/CreateTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTableRequest::CreateTableRequest() : 
    m_tableBucketARNHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_format(OpenTableFormat::NOT_SET),
    m_formatHasBeenSet(false)
{
}

Aws::String CreateTableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", OpenTableFormatMapper::GetNameForOpenTableFormat(m_format));
  }

  return payload.View().WriteReadable();
}




