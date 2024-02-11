/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreateShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateShareRequest::CreateShareRequest() : 
    m_resourceArnHasBeenSet(false),
    m_principalSubscriberHasBeenSet(false),
    m_shareNameHasBeenSet(false)
{
}

Aws::String CreateShareRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_principalSubscriberHasBeenSet)
  {
   payload.WithString("principalSubscriber", m_principalSubscriber);

  }

  if(m_shareNameHasBeenSet)
  {
   payload.WithString("shareName", m_shareName);

  }

  return payload.View().WriteReadable();
}




