/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProjectSummary.h>
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

ProjectSummary::ProjectSummary() : 
    m_projectNameHasBeenSet(false),
    m_projectDescriptionHasBeenSet(false),
    m_projectArnHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_projectStatus(ProjectStatus::NOT_SET),
    m_projectStatusHasBeenSet(false)
{
}

ProjectSummary::ProjectSummary(JsonView jsonValue) : 
    m_projectNameHasBeenSet(false),
    m_projectDescriptionHasBeenSet(false),
    m_projectArnHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_projectStatus(ProjectStatus::NOT_SET),
    m_projectStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectSummary& ProjectSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProjectName"))
  {
    m_projectName = jsonValue.GetString("ProjectName");

    m_projectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectDescription"))
  {
    m_projectDescription = jsonValue.GetString("ProjectDescription");

    m_projectDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectArn"))
  {
    m_projectArn = jsonValue.GetString("ProjectArn");

    m_projectArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectId"))
  {
    m_projectId = jsonValue.GetString("ProjectId");

    m_projectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectStatus"))
  {
    m_projectStatus = ProjectStatusMapper::GetProjectStatusForName(jsonValue.GetString("ProjectStatus"));

    m_projectStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectSummary::Jsonize() const
{
  JsonValue payload;

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("ProjectName", m_projectName);

  }

  if(m_projectDescriptionHasBeenSet)
  {
   payload.WithString("ProjectDescription", m_projectDescription);

  }

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("ProjectArn", m_projectArn);

  }

  if(m_projectIdHasBeenSet)
  {
   payload.WithString("ProjectId", m_projectId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_projectStatusHasBeenSet)
  {
   payload.WithString("ProjectStatus", ProjectStatusMapper::GetNameForProjectStatus(m_projectStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
