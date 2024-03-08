/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GetSecurityControlDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetSecurityControlDefinitionRequest::GetSecurityControlDefinitionRequest() : 
    m_securityControlIdHasBeenSet(false)
{
}

Aws::String GetSecurityControlDefinitionRequest::SerializePayload() const
{
  return {};
}

void GetSecurityControlDefinitionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_securityControlIdHasBeenSet)
    {
      ss << m_securityControlId;
      uri.AddQueryStringParameter("SecurityControlId", ss.str());
      ss.str("");
    }

}



