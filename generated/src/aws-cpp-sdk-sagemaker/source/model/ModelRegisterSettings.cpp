/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelRegisterSettings.h>
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

ModelRegisterSettings::ModelRegisterSettings() : 
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_crossAccountModelRegisterRoleArnHasBeenSet(false)
{
}

ModelRegisterSettings::ModelRegisterSettings(JsonView jsonValue) : 
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_crossAccountModelRegisterRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

ModelRegisterSettings& ModelRegisterSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrossAccountModelRegisterRoleArn"))
  {
    m_crossAccountModelRegisterRoleArn = jsonValue.GetString("CrossAccountModelRegisterRoleArn");

    m_crossAccountModelRegisterRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelRegisterSettings::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FeatureStatusMapper::GetNameForFeatureStatus(m_status));
  }

  if(m_crossAccountModelRegisterRoleArnHasBeenSet)
  {
   payload.WithString("CrossAccountModelRegisterRoleArn", m_crossAccountModelRegisterRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
