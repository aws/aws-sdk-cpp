/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediapackagev2/model/MultiviewFilterConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {

MultiviewFilterConfiguration::MultiviewFilterConfiguration(JsonView jsonValue) { *this = jsonValue; }

MultiviewFilterConfiguration& MultiviewFilterConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Layout")) {
    m_layout = MultiviewLayoutTypeMapper::GetMultiviewLayoutTypeForName(jsonValue.GetString("Layout"));
    m_layoutHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Sources")) {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("Sources");
    for (unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex) {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsString());
    }
    m_sourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiviewFilterConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_layoutHasBeenSet) {
    payload.WithString("Layout", MultiviewLayoutTypeMapper::GetNameForMultiviewLayoutType(m_layout));
  }

  if (m_sourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
    for (unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex) {
      sourcesJsonList[sourcesIndex].AsString(m_sources[sourcesIndex]);
    }
    payload.WithArray("Sources", std::move(sourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
