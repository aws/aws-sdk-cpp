/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/GetWorkflowDefinitionRequest.h>

#include <utility>

using namespace Aws::NovaAct::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetWorkflowDefinitionRequest::SerializePayload() const { return {}; }
