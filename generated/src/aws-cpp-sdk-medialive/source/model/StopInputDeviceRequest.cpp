/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/StopInputDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopInputDeviceRequest::StopInputDeviceRequest() : 
    m_inputDeviceIdHasBeenSet(false)
{
}

Aws::String StopInputDeviceRequest::SerializePayload() const
{
  return {};
}




