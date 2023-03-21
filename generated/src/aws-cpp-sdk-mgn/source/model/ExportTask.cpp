/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ExportTask.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

ExportTask::ExportTask() : 
    m_creationDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false),
    m_exportIDHasBeenSet(false),
    m_progressPercentage(0.0),
    m_progressPercentageHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3BucketOwnerHasBeenSet(false),
    m_s3KeyHasBeenSet(false),
    m_status(ExportStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_summaryHasBeenSet(false)
{
}

ExportTask::ExportTask(JsonView jsonValue) : 
    m_creationDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false),
    m_exportIDHasBeenSet(false),
    m_progressPercentage(0.0),
    m_progressPercentageHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3BucketOwnerHasBeenSet(false),
    m_s3KeyHasBeenSet(false),
    m_status(ExportStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_summaryHasBeenSet(false)
{
  *this = jsonValue;
}

ExportTask& ExportTask::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetString("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endDateTime"))
  {
    m_endDateTime = jsonValue.GetString("endDateTime");

    m_endDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exportID"))
  {
    m_exportID = jsonValue.GetString("exportID");

    m_exportIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("progressPercentage"))
  {
    m_progressPercentage = jsonValue.GetDouble("progressPercentage");

    m_progressPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("s3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3BucketOwner"))
  {
    m_s3BucketOwner = jsonValue.GetString("s3BucketOwner");

    m_s3BucketOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Key"))
  {
    m_s3Key = jsonValue.GetString("s3Key");

    m_s3KeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ExportStatusMapper::GetExportStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("summary"))
  {
    m_summary = jsonValue.GetObject("summary");

    m_summaryHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportTask::Jsonize() const
{
  JsonValue payload;

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithString("creationDateTime", m_creationDateTime);

  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithString("endDateTime", m_endDateTime);

  }

  if(m_exportIDHasBeenSet)
  {
   payload.WithString("exportID", m_exportID);

  }

  if(m_progressPercentageHasBeenSet)
  {
   payload.WithDouble("progressPercentage", m_progressPercentage);

  }

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("s3Bucket", m_s3Bucket);

  }

  if(m_s3BucketOwnerHasBeenSet)
  {
   payload.WithString("s3BucketOwner", m_s3BucketOwner);

  }

  if(m_s3KeyHasBeenSet)
  {
   payload.WithString("s3Key", m_s3Key);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ExportStatusMapper::GetNameForExportStatus(m_status));
  }

  if(m_summaryHasBeenSet)
  {
   payload.WithObject("summary", m_summary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
