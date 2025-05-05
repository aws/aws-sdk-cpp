/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VideoProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

VideoProperties::VideoProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

VideoProperties& VideoProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bitDepth"))
  {
    m_bitDepth = jsonValue.GetInteger("bitDepth");
    m_bitDepthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bitRate"))
  {
    m_bitRate = jsonValue.GetInt64("bitRate");
    m_bitRateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("colorPrimaries"))
  {
    m_colorPrimaries = ColorPrimariesMapper::GetColorPrimariesForName(jsonValue.GetString("colorPrimaries"));
    m_colorPrimariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("frameRate"))
  {
    m_frameRate = jsonValue.GetObject("frameRate");
    m_frameRateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("height"))
  {
    m_height = jsonValue.GetInteger("height");
    m_heightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("matrixCoefficients"))
  {
    m_matrixCoefficients = MatrixCoefficientsMapper::GetMatrixCoefficientsForName(jsonValue.GetString("matrixCoefficients"));
    m_matrixCoefficientsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("transferCharacteristics"))
  {
    m_transferCharacteristics = TransferCharacteristicsMapper::GetTransferCharacteristicsForName(jsonValue.GetString("transferCharacteristics"));
    m_transferCharacteristicsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("width"))
  {
    m_width = jsonValue.GetInteger("width");
    m_widthHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoProperties::Jsonize() const
{
  JsonValue payload;

  if(m_bitDepthHasBeenSet)
  {
   payload.WithInteger("bitDepth", m_bitDepth);

  }

  if(m_bitRateHasBeenSet)
  {
   payload.WithInt64("bitRate", m_bitRate);

  }

  if(m_colorPrimariesHasBeenSet)
  {
   payload.WithString("colorPrimaries", ColorPrimariesMapper::GetNameForColorPrimaries(m_colorPrimaries));
  }

  if(m_frameRateHasBeenSet)
  {
   payload.WithObject("frameRate", m_frameRate.Jsonize());

  }

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("height", m_height);

  }

  if(m_matrixCoefficientsHasBeenSet)
  {
   payload.WithString("matrixCoefficients", MatrixCoefficientsMapper::GetNameForMatrixCoefficients(m_matrixCoefficients));
  }

  if(m_transferCharacteristicsHasBeenSet)
  {
   payload.WithString("transferCharacteristics", TransferCharacteristicsMapper::GetNameForTransferCharacteristics(m_transferCharacteristics));
  }

  if(m_widthHasBeenSet)
  {
   payload.WithInteger("width", m_width);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
