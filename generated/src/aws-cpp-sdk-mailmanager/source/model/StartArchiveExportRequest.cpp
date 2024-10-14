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

StartArchiveExportRequest::StartArchiveExportRequest() : 
    m_archiveIdHasBeenSet(false),
    m_exportDestinationConfigurationHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_fromTimestampHasBeenSet(false),
    m_includeMetadata(false),
    m_includeMetadataHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_toTimestampHasBeenSet(false)
{
}

Aws::String StartArchiveExportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_archiveIdHasBeenSet)
  {
   payload.WithString("ArchiveId", m_archiveId);

  }

  if(m_exportDestinationConfigurationHasBeenSet)
  {
   payload.WithObject("ExportDestinationConfiguration", m_exportDestinationConfiguration.Jsonize());

  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_fromTimestampHasBeenSet)
  {
   payload.WithDouble("FromTimestamp", m_fromTimestamp.SecondsWithMSPrecision());
  }

  if(m_includeMetadataHasBeenSet)
  {
   payload.WithBool("IncludeMetadata", m_includeMetadata);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_toTimestampHasBeenSet)
  {
   payload.WithDouble("ToTimestamp", m_toTimestamp.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartArchiveExportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.StartArchiveExport"));
  return headers;

}




