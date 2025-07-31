/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/AssociateSessionLoggerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String AssociateSessionLoggerRequest::SerializePayload() const
{
  return {};
}

void AssociateSessionLoggerRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_sessionLoggerArnHasBeenSet)
    {
      ss << m_sessionLoggerArn;
      uri.AddQueryStringParameter("sessionLoggerArn", ss.str());
      ss.str("");
    }

}



