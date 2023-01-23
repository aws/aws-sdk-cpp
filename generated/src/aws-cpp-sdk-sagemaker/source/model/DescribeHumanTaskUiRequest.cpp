/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeHumanTaskUiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeHumanTaskUiRequest::DescribeHumanTaskUiRequest() : 
    m_humanTaskUiNameHasBeenSet(false)
{
}

Aws::String DescribeHumanTaskUiRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_humanTaskUiNameHasBeenSet)
  {
   payload.WithString("HumanTaskUiName", m_humanTaskUiName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeHumanTaskUiRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeHumanTaskUi"));
  return headers;

}




