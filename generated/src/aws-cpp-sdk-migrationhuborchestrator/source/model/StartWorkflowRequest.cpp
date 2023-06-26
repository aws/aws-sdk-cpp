﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/StartWorkflowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartWorkflowRequest::StartWorkflowRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String StartWorkflowRequest::SerializePayload() const
{
  return {};
}




