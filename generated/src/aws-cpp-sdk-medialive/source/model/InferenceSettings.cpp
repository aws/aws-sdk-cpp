/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/InferenceSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

InferenceSettings::InferenceSettings(JsonView jsonValue) { *this = jsonValue; }

InferenceSettings& InferenceSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("feedArn")) {
    m_feedArn = jsonValue.GetString("feedArn");
    m_feedArnHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceSettings::Jsonize() const {
  JsonValue payload;

  if (m_feedArnHasBeenSet) {
    payload.WithString("feedArn", m_feedArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
