/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ExtensionHealth.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ExtensionHealth::ExtensionHealth(JsonView jsonValue) { *this = jsonValue; }

ExtensionHealth& ExtensionHealth::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Issues")) {
    Aws::Utils::Array<JsonView> issuesJsonList = jsonValue.GetArray("Issues");
    for (unsigned issuesIndex = 0; issuesIndex < issuesJsonList.GetLength(); ++issuesIndex) {
      m_issues.push_back(issuesJsonList[issuesIndex].AsObject());
    }
    m_issuesHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtensionHealth::Jsonize() const {
  JsonValue payload;

  if (m_issuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> issuesJsonList(m_issues.size());
    for (unsigned issuesIndex = 0; issuesIndex < issuesJsonList.GetLength(); ++issuesIndex) {
      issuesJsonList[issuesIndex].AsObject(m_issues[issuesIndex].Jsonize());
    }
    payload.WithArray("Issues", std::move(issuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
