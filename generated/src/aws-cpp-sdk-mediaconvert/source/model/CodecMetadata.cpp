/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/CodecMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

CodecMetadata::CodecMetadata(JsonView jsonValue) { *this = jsonValue; }

CodecMetadata& CodecMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bitDepth")) {
    m_bitDepth = jsonValue.GetInteger("bitDepth");
    m_bitDepthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chromaSubsampling")) {
    m_chromaSubsampling = jsonValue.GetString("chromaSubsampling");
    m_chromaSubsamplingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codedFrameRate")) {
    m_codedFrameRate = jsonValue.GetObject("codedFrameRate");
    m_codedFrameRateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("colorPrimaries")) {
    m_colorPrimaries = ColorPrimariesMapper::GetColorPrimariesForName(jsonValue.GetString("colorPrimaries"));
    m_colorPrimariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("height")) {
    m_height = jsonValue.GetInteger("height");
    m_heightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("level")) {
    m_level = jsonValue.GetString("level");
    m_levelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("matrixCoefficients")) {
    m_matrixCoefficients = MatrixCoefficientsMapper::GetMatrixCoefficientsForName(jsonValue.GetString("matrixCoefficients"));
    m_matrixCoefficientsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("profile")) {
    m_profile = jsonValue.GetString("profile");
    m_profileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanType")) {
    m_scanType = jsonValue.GetString("scanType");
    m_scanTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("transferCharacteristics")) {
    m_transferCharacteristics =
        TransferCharacteristicsMapper::GetTransferCharacteristicsForName(jsonValue.GetString("transferCharacteristics"));
    m_transferCharacteristicsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("width")) {
    m_width = jsonValue.GetInteger("width");
    m_widthHasBeenSet = true;
  }
  return *this;
}

JsonValue CodecMetadata::Jsonize() const {
  JsonValue payload;

  if (m_bitDepthHasBeenSet) {
    payload.WithInteger("bitDepth", m_bitDepth);
  }

  if (m_chromaSubsamplingHasBeenSet) {
    payload.WithString("chromaSubsampling", m_chromaSubsampling);
  }

  if (m_codedFrameRateHasBeenSet) {
    payload.WithObject("codedFrameRate", m_codedFrameRate.Jsonize());
  }

  if (m_colorPrimariesHasBeenSet) {
    payload.WithString("colorPrimaries", ColorPrimariesMapper::GetNameForColorPrimaries(m_colorPrimaries));
  }

  if (m_heightHasBeenSet) {
    payload.WithInteger("height", m_height);
  }

  if (m_levelHasBeenSet) {
    payload.WithString("level", m_level);
  }

  if (m_matrixCoefficientsHasBeenSet) {
    payload.WithString("matrixCoefficients", MatrixCoefficientsMapper::GetNameForMatrixCoefficients(m_matrixCoefficients));
  }

  if (m_profileHasBeenSet) {
    payload.WithString("profile", m_profile);
  }

  if (m_scanTypeHasBeenSet) {
    payload.WithString("scanType", m_scanType);
  }

  if (m_transferCharacteristicsHasBeenSet) {
    payload.WithString("transferCharacteristics",
                       TransferCharacteristicsMapper::GetNameForTransferCharacteristics(m_transferCharacteristics));
  }

  if (m_widthHasBeenSet) {
    payload.WithInteger("width", m_width);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
