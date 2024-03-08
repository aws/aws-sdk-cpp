/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EbsStorageSettings.h>
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

EbsStorageSettings::EbsStorageSettings() : 
    m_ebsVolumeSizeInGb(0),
    m_ebsVolumeSizeInGbHasBeenSet(false)
{
}

EbsStorageSettings::EbsStorageSettings(JsonView jsonValue) : 
    m_ebsVolumeSizeInGb(0),
    m_ebsVolumeSizeInGbHasBeenSet(false)
{
  *this = jsonValue;
}

EbsStorageSettings& EbsStorageSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EbsVolumeSizeInGb"))
  {
    m_ebsVolumeSizeInGb = jsonValue.GetInteger("EbsVolumeSizeInGb");

    m_ebsVolumeSizeInGbHasBeenSet = true;
  }

  return *this;
}

JsonValue EbsStorageSettings::Jsonize() const
{
  JsonValue payload;

  if(m_ebsVolumeSizeInGbHasBeenSet)
  {
   payload.WithInteger("EbsVolumeSizeInGb", m_ebsVolumeSizeInGb);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
