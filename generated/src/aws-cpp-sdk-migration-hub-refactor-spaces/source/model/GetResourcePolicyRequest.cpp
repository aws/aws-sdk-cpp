/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/GetResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubRefactorSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResourcePolicyRequest::GetResourcePolicyRequest() : 
    m_identifierHasBeenSet(false)
{
}

Aws::String GetResourcePolicyRequest::SerializePayload() const
{
  return {};
}




