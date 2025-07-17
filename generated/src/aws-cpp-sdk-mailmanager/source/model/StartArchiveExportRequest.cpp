/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/StartArchiveExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartArchiveExportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_archiveIdHasBeenSet)
  {
   payload.WithString("ArchiveId", m_archiveId);

  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_fromTimestampHasBeenSet)
  {
   payload.WithDouble("FromTimestamp", m_fromTimestamp.SecondsWithMSPrecision());
  }

  if(m_toTimestampHasBeenSet)
  {
   payload.WithDouble("ToTimestamp", m_toTimestamp.SecondsWithMSPrecision());
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_exportDestinationConfigurationHasBeenSet)
  {
   payload.WithObject("ExportDestinationConfiguration", m_exportDestinationConfiguration.Jsonize());

  }

  if(m_includeMetadataHasBeenSet)
  {
   payload.WithBool("IncludeMetadata", m_includeMetadata);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartArchiveExportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.StartArchiveExport"));
  return headers;

}




