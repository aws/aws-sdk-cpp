/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediapackagev2/model/ContentKeyPeriodConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {

ContentKeyPeriodConfiguration::ContentKeyPeriodConfiguration(JsonView jsonValue) { *this = jsonValue; }

ContentKeyPeriodConfiguration& ContentKeyPeriodConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ContentKeyPeriodTiming")) {
    m_contentKeyPeriodTiming =
        ContentKeyPeriodTimingMapper::GetContentKeyPeriodTimingForName(jsonValue.GetString("ContentKeyPeriodTiming"));
    m_contentKeyPeriodTimingHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentKeyPeriodConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_contentKeyPeriodTimingHasBeenSet) {
    payload.WithString("ContentKeyPeriodTiming", ContentKeyPeriodTimingMapper::GetNameForContentKeyPeriodTiming(m_contentKeyPeriodTiming));
  }

  return payload;
}

}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
