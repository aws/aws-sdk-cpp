/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/ExportEarthObservationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExportEarthObservationJobRequest::ExportEarthObservationJobRequest() : 
    m_arnHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_exportSourceImages(false),
    m_exportSourceImagesHasBeenSet(false),
    m_outputConfigHasBeenSet(false)
{
}

Aws::String ExportEarthObservationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_exportSourceImagesHasBeenSet)
  {
   payload.WithBool("ExportSourceImages", m_exportSourceImages);

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




