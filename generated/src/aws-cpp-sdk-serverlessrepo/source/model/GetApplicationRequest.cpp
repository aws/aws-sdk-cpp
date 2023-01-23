/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/GetApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetApplicationRequest::GetApplicationRequest() : 
    m_applicationIdHasBeenSet(false),
    m_semanticVersionHasBeenSet(false)
{
}

Aws::String GetApplicationRequest::SerializePayload() const
{
  return {};
}

void GetApplicationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_semanticVersionHasBeenSet)
    {
      ss << m_semanticVersion;
      uri.AddQueryStringParameter("semanticVersion", ss.str());
      ss.str("");
    }

}



