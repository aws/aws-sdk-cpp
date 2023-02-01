/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/GeoMosaicConfigInput.h>
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

GeoMosaicConfigInput::GeoMosaicConfigInput() : 
    m_algorithmName(AlgorithmNameGeoMosaic::NOT_SET),
    m_algorithmNameHasBeenSet(false),
    m_targetBandsHasBeenSet(false)
{
}

GeoMosaicConfigInput::GeoMosaicConfigInput(JsonView jsonValue) : 
    m_algorithmName(AlgorithmNameGeoMosaic::NOT_SET),
    m_algorithmNameHasBeenSet(false),
    m_targetBandsHasBeenSet(false)
{
  *this = jsonValue;
}

GeoMosaicConfigInput& GeoMosaicConfigInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlgorithmName"))
  {
    m_algorithmName = AlgorithmNameGeoMosaicMapper::GetAlgorithmNameGeoMosaicForName(jsonValue.GetString("AlgorithmName"));

    m_algorithmNameHasBeenSet = true;
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

JsonValue GeoMosaicConfigInput::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmNameHasBeenSet)
  {
   payload.WithString("AlgorithmName", AlgorithmNameGeoMosaicMapper::GetNameForAlgorithmNameGeoMosaic(m_algorithmName));
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
