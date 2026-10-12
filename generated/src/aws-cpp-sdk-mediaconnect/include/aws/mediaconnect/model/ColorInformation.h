/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/VideoColorimetry.h>
#include <aws/mediaconnect/model/VideoMatrixCoefficients.h>
#include <aws/mediaconnect/model/VideoTransferCharacteristics.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>The color signaling of the video stream.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ColorInformation">AWS
 * API Reference</a></p>
 */
class ColorInformation {
 public:
  AWS_MEDIACONNECT_API ColorInformation() = default;
  AWS_MEDIACONNECT_API ColorInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API ColorInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The color primaries that the video stream uses (for example,
   * <code>BT709</code> or <code>BT2020</code>).</p>
   */
  inline VideoColorimetry GetColorimetry() const { return m_colorimetry; }
  inline bool ColorimetryHasBeenSet() const { return m_colorimetryHasBeenSet; }
  inline void SetColorimetry(VideoColorimetry value) {
    m_colorimetryHasBeenSet = true;
    m_colorimetry = value;
  }
  inline ColorInformation& WithColorimetry(VideoColorimetry value) {
    SetColorimetry(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The transfer characteristics that the video stream uses (for example,
   * <code>BT601</code>, <code>BT709</code>, <code>BT2100_PQ</code>, or
   * <code>BT2100_HLG</code>).</p>
   */
  inline VideoTransferCharacteristics GetTransferCharacteristics() const { return m_transferCharacteristics; }
  inline bool TransferCharacteristicsHasBeenSet() const { return m_transferCharacteristicsHasBeenSet; }
  inline void SetTransferCharacteristics(VideoTransferCharacteristics value) {
    m_transferCharacteristicsHasBeenSet = true;
    m_transferCharacteristics = value;
  }
  inline ColorInformation& WithTransferCharacteristics(VideoTransferCharacteristics value) {
    SetTransferCharacteristics(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The YCbCr matrix coefficients that the video stream uses (for example,
   * <code>BT709</code> or <code>BT2020_NCL</code>).</p>
   */
  inline VideoMatrixCoefficients GetMatrixCoefficients() const { return m_matrixCoefficients; }
  inline bool MatrixCoefficientsHasBeenSet() const { return m_matrixCoefficientsHasBeenSet; }
  inline void SetMatrixCoefficients(VideoMatrixCoefficients value) {
    m_matrixCoefficientsHasBeenSet = true;
    m_matrixCoefficients = value;
  }
  inline ColorInformation& WithMatrixCoefficients(VideoMatrixCoefficients value) {
    SetMatrixCoefficients(value);
    return *this;
  }
  ///@}
 private:
  VideoColorimetry m_colorimetry{VideoColorimetry::NOT_SET};

  VideoTransferCharacteristics m_transferCharacteristics{VideoTransferCharacteristics::NOT_SET};

  VideoMatrixCoefficients m_matrixCoefficients{VideoMatrixCoefficients::NOT_SET};
  bool m_colorimetryHasBeenSet = false;
  bool m_transferCharacteristicsHasBeenSet = false;
  bool m_matrixCoefficientsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
