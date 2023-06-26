/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/UpdateLaunchProfileMemberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLaunchProfileMemberRequest::UpdateLaunchProfileMemberRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_launchProfileIdHasBeenSet(false),
    m_persona(LaunchProfilePersona::NOT_SET),
    m_personaHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_studioIdHasBeenSet(false)
{
}

Aws::String UpdateLaunchProfileMemberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_personaHasBeenSet)
  {
   payload.WithString("persona", LaunchProfilePersonaMapper::GetNameForLaunchProfilePersona(m_persona));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLaunchProfileMemberRequest::GetRequestSpecificHeaders() const
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




