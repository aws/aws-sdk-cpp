/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DeletePluginRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePluginRequest::DeletePluginRequest() : 
    m_applicationIdHasBeenSet(false),
    m_pluginIdHasBeenSet(false)
{
}

Aws::String DeletePluginRequest::SerializePayload() const
{
  return {};
}




