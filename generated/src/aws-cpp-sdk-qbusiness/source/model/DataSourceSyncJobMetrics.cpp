/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DataSourceSyncJobMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

DataSourceSyncJobMetrics::DataSourceSyncJobMetrics() : 
    m_documentsAddedHasBeenSet(false),
    m_documentsDeletedHasBeenSet(false),
    m_documentsFailedHasBeenSet(false),
    m_documentsModifiedHasBeenSet(false),
    m_documentsScannedHasBeenSet(false)
{
}

DataSourceSyncJobMetrics::DataSourceSyncJobMetrics(JsonView jsonValue) : 
    m_documentsAddedHasBeenSet(false),
    m_documentsDeletedHasBeenSet(false),
    m_documentsFailedHasBeenSet(false),
    m_documentsModifiedHasBeenSet(false),
    m_documentsScannedHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceSyncJobMetrics& DataSourceSyncJobMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("documentsAdded"))
  {
    m_documentsAdded = jsonValue.GetString("documentsAdded");

    m_documentsAddedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("documentsDeleted"))
  {
    m_documentsDeleted = jsonValue.GetString("documentsDeleted");

    m_documentsDeletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("documentsFailed"))
  {
    m_documentsFailed = jsonValue.GetString("documentsFailed");

    m_documentsFailedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("documentsModified"))
  {
    m_documentsModified = jsonValue.GetString("documentsModified");

    m_documentsModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("documentsScanned"))
  {
    m_documentsScanned = jsonValue.GetString("documentsScanned");

    m_documentsScannedHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceSyncJobMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_documentsAddedHasBeenSet)
  {
   payload.WithString("documentsAdded", m_documentsAdded);

  }

  if(m_documentsDeletedHasBeenSet)
  {
   payload.WithString("documentsDeleted", m_documentsDeleted);

  }

  if(m_documentsFailedHasBeenSet)
  {
   payload.WithString("documentsFailed", m_documentsFailed);

  }

  if(m_documentsModifiedHasBeenSet)
  {
   payload.WithString("documentsModified", m_documentsModified);

  }

  if(m_documentsScannedHasBeenSet)
  {
   payload.WithString("documentsScanned", m_documentsScanned);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
