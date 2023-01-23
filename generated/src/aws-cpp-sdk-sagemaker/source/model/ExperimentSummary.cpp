/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ExperimentSummary.h>
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

ExperimentSummary::ExperimentSummary() : 
    m_experimentArnHasBeenSet(false),
    m_experimentNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_experimentSourceHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

ExperimentSummary::ExperimentSummary(JsonView jsonValue) : 
    m_experimentArnHasBeenSet(false),
    m_experimentNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_experimentSourceHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ExperimentSummary& ExperimentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExperimentArn"))
  {
    m_experimentArn = jsonValue.GetString("ExperimentArn");

    m_experimentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExperimentName"))
  {
    m_experimentName = jsonValue.GetString("ExperimentName");

    m_experimentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExperimentSource"))
  {
    m_experimentSource = jsonValue.GetObject("ExperimentSource");

    m_experimentSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperimentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_experimentArnHasBeenSet)
  {
   payload.WithString("ExperimentArn", m_experimentArn);

  }

  if(m_experimentNameHasBeenSet)
  {
   payload.WithString("ExperimentName", m_experimentName);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_experimentSourceHasBeenSet)
  {
   payload.WithObject("ExperimentSource", m_experimentSource.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
