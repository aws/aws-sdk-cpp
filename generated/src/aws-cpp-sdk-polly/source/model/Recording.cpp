/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/polly/model/Recording.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {

Recording::Recording(JsonView jsonValue) { *this = jsonValue; }

Recording& Recording::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Format")) {
    m_format = AudioFormatMapper::GetAudioFormatForName(jsonValue.GetString("Format"));
    m_formatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Data")) {
    m_data = jsonValue.GetObject("Data");
    m_dataHasBeenSet = true;
  }
  return *this;
}

JsonValue Recording::Jsonize() const {
  JsonValue payload;

  if (m_formatHasBeenSet) {
    payload.WithString("Format", AudioFormatMapper::GetNameForAudioFormat(m_format));
  }

  if (m_dataHasBeenSet) {
    payload.WithObject("Data", m_data.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
