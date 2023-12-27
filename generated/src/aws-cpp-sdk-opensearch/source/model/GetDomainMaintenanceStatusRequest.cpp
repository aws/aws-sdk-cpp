/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/GetDomainMaintenanceStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetDomainMaintenanceStatusRequest::GetDomainMaintenanceStatusRequest() : 
    m_domainNameHasBeenSet(false),
    m_maintenanceIdHasBeenSet(false)
{
}

Aws::String GetDomainMaintenanceStatusRequest::SerializePayload() const
{
  return {};
}

void GetDomainMaintenanceStatusRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maintenanceIdHasBeenSet)
    {
      ss << m_maintenanceId;
      uri.AddQueryStringParameter("maintenanceId", ss.str());
      ss.str("");
    }

}



