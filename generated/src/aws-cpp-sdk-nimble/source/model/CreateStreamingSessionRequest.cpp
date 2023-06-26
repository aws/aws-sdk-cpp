/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/CreateStreamingSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStreamingSessionRequest::CreateStreamingSessionRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_ec2InstanceType(StreamingInstanceType::NOT_SET),
    m_ec2InstanceTypeHasBeenSet(false),
    m_launchProfileIdHasBeenSet(false),
    m_ownedByHasBeenSet(false),
    m_streamingImageIdHasBeenSet(false),
    m_studioIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateStreamingSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ec2InstanceTypeHasBeenSet)
  {
   payload.WithString("ec2InstanceType", StreamingInstanceTypeMapper::GetNameForStreamingInstanceType(m_ec2InstanceType));
  }

  if(m_launchProfileIdHasBeenSet)
  {
   payload.WithString("launchProfileId", m_launchProfileId);

  }

  if(m_ownedByHasBeenSet)
  {
   payload.WithString("ownedBy", m_ownedBy);

  }

  if(m_streamingImageIdHasBeenSet)
  {
   payload.WithString("streamingImageId", m_streamingImageId);

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

Aws::Http::HeaderValueCollection CreateStreamingSessionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amz-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




