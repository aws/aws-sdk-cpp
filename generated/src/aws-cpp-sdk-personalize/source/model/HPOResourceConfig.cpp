/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/HPOResourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

HPOResourceConfig::HPOResourceConfig() : 
    m_maxNumberOfTrainingJobsHasBeenSet(false),
    m_maxParallelTrainingJobsHasBeenSet(false)
{
}

HPOResourceConfig::HPOResourceConfig(JsonView jsonValue) : 
    m_maxNumberOfTrainingJobsHasBeenSet(false),
    m_maxParallelTrainingJobsHasBeenSet(false)
{
  *this = jsonValue;
}

HPOResourceConfig& HPOResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxNumberOfTrainingJobs"))
  {
    m_maxNumberOfTrainingJobs = jsonValue.GetString("maxNumberOfTrainingJobs");

    m_maxNumberOfTrainingJobsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxParallelTrainingJobs"))
  {
    m_maxParallelTrainingJobs = jsonValue.GetString("maxParallelTrainingJobs");

    m_maxParallelTrainingJobsHasBeenSet = true;
  }

  return *this;
}

JsonValue HPOResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_maxNumberOfTrainingJobsHasBeenSet)
  {
   payload.WithString("maxNumberOfTrainingJobs", m_maxNumberOfTrainingJobs);

  }

  if(m_maxParallelTrainingJobsHasBeenSet)
  {
   payload.WithString("maxParallelTrainingJobs", m_maxParallelTrainingJobs);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
