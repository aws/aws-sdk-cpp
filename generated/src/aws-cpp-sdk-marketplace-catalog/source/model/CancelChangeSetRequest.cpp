/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/CancelChangeSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CancelChangeSetRequest::CancelChangeSetRequest() : 
    m_catalogHasBeenSet(false),
    m_changeSetIdHasBeenSet(false)
{
}

Aws::String CancelChangeSetRequest::SerializePayload() const
{
  return {};
}

void CancelChangeSetRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_catalogHasBeenSet)
    {
      ss << m_catalog;
      uri.AddQueryStringParameter("catalog", ss.str());
      ss.str("");
    }

    if(m_changeSetIdHasBeenSet)
    {
      ss << m_changeSetId;
      uri.AddQueryStringParameter("changeSetId", ss.str());
      ss.str("");
    }

}



