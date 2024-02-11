/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetGroupRequest::GetGroupRequest() : 
    m_applicationIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_indexIdHasBeenSet(false)
{
}

Aws::String GetGroupRequest::SerializePayload() const
{
  return {};
}

void GetGroupRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_dataSourceIdHasBeenSet)
    {
      ss << m_dataSourceId;
      uri.AddQueryStringParameter("dataSourceId", ss.str());
      ss.str("");
    }

}



