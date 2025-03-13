/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/GetManagedViewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetManagedViewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_managedViewArnHasBeenSet)
  {
   payload.WithString("ManagedViewArn", m_managedViewArn);

  }

  return payload.View().WriteReadable();
}




