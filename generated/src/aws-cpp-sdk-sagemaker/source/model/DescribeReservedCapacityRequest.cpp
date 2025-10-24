﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/DescribeReservedCapacityRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeReservedCapacityRequest::SerializePayload() const {
  JsonValue payload;

  if (m_reservedCapacityArnHasBeenSet) {
    payload.WithString("ReservedCapacityArn", m_reservedCapacityArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeReservedCapacityRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeReservedCapacity"));
  return headers;
}
