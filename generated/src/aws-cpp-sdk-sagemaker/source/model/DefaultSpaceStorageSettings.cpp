/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DefaultSpaceStorageSettings.h>
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

DefaultSpaceStorageSettings::DefaultSpaceStorageSettings() : 
    m_defaultEbsStorageSettingsHasBeenSet(false)
{
}

DefaultSpaceStorageSettings::DefaultSpaceStorageSettings(JsonView jsonValue) : 
    m_defaultEbsStorageSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultSpaceStorageSettings& DefaultSpaceStorageSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultEbsStorageSettings"))
  {
    m_defaultEbsStorageSettings = jsonValue.GetObject("DefaultEbsStorageSettings");

    m_defaultEbsStorageSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultSpaceStorageSettings::Jsonize() const
{
  JsonValue payload;

  if(m_defaultEbsStorageSettingsHasBeenSet)
  {
   payload.WithObject("DefaultEbsStorageSettings", m_defaultEbsStorageSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
