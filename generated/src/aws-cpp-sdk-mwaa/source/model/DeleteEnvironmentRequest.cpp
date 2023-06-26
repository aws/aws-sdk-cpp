/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/DeleteEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MWAA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteEnvironmentRequest::DeleteEnvironmentRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String DeleteEnvironmentRequest::SerializePayload() const
{
  return {};
}




