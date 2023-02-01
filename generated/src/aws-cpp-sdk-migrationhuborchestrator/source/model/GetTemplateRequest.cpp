/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/GetTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTemplateRequest::GetTemplateRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String GetTemplateRequest::SerializePayload() const
{
  return {};
}




