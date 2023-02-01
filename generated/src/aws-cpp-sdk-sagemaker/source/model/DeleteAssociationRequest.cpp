/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAssociationRequest::DeleteAssociationRequest() : 
    m_sourceArnHasBeenSet(false),
    m_destinationArnHasBeenSet(false)
{
}

Aws::String DeleteAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("DestinationArn", m_destinationArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAssociationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteAssociation"));
  return headers;

}




