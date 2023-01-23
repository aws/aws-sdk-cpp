/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListVariantImportJobsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

ListVariantImportJobsFilter::ListVariantImportJobsFilter() : 
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_storeNameHasBeenSet(false)
{
}

ListVariantImportJobsFilter::ListVariantImportJobsFilter(JsonView jsonValue) : 
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_storeNameHasBeenSet(false)
{
  *this = jsonValue;
}

ListVariantImportJobsFilter& ListVariantImportJobsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storeName"))
  {
    m_storeName = jsonValue.GetString("storeName");

    m_storeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ListVariantImportJobsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if(m_storeNameHasBeenSet)
  {
   payload.WithString("storeName", m_storeName);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
