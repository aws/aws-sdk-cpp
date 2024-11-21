﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/GetConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMQuickSetup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetConfigurationRequest::GetConfigurationRequest() : 
    m_configurationIdHasBeenSet(false)
{
}

Aws::String GetConfigurationRequest::SerializePayload() const
{
  return {};
}




