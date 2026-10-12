/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/ColorInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

ColorInformation::ColorInformation(JsonView jsonValue) { *this = jsonValue; }

ColorInformation& ColorInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("colorimetry")) {
    m_colorimetry = VideoColorimetryMapper::GetVideoColorimetryForName(jsonValue.GetString("colorimetry"));
    m_colorimetryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("transferCharacteristics")) {
    m_transferCharacteristics =
        VideoTransferCharacteristicsMapper::GetVideoTransferCharacteristicsForName(jsonValue.GetString("transferCharacteristics"));
    m_transferCharacteristicsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("matrixCoefficients")) {
    m_matrixCoefficients = VideoMatrixCoefficientsMapper::GetVideoMatrixCoefficientsForName(jsonValue.GetString("matrixCoefficients"));
    m_matrixCoefficientsHasBeenSet = true;
  }
  return *this;
}

JsonValue ColorInformation::Jsonize() const {
  JsonValue payload;

  if (m_colorimetryHasBeenSet) {
    payload.WithString("colorimetry", VideoColorimetryMapper::GetNameForVideoColorimetry(m_colorimetry));
  }

  if (m_transferCharacteristicsHasBeenSet) {
    payload.WithString("transferCharacteristics",
                       VideoTransferCharacteristicsMapper::GetNameForVideoTransferCharacteristics(m_transferCharacteristics));
  }

  if (m_matrixCoefficientsHasBeenSet) {
    payload.WithString("matrixCoefficients", VideoMatrixCoefficientsMapper::GetNameForVideoMatrixCoefficients(m_matrixCoefficients));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
