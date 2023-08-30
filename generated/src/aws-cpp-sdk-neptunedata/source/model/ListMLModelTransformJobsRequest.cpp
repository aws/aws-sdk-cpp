/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/ListMLModelTransformJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListMLModelTransformJobsRequest::ListMLModelTransformJobsRequest() : 
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_neptuneIamRoleArnHasBeenSet(false)
{
}

Aws::String ListMLModelTransformJobsRequest::SerializePayload() const
{
  return {};
}

void ListMLModelTransformJobsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("maxItems", ss.str());
      ss.str("");
    }

    if(m_neptuneIamRoleArnHasBeenSet)
    {
      ss << m_neptuneIamRoleArn;
      uri.AddQueryStringParameter("neptuneIamRoleArn", ss.str());
      ss.str("");
    }

}



