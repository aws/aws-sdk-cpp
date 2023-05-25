/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/GetApplicationPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetApplicationPolicyRequest::GetApplicationPolicyRequest() : 
    m_applicationIdHasBeenSet(false)
{
}

Aws::String GetApplicationPolicyRequest::SerializePayload() const
{
  return {};
}




