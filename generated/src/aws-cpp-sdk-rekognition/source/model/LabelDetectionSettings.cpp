/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/LabelDetectionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

LabelDetectionSettings::LabelDetectionSettings() : 
    m_generalLabelsHasBeenSet(false)
{
}

LabelDetectionSettings::LabelDetectionSettings(JsonView jsonValue) : 
    m_generalLabelsHasBeenSet(false)
{
  *this = jsonValue;
}

LabelDetectionSettings& LabelDetectionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GeneralLabels"))
  {
    m_generalLabels = jsonValue.GetObject("GeneralLabels");

    m_generalLabelsHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelDetectionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_generalLabelsHasBeenSet)
  {
   payload.WithObject("GeneralLabels", m_generalLabels.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
