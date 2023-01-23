/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/DeleteGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Synthetics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteGroupRequest::DeleteGroupRequest() : 
    m_groupIdentifierHasBeenSet(false)
{
}

Aws::String DeleteGroupRequest::SerializePayload() const
{
  return {};
}




