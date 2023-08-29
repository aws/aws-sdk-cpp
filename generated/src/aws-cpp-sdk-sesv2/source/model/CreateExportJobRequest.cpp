/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/CreateExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateExportJobRequest::CreateExportJobRequest() : 
    m_exportDataSourceHasBeenSet(false),
    m_exportDestinationHasBeenSet(false)
{
}

Aws::String CreateExportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_exportDataSourceHasBeenSet)
  {
   payload.WithObject("ExportDataSource", m_exportDataSource.Jsonize());

  }

  if(m_exportDestinationHasBeenSet)
  {
   payload.WithObject("ExportDestination", m_exportDestination.Jsonize());

  }

  return payload.View().WriteReadable();
}




