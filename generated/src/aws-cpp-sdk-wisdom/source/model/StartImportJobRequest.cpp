/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/StartImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartImportJobRequest::StartImportJobRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_externalSourceConfigurationHasBeenSet(false),
    m_importJobType(ImportJobType::NOT_SET),
    m_importJobTypeHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_uploadIdHasBeenSet(false)
{
}

Aws::String StartImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_externalSourceConfigurationHasBeenSet)
  {
   payload.WithObject("externalSourceConfiguration", m_externalSourceConfiguration.Jsonize());

  }

  if(m_importJobTypeHasBeenSet)
  {
   payload.WithString("importJobType", ImportJobTypeMapper::GetNameForImportJobType(m_importJobType));
  }

  if(m_metadataHasBeenSet)
  {
   JsonValue metadataJsonMap;
   for(auto& metadataItem : m_metadata)
   {
     metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
   }
   payload.WithObject("metadata", std::move(metadataJsonMap));

  }

  if(m_uploadIdHasBeenSet)
  {
   payload.WithString("uploadId", m_uploadId);

  }

  return payload.View().WriteReadable();
}




