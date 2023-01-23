/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/DeleteCustomMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteCustomMetadataRequest::DeleteCustomMetadataRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_deleteAll(false),
    m_deleteAllHasBeenSet(false)
{
}

Aws::String DeleteCustomMetadataRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection DeleteCustomMetadataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.emplace("authentication",  ss.str());
    ss.str("");
  }

  return headers;

}

void DeleteCustomMetadataRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_versionIdHasBeenSet)
    {
      ss << m_versionId;
      uri.AddQueryStringParameter("versionId", ss.str());
      ss.str("");
    }

    if(m_keysHasBeenSet)
    {
      for(const auto& item : m_keys)
      {
        ss << item;
        uri.AddQueryStringParameter("keys", ss.str());
        ss.str("");
      }
    }

    if(m_deleteAllHasBeenSet)
    {
      ss << m_deleteAll;
      uri.AddQueryStringParameter("deleteAll", ss.str());
      ss.str("");
    }

}



