/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53profiles/model/AssociateResourceToProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Profiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateResourceToProfileRequest::AssociateResourceToProfileRequest() : 
    m_nameHasBeenSet(false),
    m_profileIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_resourcePropertiesHasBeenSet(false)
{
}

Aws::String AssociateResourceToProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("ProfileId", m_profileId);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_resourcePropertiesHasBeenSet)
  {
   payload.WithString("ResourceProperties", m_resourceProperties);

  }

  return payload.View().WriteReadable();
}




