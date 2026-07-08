/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/DurationControl.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

DurationControl::DurationControl(JsonView jsonValue) { *this = jsonValue; }

DurationControl& DurationControl::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("integerDurationMaximumCompressionDenominator")) {
    m_integerDurationMaximumCompressionDenominator = jsonValue.GetInteger("integerDurationMaximumCompressionDenominator");
    m_integerDurationMaximumCompressionDenominatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("integerDurationMaximumCompressionNumerator")) {
    m_integerDurationMaximumCompressionNumerator = jsonValue.GetInteger("integerDurationMaximumCompressionNumerator");
    m_integerDurationMaximumCompressionNumeratorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("integerDurationTrimThresholdMilliseconds")) {
    m_integerDurationTrimThresholdMilliseconds = jsonValue.GetInteger("integerDurationTrimThresholdMilliseconds");
    m_integerDurationTrimThresholdMillisecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue DurationControl::Jsonize() const {
  JsonValue payload;

  if (m_integerDurationMaximumCompressionDenominatorHasBeenSet) {
    payload.WithInteger("integerDurationMaximumCompressionDenominator", m_integerDurationMaximumCompressionDenominator);
  }

  if (m_integerDurationMaximumCompressionNumeratorHasBeenSet) {
    payload.WithInteger("integerDurationMaximumCompressionNumerator", m_integerDurationMaximumCompressionNumerator);
  }

  if (m_integerDurationTrimThresholdMillisecondsHasBeenSet) {
    payload.WithInteger("integerDurationTrimThresholdMilliseconds", m_integerDurationTrimThresholdMilliseconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
