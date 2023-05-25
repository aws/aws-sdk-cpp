/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EdgePresetDeploymentOutput.h>
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

EdgePresetDeploymentOutput::EdgePresetDeploymentOutput() : 
    m_type(EdgePresetDeploymentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_artifactHasBeenSet(false),
    m_status(EdgePresetDeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

EdgePresetDeploymentOutput::EdgePresetDeploymentOutput(JsonView jsonValue) : 
    m_type(EdgePresetDeploymentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_artifactHasBeenSet(false),
    m_status(EdgePresetDeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

EdgePresetDeploymentOutput& EdgePresetDeploymentOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = EdgePresetDeploymentTypeMapper::GetEdgePresetDeploymentTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Artifact"))
  {
    m_artifact = jsonValue.GetString("Artifact");

    m_artifactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EdgePresetDeploymentStatusMapper::GetEdgePresetDeploymentStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue EdgePresetDeploymentOutput::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EdgePresetDeploymentTypeMapper::GetNameForEdgePresetDeploymentType(m_type));
  }

  if(m_artifactHasBeenSet)
  {
   payload.WithString("Artifact", m_artifact);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EdgePresetDeploymentStatusMapper::GetNameForEdgePresetDeploymentStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
