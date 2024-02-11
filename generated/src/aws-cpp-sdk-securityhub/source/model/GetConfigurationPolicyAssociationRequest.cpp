/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GetConfigurationPolicyAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetConfigurationPolicyAssociationRequest::GetConfigurationPolicyAssociationRequest() : 
    m_targetHasBeenSet(false)
{
}

Aws::String GetConfigurationPolicyAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithObject("Target", m_target.Jsonize());

  }

  return payload.View().WriteReadable();
}




