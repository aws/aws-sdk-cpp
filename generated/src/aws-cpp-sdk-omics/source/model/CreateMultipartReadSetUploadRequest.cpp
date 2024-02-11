/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreateMultipartReadSetUploadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMultipartReadSetUploadRequest::CreateMultipartReadSetUploadRequest() : 
    m_sequenceStoreIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_sourceFileType(FileType::NOT_SET),
    m_sourceFileTypeHasBeenSet(false),
    m_subjectIdHasBeenSet(false),
    m_sampleIdHasBeenSet(false),
    m_generatedFromHasBeenSet(false),
    m_referenceArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateMultipartReadSetUploadRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_sourceFileTypeHasBeenSet)
  {
   payload.WithString("sourceFileType", FileTypeMapper::GetNameForFileType(m_sourceFileType));
  }

  if(m_subjectIdHasBeenSet)
  {
   payload.WithString("subjectId", m_subjectId);

  }

  if(m_sampleIdHasBeenSet)
  {
   payload.WithString("sampleId", m_sampleId);

  }

  if(m_generatedFromHasBeenSet)
  {
   payload.WithString("generatedFrom", m_generatedFrom);

  }

  if(m_referenceArnHasBeenSet)
  {
   payload.WithString("referenceArn", m_referenceArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




