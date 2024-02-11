/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeThumbnailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeThumbnailsRequest::DescribeThumbnailsRequest() : 
    m_channelIdHasBeenSet(false),
    m_pipelineIdHasBeenSet(false),
    m_thumbnailTypeHasBeenSet(false)
{
}

Aws::String DescribeThumbnailsRequest::SerializePayload() const
{
  return {};
}

void DescribeThumbnailsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_pipelineIdHasBeenSet)
    {
      ss << m_pipelineId;
      uri.AddQueryStringParameter("pipelineId", ss.str());
      ss.str("");
    }

    if(m_thumbnailTypeHasBeenSet)
    {
      ss << m_thumbnailType;
      uri.AddQueryStringParameter("thumbnailType", ss.str());
      ss.str("");
    }

}



