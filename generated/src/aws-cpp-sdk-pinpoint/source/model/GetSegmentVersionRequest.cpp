/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/GetSegmentVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSegmentVersionRequest::GetSegmentVersionRequest() : 
    m_applicationIdHasBeenSet(false),
    m_segmentIdHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

Aws::String GetSegmentVersionRequest::SerializePayload() const
{
  return {};
}




