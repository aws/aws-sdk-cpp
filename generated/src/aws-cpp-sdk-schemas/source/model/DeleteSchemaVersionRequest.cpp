/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/DeleteSchemaVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSchemaVersionRequest::DeleteSchemaVersionRequest() : 
    m_registryNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_schemaVersionHasBeenSet(false)
{
}

Aws::String DeleteSchemaVersionRequest::SerializePayload() const
{
  return {};
}




