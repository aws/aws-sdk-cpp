/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/CloudRemovalConfigInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

CloudRemovalConfigInput::CloudRemovalConfigInput() : 
    m_algorithmName(AlgorithmNameCloudRemoval::NOT_SET),
    m_algorithmNameHasBeenSet(false),
    m_interpolationValueHasBeenSet(false),
    m_targetBandsHasBeenSet(false)
{
}

CloudRemovalConfigInput::CloudRemovalConfigInput(JsonView jsonValue) : 
    m_algorithmName(AlgorithmNameCloudRemoval::NOT_SET),
    m_algorithmNameHasBeenSet(false),
    m_interpolationValueHasBeenSet(false),
    m_targetBandsHasBeenSet(false)
{
  *this = jsonValue;
}

CloudRemovalConfigInput& CloudRemovalConfigInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlgorithmName"))
  {
    m_algorithmName = AlgorithmNameCloudRemovalMapper::GetAlgorithmNameCloudRemovalForName(jsonValue.GetString("AlgorithmName"));

    m_algorithmNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InterpolationValue"))
  {
    m_interpolationValue = jsonValue.GetString("InterpolationValue");

    m_interpolationValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetBands"))
  {
    Aws::Utils::Array<JsonView> targetBandsJsonList = jsonValue.GetArray("TargetBands");
    for(unsigned targetBandsIndex = 0; targetBandsIndex < targetBandsJsonList.GetLength(); ++targetBandsIndex)
    {
      m_targetBands.push_back(targetBandsJsonList[targetBandsIndex].AsString());
    }
    m_targetBandsHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudRemovalConfigInput::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmNameHasBeenSet)
  {
   payload.WithString("AlgorithmName", AlgorithmNameCloudRemovalMapper::GetNameForAlgorithmNameCloudRemoval(m_algorithmName));
  }

  if(m_interpolationValueHasBeenSet)
  {
   payload.WithString("InterpolationValue", m_interpolationValue);

  }

  if(m_targetBandsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetBandsJsonList(m_targetBands.size());
   for(unsigned targetBandsIndex = 0; targetBandsIndex < targetBandsJsonList.GetLength(); ++targetBandsIndex)
   {
     targetBandsJsonList[targetBandsIndex].AsString(m_targetBands[targetBandsIndex]);
   }
   payload.WithArray("TargetBands", std::move(targetBandsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
