/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/SplitOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

SplitOperation::SplitOperation(JsonView jsonValue) { *this = jsonValue; }

SplitOperation& SplitOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("splitConstructs")) {
    Aws::Utils::Array<JsonView> splitConstructsJsonList = jsonValue.GetArray("splitConstructs");
    for (unsigned splitConstructsIndex = 0; splitConstructsIndex < splitConstructsJsonList.GetLength(); ++splitConstructsIndex) {
      m_splitConstructs.push_back(splitConstructsJsonList[splitConstructsIndex].AsObject());
    }
    m_splitConstructsHasBeenSet = true;
  }
  return *this;
}

JsonValue SplitOperation::Jsonize() const {
  JsonValue payload;

  if (m_splitConstructsHasBeenSet) {
    Aws::Utils::Array<JsonValue> splitConstructsJsonList(m_splitConstructs.size());
    for (unsigned splitConstructsIndex = 0; splitConstructsIndex < splitConstructsJsonList.GetLength(); ++splitConstructsIndex) {
      splitConstructsJsonList[splitConstructsIndex].AsObject(m_splitConstructs[splitConstructsIndex].Jsonize());
    }
    payload.WithArray("splitConstructs", std::move(splitConstructsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
