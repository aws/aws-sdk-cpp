/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetWorkflowVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetWorkflowVersionRequest::SerializePayload() const
{
  return {};
}

void GetWorkflowVersionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_typeHasBeenSet)
    {
      ss << WorkflowTypeMapper::GetNameForWorkflowType(m_type);
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

    if(m_exportHasBeenSet)
    {
      for(const auto& item : m_export)
      {
        ss << WorkflowExportMapper::GetNameForWorkflowExport(item);
        uri.AddQueryStringParameter("export", ss.str());
        ss.str("");
      }
    }

    if(m_workflowOwnerIdHasBeenSet)
    {
      ss << m_workflowOwnerId;
      uri.AddQueryStringParameter("workflowOwnerId", ss.str());
      ss.str("");
    }

}



