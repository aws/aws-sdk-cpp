﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/GetLaunchConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetLaunchConfigurationRequest::GetLaunchConfigurationRequest() : 
    m_sourceServerIDHasBeenSet(false)
{
}

Aws::String GetLaunchConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceServerIDHasBeenSet)
  {
   payload.WithString("sourceServerID", m_sourceServerID);

  }

  return payload.View().WriteReadable();
}




