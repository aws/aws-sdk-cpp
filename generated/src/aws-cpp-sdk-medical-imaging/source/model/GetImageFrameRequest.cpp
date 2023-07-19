/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/GetImageFrameRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MedicalImaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetImageFrameRequest::GetImageFrameRequest() : 
    m_datastoreIdHasBeenSet(false),
    m_imageSetIdHasBeenSet(false),
    m_imageFrameInformationHasBeenSet(false)
{
}

Aws::String GetImageFrameRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageFrameInformationHasBeenSet)
  {
   payload = m_imageFrameInformation.Jsonize();
  }

  return payload.View().WriteReadable();
}




