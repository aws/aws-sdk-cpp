/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/ElementalInferenceFeedConfigurationSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

ElementalInferenceFeedConfigurationSource::ElementalInferenceFeedConfigurationSource(JsonView jsonValue) { *this = jsonValue; }

ElementalInferenceFeedConfigurationSource& ElementalInferenceFeedConfigurationSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("feedArn")) {
    m_feedArn = jsonValue.GetString("feedArn");
    m_feedArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ElementalInferenceFeedConfigurationSource::Jsonize() const {
  JsonValue payload;

  if (m_feedArnHasBeenSet) {
    payload.WithString("feedArn", m_feedArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
