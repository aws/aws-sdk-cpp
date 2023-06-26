/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/AssociateTrustStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

AssociateTrustStoreRequest::AssociateTrustStoreRequest() : 
    m_portalArnHasBeenSet(false),
    m_trustStoreArnHasBeenSet(false)
{
}

Aws::String AssociateTrustStoreRequest::SerializePayload() const
{
  return {};
}

void AssociateTrustStoreRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_trustStoreArnHasBeenSet)
    {
      ss << m_trustStoreArn;
      uri.AddQueryStringParameter("trustStoreArn", ss.str());
      ss.str("");
    }

}



