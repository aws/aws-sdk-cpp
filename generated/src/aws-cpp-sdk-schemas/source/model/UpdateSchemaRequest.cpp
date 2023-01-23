/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/UpdateSchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSchemaRequest::UpdateSchemaRequest() : 
    m_clientTokenId(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenIdHasBeenSet(true),
    m_contentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_registryNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String UpdateSchemaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenIdHasBeenSet)
  {
   payload.WithString("ClientTokenId", m_clientTokenId);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TypeMapper::GetNameForType(m_type));
  }

  return payload.View().WriteReadable();
}




