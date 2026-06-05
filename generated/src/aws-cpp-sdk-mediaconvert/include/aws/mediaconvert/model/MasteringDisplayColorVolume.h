/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConvert {
namespace Model {

/**
 * Mastering display color volume metadata (SMPTE ST 2086). Describes the color
 * volume of the display used to master the content. Chromaticity coordinates are
 * in units of 0.00002. Luminance values are in units of 0.0001 cd/m².<p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MasteringDisplayColorVolume">AWS
 * API Reference</a></p>
 */
class MasteringDisplayColorVolume {
 public:
  AWS_MEDIACONVERT_API MasteringDisplayColorVolume() = default;
  AWS_MEDIACONVERT_API MasteringDisplayColorVolume(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API MasteringDisplayColorVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Blue primary chromaticity x coordinate, in units of 0.00002.
   */
  inline int GetBluePrimaryX() const { return m_bluePrimaryX; }
  inline bool BluePrimaryXHasBeenSet() const { return m_bluePrimaryXHasBeenSet; }
  inline void SetBluePrimaryX(int value) {
    m_bluePrimaryXHasBeenSet = true;
    m_bluePrimaryX = value;
  }
  inline MasteringDisplayColorVolume& WithBluePrimaryX(int value) {
    SetBluePrimaryX(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Blue primary chromaticity y coordinate, in units of 0.00002.
   */
  inline int GetBluePrimaryY() const { return m_bluePrimaryY; }
  inline bool BluePrimaryYHasBeenSet() const { return m_bluePrimaryYHasBeenSet; }
  inline void SetBluePrimaryY(int value) {
    m_bluePrimaryYHasBeenSet = true;
    m_bluePrimaryY = value;
  }
  inline MasteringDisplayColorVolume& WithBluePrimaryY(int value) {
    SetBluePrimaryY(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Green primary chromaticity x coordinate, in units of 0.00002.
   */
  inline int GetGreenPrimaryX() const { return m_greenPrimaryX; }
  inline bool GreenPrimaryXHasBeenSet() const { return m_greenPrimaryXHasBeenSet; }
  inline void SetGreenPrimaryX(int value) {
    m_greenPrimaryXHasBeenSet = true;
    m_greenPrimaryX = value;
  }
  inline MasteringDisplayColorVolume& WithGreenPrimaryX(int value) {
    SetGreenPrimaryX(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Green primary chromaticity y coordinate, in units of 0.00002.
   */
  inline int GetGreenPrimaryY() const { return m_greenPrimaryY; }
  inline bool GreenPrimaryYHasBeenSet() const { return m_greenPrimaryYHasBeenSet; }
  inline void SetGreenPrimaryY(int value) {
    m_greenPrimaryYHasBeenSet = true;
    m_greenPrimaryY = value;
  }
  inline MasteringDisplayColorVolume& WithGreenPrimaryY(int value) {
    SetGreenPrimaryY(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Maximum display mastering luminance, in units of 0.0001 cd/m².
   */
  inline long long GetMaxLuminance() const { return m_maxLuminance; }
  inline bool MaxLuminanceHasBeenSet() const { return m_maxLuminanceHasBeenSet; }
  inline void SetMaxLuminance(long long value) {
    m_maxLuminanceHasBeenSet = true;
    m_maxLuminance = value;
  }
  inline MasteringDisplayColorVolume& WithMaxLuminance(long long value) {
    SetMaxLuminance(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Minimum display mastering luminance, in units of 0.0001 cd/m².
   */
  inline long long GetMinLuminance() const { return m_minLuminance; }
  inline bool MinLuminanceHasBeenSet() const { return m_minLuminanceHasBeenSet; }
  inline void SetMinLuminance(long long value) {
    m_minLuminanceHasBeenSet = true;
    m_minLuminance = value;
  }
  inline MasteringDisplayColorVolume& WithMinLuminance(long long value) {
    SetMinLuminance(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Red primary chromaticity x coordinate, in units of 0.00002.
   */
  inline int GetRedPrimaryX() const { return m_redPrimaryX; }
  inline bool RedPrimaryXHasBeenSet() const { return m_redPrimaryXHasBeenSet; }
  inline void SetRedPrimaryX(int value) {
    m_redPrimaryXHasBeenSet = true;
    m_redPrimaryX = value;
  }
  inline MasteringDisplayColorVolume& WithRedPrimaryX(int value) {
    SetRedPrimaryX(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Red primary chromaticity y coordinate, in units of 0.00002.
   */
  inline int GetRedPrimaryY() const { return m_redPrimaryY; }
  inline bool RedPrimaryYHasBeenSet() const { return m_redPrimaryYHasBeenSet; }
  inline void SetRedPrimaryY(int value) {
    m_redPrimaryYHasBeenSet = true;
    m_redPrimaryY = value;
  }
  inline MasteringDisplayColorVolume& WithRedPrimaryY(int value) {
    SetRedPrimaryY(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * White point chromaticity x coordinate, in units of 0.00002.
   */
  inline int GetWhitePointX() const { return m_whitePointX; }
  inline bool WhitePointXHasBeenSet() const { return m_whitePointXHasBeenSet; }
  inline void SetWhitePointX(int value) {
    m_whitePointXHasBeenSet = true;
    m_whitePointX = value;
  }
  inline MasteringDisplayColorVolume& WithWhitePointX(int value) {
    SetWhitePointX(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * White point chromaticity y coordinate, in units of 0.00002.
   */
  inline int GetWhitePointY() const { return m_whitePointY; }
  inline bool WhitePointYHasBeenSet() const { return m_whitePointYHasBeenSet; }
  inline void SetWhitePointY(int value) {
    m_whitePointYHasBeenSet = true;
    m_whitePointY = value;
  }
  inline MasteringDisplayColorVolume& WithWhitePointY(int value) {
    SetWhitePointY(value);
    return *this;
  }
  ///@}
 private:
  int m_bluePrimaryX{0};

  int m_bluePrimaryY{0};

  int m_greenPrimaryX{0};

  int m_greenPrimaryY{0};

  long long m_maxLuminance{0};

  long long m_minLuminance{0};

  int m_redPrimaryX{0};

  int m_redPrimaryY{0};

  int m_whitePointX{0};

  int m_whitePointY{0};
  bool m_bluePrimaryXHasBeenSet = false;
  bool m_bluePrimaryYHasBeenSet = false;
  bool m_greenPrimaryXHasBeenSet = false;
  bool m_greenPrimaryYHasBeenSet = false;
  bool m_maxLuminanceHasBeenSet = false;
  bool m_minLuminanceHasBeenSet = false;
  bool m_redPrimaryXHasBeenSet = false;
  bool m_redPrimaryYHasBeenSet = false;
  bool m_whitePointXHasBeenSet = false;
  bool m_whitePointYHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
