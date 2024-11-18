/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/UpdateMessageTemplateMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMessageTemplateMetadataRequest::UpdateMessageTemplateMetadataRequest() : 
    m_descriptionHasBeenSet(false),
    m_groupingConfigurationHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_messageTemplateIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateMessageTemplateMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_groupingConfigurationHasBeenSet)
  {
   payload.WithObject("groupingConfiguration", m_groupingConfiguration.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload.View().WriteReadable();
}




