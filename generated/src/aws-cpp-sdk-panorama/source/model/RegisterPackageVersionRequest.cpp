﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/RegisterPackageVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterPackageVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_markLatestHasBeenSet)
  {
   payload.WithBool("MarkLatest", m_markLatest);

  }

  if(m_ownerAccountHasBeenSet)
  {
   payload.WithString("OwnerAccount", m_ownerAccount);

  }

  return payload.View().WriteReadable();
}




