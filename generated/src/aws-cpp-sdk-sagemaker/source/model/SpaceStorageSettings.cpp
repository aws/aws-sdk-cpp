/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SpaceStorageSettings.h>
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

SpaceStorageSettings::SpaceStorageSettings() : 
    m_ebsStorageSettingsHasBeenSet(false)
{
}

SpaceStorageSettings::SpaceStorageSettings(JsonView jsonValue) : 
    m_ebsStorageSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

SpaceStorageSettings& SpaceStorageSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EbsStorageSettings"))
  {
    m_ebsStorageSettings = jsonValue.GetObject("EbsStorageSettings");

    m_ebsStorageSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue SpaceStorageSettings::Jsonize() const
{
  JsonValue payload;

  if(m_ebsStorageSettingsHasBeenSet)
  {
   payload.WithObject("EbsStorageSettings", m_ebsStorageSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
