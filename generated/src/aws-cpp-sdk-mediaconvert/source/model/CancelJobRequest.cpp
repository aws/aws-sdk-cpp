/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CancelJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelJobRequest::CancelJobRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String CancelJobRequest::SerializePayload() const
{
  return {};
}




