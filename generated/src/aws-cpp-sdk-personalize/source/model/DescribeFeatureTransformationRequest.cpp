/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DescribeFeatureTransformationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFeatureTransformationRequest::DescribeFeatureTransformationRequest() : 
    m_featureTransformationArnHasBeenSet(false)
{
}

Aws::String DescribeFeatureTransformationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_featureTransformationArnHasBeenSet)
  {
   payload.WithString("featureTransformationArn", m_featureTransformationArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeFeatureTransformationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.DescribeFeatureTransformation"));
  return headers;

}




