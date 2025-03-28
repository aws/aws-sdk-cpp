﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SpaceCodeEditorAppSettings.h>
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

SpaceCodeEditorAppSettings::SpaceCodeEditorAppSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

SpaceCodeEditorAppSettings& SpaceCodeEditorAppSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultResourceSpec"))
  {
    m_defaultResourceSpec = jsonValue.GetObject("DefaultResourceSpec");
    m_defaultResourceSpecHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppLifecycleManagement"))
  {
    m_appLifecycleManagement = jsonValue.GetObject("AppLifecycleManagement");
    m_appLifecycleManagementHasBeenSet = true;
  }
  return *this;
}

JsonValue SpaceCodeEditorAppSettings::Jsonize() const
{
  JsonValue payload;

  if(m_defaultResourceSpecHasBeenSet)
  {
   payload.WithObject("DefaultResourceSpec", m_defaultResourceSpec.Jsonize());

  }

  if(m_appLifecycleManagementHasBeenSet)
  {
   payload.WithObject("AppLifecycleManagement", m_appLifecycleManagement.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
