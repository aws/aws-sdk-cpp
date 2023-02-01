/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/AnnotationImportItemDetail.h>
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

AnnotationImportItemDetail::AnnotationImportItemDetail() : 
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

AnnotationImportItemDetail::AnnotationImportItemDetail(JsonView jsonValue) : 
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

AnnotationImportItemDetail& AnnotationImportItemDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("jobStatus"));

    m_jobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue AnnotationImportItemDetail::Jsonize() const
{
  JsonValue payload;

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("jobStatus", JobStatusMapper::GetNameForJobStatus(m_jobStatus));
  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
