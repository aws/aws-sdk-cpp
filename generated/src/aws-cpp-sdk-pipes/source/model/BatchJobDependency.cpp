/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/BatchJobDependency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

BatchJobDependency::BatchJobDependency() : 
    m_jobIdHasBeenSet(false),
    m_type(BatchJobDependencyType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

BatchJobDependency::BatchJobDependency(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_type(BatchJobDependencyType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

BatchJobDependency& BatchJobDependency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = BatchJobDependencyTypeMapper::GetBatchJobDependencyTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchJobDependency::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", BatchJobDependencyTypeMapper::GetNameForBatchJobDependencyType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
