/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/DeletePipeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pipes::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePipeRequest::DeletePipeRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String DeletePipeRequest::SerializePayload() const
{
  return {};
}




