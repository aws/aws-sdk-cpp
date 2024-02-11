/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateAccountConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAccountConfigurationRequest::UpdateAccountConfigurationRequest() : 
    m_accountConfigurationHasBeenSet(false)
{
}

Aws::String UpdateAccountConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountConfigurationHasBeenSet)
  {
   payload.WithObject("accountConfiguration", m_accountConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




