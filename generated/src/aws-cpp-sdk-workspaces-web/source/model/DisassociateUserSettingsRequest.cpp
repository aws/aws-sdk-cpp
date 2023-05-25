/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/DisassociateUserSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateUserSettingsRequest::DisassociateUserSettingsRequest() : 
    m_portalArnHasBeenSet(false)
{
}

Aws::String DisassociateUserSettingsRequest::SerializePayload() const
{
  return {};
}




