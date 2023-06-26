/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateImageVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateImageVersionRequest::UpdateImageVersionRequest() : 
    m_imageNameHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_aliasesToAddHasBeenSet(false),
    m_aliasesToDeleteHasBeenSet(false),
    m_vendorGuidance(VendorGuidance::NOT_SET),
    m_vendorGuidanceHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_mLFrameworkHasBeenSet(false),
    m_programmingLangHasBeenSet(false),
    m_processor(Processor::NOT_SET),
    m_processorHasBeenSet(false),
    m_horovod(false),
    m_horovodHasBeenSet(false),
    m_releaseNotesHasBeenSet(false)
{
}

Aws::String UpdateImageVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageNameHasBeenSet)
  {
   payload.WithString("ImageName", m_imageName);

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("Alias", m_alias);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("Version", m_version);

  }

  if(m_aliasesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aliasesToAddJsonList(m_aliasesToAdd.size());
   for(unsigned aliasesToAddIndex = 0; aliasesToAddIndex < aliasesToAddJsonList.GetLength(); ++aliasesToAddIndex)
   {
     aliasesToAddJsonList[aliasesToAddIndex].AsString(m_aliasesToAdd[aliasesToAddIndex]);
   }
   payload.WithArray("AliasesToAdd", std::move(aliasesToAddJsonList));

  }

  if(m_aliasesToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aliasesToDeleteJsonList(m_aliasesToDelete.size());
   for(unsigned aliasesToDeleteIndex = 0; aliasesToDeleteIndex < aliasesToDeleteJsonList.GetLength(); ++aliasesToDeleteIndex)
   {
     aliasesToDeleteJsonList[aliasesToDeleteIndex].AsString(m_aliasesToDelete[aliasesToDeleteIndex]);
   }
   payload.WithArray("AliasesToDelete", std::move(aliasesToDeleteJsonList));

  }

  if(m_vendorGuidanceHasBeenSet)
  {
   payload.WithString("VendorGuidance", VendorGuidanceMapper::GetNameForVendorGuidance(m_vendorGuidance));
  }

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("JobType", JobTypeMapper::GetNameForJobType(m_jobType));
  }

  if(m_mLFrameworkHasBeenSet)
  {
   payload.WithString("MLFramework", m_mLFramework);

  }

  if(m_programmingLangHasBeenSet)
  {
   payload.WithString("ProgrammingLang", m_programmingLang);

  }

  if(m_processorHasBeenSet)
  {
   payload.WithString("Processor", ProcessorMapper::GetNameForProcessor(m_processor));
  }

  if(m_horovodHasBeenSet)
  {
   payload.WithBool("Horovod", m_horovod);

  }

  if(m_releaseNotesHasBeenSet)
  {
   payload.WithString("ReleaseNotes", m_releaseNotes);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateImageVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateImageVersion"));
  return headers;

}




