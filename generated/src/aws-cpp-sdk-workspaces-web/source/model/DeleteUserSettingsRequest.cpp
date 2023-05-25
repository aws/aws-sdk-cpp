/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/DeleteUserSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteUserSettingsRequest::DeleteUserSettingsRequest() : 
    m_userSettingsArnHasBeenSet(false)
{
}

Aws::String DeleteUserSettingsRequest::SerializePayload() const
{
  return {};
}




