/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetPluginRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPluginRequest::GetPluginRequest() : 
    m_applicationIdHasBeenSet(false),
    m_pluginIdHasBeenSet(false)
{
}

Aws::String GetPluginRequest::SerializePayload() const
{
  return {};
}




