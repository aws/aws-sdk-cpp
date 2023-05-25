/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/ConfigureAccessPointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ConfigureAccessPointRequest::ConfigureAccessPointRequest() : 
    m_accessPointArnHasBeenSet(false),
    m_cpiSecretKeyHasBeenSet(false),
    m_cpiUserIdHasBeenSet(false),
    m_cpiUserPasswordHasBeenSet(false),
    m_cpiUsernameHasBeenSet(false),
    m_positionHasBeenSet(false)
{
}

Aws::String ConfigureAccessPointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessPointArnHasBeenSet)
  {
   payload.WithString("accessPointArn", m_accessPointArn);

  }

  if(m_cpiSecretKeyHasBeenSet)
  {
   payload.WithString("cpiSecretKey", m_cpiSecretKey);

  }

  if(m_cpiUserIdHasBeenSet)
  {
   payload.WithString("cpiUserId", m_cpiUserId);

  }

  if(m_cpiUserPasswordHasBeenSet)
  {
   payload.WithString("cpiUserPassword", m_cpiUserPassword);

  }

  if(m_cpiUsernameHasBeenSet)
  {
   payload.WithString("cpiUsername", m_cpiUsername);

  }

  if(m_positionHasBeenSet)
  {
   payload.WithObject("position", m_position.Jsonize());

  }

  return payload.View().WriteReadable();
}




