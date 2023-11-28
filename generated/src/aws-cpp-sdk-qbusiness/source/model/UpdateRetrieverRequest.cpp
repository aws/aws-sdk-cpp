/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/UpdateRetrieverRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRetrieverRequest::UpdateRetrieverRequest() : 
    m_applicationIdHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_retrieverIdHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

Aws::String UpdateRetrieverRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload.View().WriteReadable();
}




