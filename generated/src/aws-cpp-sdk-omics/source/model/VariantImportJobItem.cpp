/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/VariantImportJobItem.h>
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

VariantImportJobItem::VariantImportJobItem() : 
    m_completionTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_destinationNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_runLeftNormalization(false),
    m_runLeftNormalizationHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

VariantImportJobItem::VariantImportJobItem(JsonView jsonValue) : 
    m_completionTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_destinationNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_runLeftNormalization(false),
    m_runLeftNormalizationHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

VariantImportJobItem& VariantImportJobItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetString("completionTime");

    m_completionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationName"))
  {
    m_destinationName = jsonValue.GetString("destinationName");

    m_destinationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runLeftNormalization"))
  {
    m_runLeftNormalization = jsonValue.GetBool("runLeftNormalization");

    m_runLeftNormalizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue VariantImportJobItem::Jsonize() const
{
  JsonValue payload;

  if(m_completionTimeHasBeenSet)
  {
   payload.WithString("completionTime", m_completionTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_destinationNameHasBeenSet)
  {
   payload.WithString("destinationName", m_destinationName);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_runLeftNormalizationHasBeenSet)
  {
   payload.WithBool("runLeftNormalization", m_runLeftNormalization);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithString("updateTime", m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
