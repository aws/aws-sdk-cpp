/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/AbWatermarkingCustomProfile.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

AbWatermarkingCustomProfile::AbWatermarkingCustomProfile(JsonView jsonValue) { *this = jsonValue; }

AbWatermarkingCustomProfile& AbWatermarkingCustomProfile::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("embeddingFrequency")) {
    m_embeddingFrequency = jsonValue.GetDouble("embeddingFrequency");
    m_embeddingFrequencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sceneCut")) {
    m_sceneCut = jsonValue.GetDouble("sceneCut");
    m_sceneCutHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetPsnr")) {
    m_targetPsnr = jsonValue.GetDouble("targetPsnr");
    m_targetPsnrHasBeenSet = true;
  }
  return *this;
}

JsonValue AbWatermarkingCustomProfile::Jsonize() const {
  JsonValue payload;

  if (m_embeddingFrequencyHasBeenSet) {
    payload.WithDouble("embeddingFrequency", m_embeddingFrequency);
  }

  if (m_sceneCutHasBeenSet) {
    payload.WithDouble("sceneCut", m_sceneCut);
  }

  if (m_targetPsnrHasBeenSet) {
    payload.WithDouble("targetPsnr", m_targetPsnr);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
