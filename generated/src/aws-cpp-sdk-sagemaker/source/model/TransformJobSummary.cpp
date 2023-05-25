/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TransformJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TransformJobSummary::TransformJobSummary() : 
    m_transformJobNameHasBeenSet(false),
    m_transformJobArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_transformEndTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_transformJobStatus(TransformJobStatus::NOT_SET),
    m_transformJobStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

TransformJobSummary::TransformJobSummary(JsonView jsonValue) : 
    m_transformJobNameHasBeenSet(false),
    m_transformJobArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_transformEndTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_transformJobStatus(TransformJobStatus::NOT_SET),
    m_transformJobStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

TransformJobSummary& TransformJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TransformJobName"))
  {
    m_transformJobName = jsonValue.GetString("TransformJobName");

    m_transformJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransformJobArn"))
  {
    m_transformJobArn = jsonValue.GetString("TransformJobArn");

    m_transformJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransformEndTime"))
  {
    m_transformEndTime = jsonValue.GetDouble("TransformEndTime");

    m_transformEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransformJobStatus"))
  {
    m_transformJobStatus = TransformJobStatusMapper::GetTransformJobStatusForName(jsonValue.GetString("TransformJobStatus"));

    m_transformJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue TransformJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_transformJobNameHasBeenSet)
  {
   payload.WithString("TransformJobName", m_transformJobName);

  }

  if(m_transformJobArnHasBeenSet)
  {
   payload.WithString("TransformJobArn", m_transformJobArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_transformEndTimeHasBeenSet)
  {
   payload.WithDouble("TransformEndTime", m_transformEndTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_transformJobStatusHasBeenSet)
  {
   payload.WithString("TransformJobStatus", TransformJobStatusMapper::GetNameForTransformJobStatus(m_transformJobStatus));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
