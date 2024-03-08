/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StartConfigurationPolicyDisassociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartConfigurationPolicyDisassociationRequest::StartConfigurationPolicyDisassociationRequest() : 
    m_targetHasBeenSet(false),
    m_configurationPolicyIdentifierHasBeenSet(false)
{
}

Aws::String StartConfigurationPolicyDisassociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithObject("Target", m_target.Jsonize());

  }

  if(m_configurationPolicyIdentifierHasBeenSet)
  {
   payload.WithString("ConfigurationPolicyIdentifier", m_configurationPolicyIdentifier);

  }

  return payload.View().WriteReadable();
}




