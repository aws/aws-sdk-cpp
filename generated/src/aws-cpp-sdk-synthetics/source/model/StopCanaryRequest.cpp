/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/StopCanaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Synthetics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopCanaryRequest::StopCanaryRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String StopCanaryRequest::SerializePayload() const
{
  return {};
}




