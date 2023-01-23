/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/PutConfigurationSetVdmOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutConfigurationSetVdmOptionsRequest::PutConfigurationSetVdmOptionsRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_vdmOptionsHasBeenSet(false)
{
}

Aws::String PutConfigurationSetVdmOptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vdmOptionsHasBeenSet)
  {
   payload.WithObject("VdmOptions", m_vdmOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}




