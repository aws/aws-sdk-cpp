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
 * Settings for integer-second duration normalization. When this preprocessor is
 * present, the output duration will be adjusted to an exact integer-second
 * boundary. If the input is within the trim threshold of an integer second,
 * trailing frames are dropped. If within the compression threshold and less than
 * 500ms over the previous integer second, the output is sped up slightly.
 * Otherwise, black frames are padded to the next integer second.<p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DurationControl">AWS
 * API Reference</a></p>
 */
class DurationControl {
 public:
  AWS_MEDIACONVERT_API DurationControl() = default;
  AWS_MEDIACONVERT_API DurationControl(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API DurationControl& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Required. Denominator of the maximum allowed compression ratio.
   */
  inline int GetIntegerDurationMaximumCompressionDenominator() const { return m_integerDurationMaximumCompressionDenominator; }
  inline bool IntegerDurationMaximumCompressionDenominatorHasBeenSet() const {
    return m_integerDurationMaximumCompressionDenominatorHasBeenSet;
  }
  inline void SetIntegerDurationMaximumCompressionDenominator(int value) {
    m_integerDurationMaximumCompressionDenominatorHasBeenSet = true;
    m_integerDurationMaximumCompressionDenominator = value;
  }
  inline DurationControl& WithIntegerDurationMaximumCompressionDenominator(int value) {
    SetIntegerDurationMaximumCompressionDenominator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Required. Numerator of the maximum allowed compression ratio, defined as overrun
   * divided by target duration. For example, numerator 5 with denominator 100 means
   * max 5% compression. Set to 0 to disable compression entirely (only trim or pad
   * will be used).
   */
  inline int GetIntegerDurationMaximumCompressionNumerator() const { return m_integerDurationMaximumCompressionNumerator; }
  inline bool IntegerDurationMaximumCompressionNumeratorHasBeenSet() const {
    return m_integerDurationMaximumCompressionNumeratorHasBeenSet;
  }
  inline void SetIntegerDurationMaximumCompressionNumerator(int value) {
    m_integerDurationMaximumCompressionNumeratorHasBeenSet = true;
    m_integerDurationMaximumCompressionNumerator = value;
  }
  inline DurationControl& WithIntegerDurationMaximumCompressionNumerator(int value) {
    SetIntegerDurationMaximumCompressionNumerator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Maximum number of fractional milliseconds past an integer second that qualify
   * for the trim path (frame dropping). Default is 0 (trimming disabled).
   */
  inline int GetIntegerDurationTrimThresholdMilliseconds() const { return m_integerDurationTrimThresholdMilliseconds; }
  inline bool IntegerDurationTrimThresholdMillisecondsHasBeenSet() const { return m_integerDurationTrimThresholdMillisecondsHasBeenSet; }
  inline void SetIntegerDurationTrimThresholdMilliseconds(int value) {
    m_integerDurationTrimThresholdMillisecondsHasBeenSet = true;
    m_integerDurationTrimThresholdMilliseconds = value;
  }
  inline DurationControl& WithIntegerDurationTrimThresholdMilliseconds(int value) {
    SetIntegerDurationTrimThresholdMilliseconds(value);
    return *this;
  }
  ///@}
 private:
  int m_integerDurationMaximumCompressionDenominator{0};

  int m_integerDurationMaximumCompressionNumerator{0};

  int m_integerDurationTrimThresholdMilliseconds{0};
  bool m_integerDurationMaximumCompressionDenominatorHasBeenSet = false;
  bool m_integerDurationMaximumCompressionNumeratorHasBeenSet = false;
  bool m_integerDurationTrimThresholdMillisecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
