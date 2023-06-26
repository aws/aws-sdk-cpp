/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/GetPipelineBlueprintRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OSIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPipelineBlueprintRequest::GetPipelineBlueprintRequest() : 
    m_blueprintNameHasBeenSet(false)
{
}

Aws::String GetPipelineBlueprintRequest::SerializePayload() const
{
  return {};
}




