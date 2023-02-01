/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/GetWorkflowStepGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetWorkflowStepGroupRequest::GetWorkflowStepGroupRequest() : 
    m_idHasBeenSet(false),
    m_workflowIdHasBeenSet(false)
{
}

Aws::String GetWorkflowStepGroupRequest::SerializePayload() const
{
  return {};
}

void GetWorkflowStepGroupRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_workflowIdHasBeenSet)
    {
      ss << m_workflowId;
      uri.AddQueryStringParameter("workflowId", ss.str());
      ss.str("");
    }

}



