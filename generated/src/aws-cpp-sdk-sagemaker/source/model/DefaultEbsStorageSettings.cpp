/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DefaultEbsStorageSettings.h>
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

DefaultEbsStorageSettings::DefaultEbsStorageSettings() : 
    m_defaultEbsVolumeSizeInGb(0),
    m_defaultEbsVolumeSizeInGbHasBeenSet(false),
    m_maximumEbsVolumeSizeInGb(0),
    m_maximumEbsVolumeSizeInGbHasBeenSet(false)
{
}

DefaultEbsStorageSettings::DefaultEbsStorageSettings(JsonView jsonValue) : 
    m_defaultEbsVolumeSizeInGb(0),
    m_defaultEbsVolumeSizeInGbHasBeenSet(false),
    m_maximumEbsVolumeSizeInGb(0),
    m_maximumEbsVolumeSizeInGbHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultEbsStorageSettings& DefaultEbsStorageSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultEbsVolumeSizeInGb"))
  {
    m_defaultEbsVolumeSizeInGb = jsonValue.GetInteger("DefaultEbsVolumeSizeInGb");

    m_defaultEbsVolumeSizeInGbHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumEbsVolumeSizeInGb"))
  {
    m_maximumEbsVolumeSizeInGb = jsonValue.GetInteger("MaximumEbsVolumeSizeInGb");

    m_maximumEbsVolumeSizeInGbHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultEbsStorageSettings::Jsonize() const
{
  JsonValue payload;

  if(m_defaultEbsVolumeSizeInGbHasBeenSet)
  {
   payload.WithInteger("DefaultEbsVolumeSizeInGb", m_defaultEbsVolumeSizeInGb);

  }

  if(m_maximumEbsVolumeSizeInGbHasBeenSet)
  {
   payload.WithInteger("MaximumEbsVolumeSizeInGb", m_maximumEbsVolumeSizeInGb);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
