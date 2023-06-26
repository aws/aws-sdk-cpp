﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/GetPipelineChangeProgressRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OSIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPipelineChangeProgressRequest::GetPipelineChangeProgressRequest() : 
    m_pipelineNameHasBeenSet(false)
{
}

Aws::String GetPipelineChangeProgressRequest::SerializePayload() const
{
  return {};
}




