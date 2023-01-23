/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/DeleteSchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSchemaRequest::DeleteSchemaRequest() : 
    m_registryNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false)
{
}

Aws::String DeleteSchemaRequest::SerializePayload() const
{
  return {};
}




