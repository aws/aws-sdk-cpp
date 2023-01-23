/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/DeleteActionTargetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteActionTargetRequest::DeleteActionTargetRequest() : 
    m_actionTargetArnHasBeenSet(false)
{
}

Aws::String DeleteActionTargetRequest::SerializePayload() const
{
  return {};
}




