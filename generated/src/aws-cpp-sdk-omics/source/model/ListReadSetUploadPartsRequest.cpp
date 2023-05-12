/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListReadSetUploadPartsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListReadSetUploadPartsRequest::ListReadSetUploadPartsRequest() : 
    m_sequenceStoreIdHasBeenSet(false),
    m_uploadIdHasBeenSet(false),
    m_partSource(ReadSetPartSource::NOT_SET),
    m_partSourceHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

Aws::String ListReadSetUploadPartsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_partSourceHasBeenSet)
  {
   payload.WithString("partSource", ReadSetPartSourceMapper::GetNameForReadSetPartSource(m_partSource));
  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("filter", m_filter.Jsonize());

  }

  return payload.View().WriteReadable();
}

void ListReadSetUploadPartsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

}



