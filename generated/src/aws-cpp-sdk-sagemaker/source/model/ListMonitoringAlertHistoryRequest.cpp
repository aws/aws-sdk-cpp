/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListMonitoringAlertHistoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListMonitoringAlertHistoryRequest::ListMonitoringAlertHistoryRequest() : 
    m_monitoringScheduleNameHasBeenSet(false),
    m_monitoringAlertNameHasBeenSet(false),
    m_sortBy(MonitoringAlertHistorySortKey::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false),
    m_statusEquals(MonitoringAlertStatus::NOT_SET),
    m_statusEqualsHasBeenSet(false)
{
}

Aws::String ListMonitoringAlertHistoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_monitoringScheduleNameHasBeenSet)
  {
   payload.WithString("MonitoringScheduleName", m_monitoringScheduleName);

  }

  if(m_monitoringAlertNameHasBeenSet)
  {
   payload.WithString("MonitoringAlertName", m_monitoringAlertName);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", MonitoringAlertHistorySortKeyMapper::GetNameForMonitoringAlertHistorySortKey(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if(m_statusEqualsHasBeenSet)
  {
   payload.WithString("StatusEquals", MonitoringAlertStatusMapper::GetNameForMonitoringAlertStatus(m_statusEquals));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListMonitoringAlertHistoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListMonitoringAlertHistory"));
  return headers;

}




