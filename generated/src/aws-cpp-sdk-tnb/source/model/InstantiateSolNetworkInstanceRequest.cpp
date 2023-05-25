/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/InstantiateSolNetworkInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

InstantiateSolNetworkInstanceRequest::InstantiateSolNetworkInstanceRequest() : 
    m_additionalParamsForNsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_nsInstanceIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String InstantiateSolNetworkInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_additionalParamsForNsHasBeenSet)
  {
    if(!m_additionalParamsForNs.View().IsNull())
    {
       payload.WithObject("additionalParamsForNs", JsonValue(m_additionalParamsForNs.View()));
    }
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}

void InstantiateSolNetworkInstanceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_dryRunHasBeenSet)
    {
      ss << m_dryRun;
      uri.AddQueryStringParameter("dry_run", ss.str());
      ss.str("");
    }

}



