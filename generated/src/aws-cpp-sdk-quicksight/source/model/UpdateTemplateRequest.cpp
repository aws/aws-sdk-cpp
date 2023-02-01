/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTemplateRequest::UpdateTemplateRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_sourceEntityHasBeenSet(false),
    m_versionDescriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_definitionHasBeenSet(false)
{
}

Aws::String UpdateTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceEntityHasBeenSet)
  {
   payload.WithObject("SourceEntity", m_sourceEntity.Jsonize());

  }

  if(m_versionDescriptionHasBeenSet)
  {
   payload.WithString("VersionDescription", m_versionDescription);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("Definition", m_definition.Jsonize());

  }

  return payload.View().WriteReadable();
}




