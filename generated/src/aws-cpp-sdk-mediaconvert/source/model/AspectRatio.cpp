/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/AspectRatio.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

AspectRatio::AspectRatio(JsonView jsonValue) { *this = jsonValue; }

AspectRatio& AspectRatio::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("denominator")) {
    m_denominator = jsonValue.GetInteger("denominator");
    m_denominatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numerator")) {
    m_numerator = jsonValue.GetInteger("numerator");
    m_numeratorHasBeenSet = true;
  }
  return *this;
}

JsonValue AspectRatio::Jsonize() const {
  JsonValue payload;

  if (m_denominatorHasBeenSet) {
    payload.WithInteger("denominator", m_denominator);
  }

  if (m_numeratorHasBeenSet) {
    payload.WithInteger("numerator", m_numerator);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
