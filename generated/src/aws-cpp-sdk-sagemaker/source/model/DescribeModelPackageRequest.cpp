/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/DescribeModelPackageRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeModelPackageRequest::SerializePayload() const {
  JsonValue payload;

  if (m_modelPackageNameHasBeenSet) {
    payload.WithString("ModelPackageName", m_modelPackageName);
  }

  if (m_includedDataHasBeenSet) {
    payload.WithString("IncludedData", IncludedDataMapper::GetNameForIncludedData(m_includedData));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeModelPackageRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeModelPackage"));
  return headers;
}
