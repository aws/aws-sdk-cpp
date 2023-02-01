/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/DeleteProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteProfileRequest::DeleteProfileRequest() : 
    m_profileIdHasBeenSet(false)
{
}

Aws::String DeleteProfileRequest::SerializePayload() const
{
  return {};
}




