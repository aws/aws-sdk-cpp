﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/GetApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubRefactorSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetApplicationRequest::GetApplicationRequest() : 
    m_applicationIdentifierHasBeenSet(false),
    m_environmentIdentifierHasBeenSet(false)
{
}

Aws::String GetApplicationRequest::SerializePayload() const
{
  return {};
}




