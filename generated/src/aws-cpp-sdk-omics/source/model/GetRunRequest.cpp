/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetRunRequest::GetRunRequest() : 
    m_exportHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

Aws::String GetRunRequest::SerializePayload() const
{
  return {};
}

void GetRunRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_exportHasBeenSet)
    {
      for(const auto& item : m_export)
      {
        ss << RunExportMapper::GetNameForRunExport(item);
        uri.AddQueryStringParameter("export", ss.str());
        ss.str("");
      }
    }

}



