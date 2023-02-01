/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetWorkflowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetWorkflowRequest::GetWorkflowRequest() : 
    m_exportHasBeenSet(false),
    m_idHasBeenSet(false),
    m_type(WorkflowType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String GetWorkflowRequest::SerializePayload() const
{
  return {};
}

void GetWorkflowRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_exportHasBeenSet)
    {
      for(const auto& item : m_export)
      {
        ss << WorkflowExportMapper::GetNameForWorkflowExport(item);
        uri.AddQueryStringParameter("export", ss.str());
        ss.str("");
      }
    }

    if(m_typeHasBeenSet)
    {
      ss << WorkflowTypeMapper::GetNameForWorkflowType(m_type);
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

}



