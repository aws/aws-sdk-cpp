/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/GetSegmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSegmentRequest::GetSegmentRequest() : 
    m_applicationIdHasBeenSet(false),
    m_segmentIdHasBeenSet(false)
{
}

Aws::String GetSegmentRequest::SerializePayload() const
{
  return {};
}




