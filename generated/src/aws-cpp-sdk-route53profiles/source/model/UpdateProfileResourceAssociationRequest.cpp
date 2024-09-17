/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53profiles/model/UpdateProfileResourceAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Profiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProfileResourceAssociationRequest::UpdateProfileResourceAssociationRequest() : 
    m_nameHasBeenSet(false),
    m_profileResourceAssociationIdHasBeenSet(false),
    m_resourcePropertiesHasBeenSet(false)
{
}

Aws::String UpdateProfileResourceAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_resourcePropertiesHasBeenSet)
  {
   payload.WithString("ResourceProperties", m_resourceProperties);

  }

  return payload.View().WriteReadable();
}




