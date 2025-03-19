/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/UpdateChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::mediapackagev2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_inputSwitchConfigurationHasBeenSet)
  {
   payload.WithObject("InputSwitchConfiguration", m_inputSwitchConfiguration.Jsonize());

  }

  if(m_outputHeaderConfigurationHasBeenSet)
  {
   payload.WithObject("OutputHeaderConfiguration", m_outputHeaderConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateChannelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_eTagHasBeenSet)
  {
    ss << m_eTag;
    headers.emplace("x-amzn-update-if-match",  ss.str());
    ss.str("");
  }

  return headers;

}




