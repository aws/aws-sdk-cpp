/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StartConfigurationPolicyAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartConfigurationPolicyAssociationRequest::StartConfigurationPolicyAssociationRequest() : 
    m_configurationPolicyIdentifierHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

Aws::String StartConfigurationPolicyAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationPolicyIdentifierHasBeenSet)
  {
   payload.WithString("ConfigurationPolicyIdentifier", m_configurationPolicyIdentifier);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithObject("Target", m_target.Jsonize());

  }

  return payload.View().WriteReadable();
}




