/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UpdateConfigurationPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConfigurationPolicyRequest::UpdateConfigurationPolicyRequest() : 
    m_identifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updatedReasonHasBeenSet(false),
    m_configurationPolicyHasBeenSet(false)
{
}

Aws::String UpdateConfigurationPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_updatedReasonHasBeenSet)
  {
   payload.WithString("UpdatedReason", m_updatedReason);

  }

  if(m_configurationPolicyHasBeenSet)
  {
   payload.WithObject("ConfigurationPolicy", m_configurationPolicy.Jsonize());

  }

  return payload.View().WriteReadable();
}




