/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateImageVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateImageVersionRequest::CreateImageVersionRequest() : 
    m_baseImageHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_imageNameHasBeenSet(false),
    m_aliasesHasBeenSet(false),
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

Aws::String CreateImageVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_baseImageHasBeenSet)
  {
   payload.WithString("BaseImage", m_baseImage);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_imageNameHasBeenSet)
  {
   payload.WithString("ImageName", m_imageName);

  }

  if(m_aliasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aliasesJsonList(m_aliases.size());
   for(unsigned aliasesIndex = 0; aliasesIndex < aliasesJsonList.GetLength(); ++aliasesIndex)
   {
     aliasesJsonList[aliasesIndex].AsString(m_aliases[aliasesIndex]);
   }
   payload.WithArray("Aliases", std::move(aliasesJsonList));

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

Aws::Http::HeaderValueCollection CreateImageVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateImageVersion"));
  return headers;

}




