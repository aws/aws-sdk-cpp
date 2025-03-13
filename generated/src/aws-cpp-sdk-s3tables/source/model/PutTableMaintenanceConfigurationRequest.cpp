/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/PutTableMaintenanceConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutTableMaintenanceConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  return payload.View().WriteReadable();
}




