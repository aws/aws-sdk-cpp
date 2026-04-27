/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/MergeOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

MergeOperation::MergeOperation(JsonView jsonValue) { *this = jsonValue; }

MergeOperation& MergeOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mergeConstructs")) {
    Aws::Utils::Array<JsonView> mergeConstructsJsonList = jsonValue.GetArray("mergeConstructs");
    for (unsigned mergeConstructsIndex = 0; mergeConstructsIndex < mergeConstructsJsonList.GetLength(); ++mergeConstructsIndex) {
      m_mergeConstructs.push_back(mergeConstructsJsonList[mergeConstructsIndex].AsObject());
    }
    m_mergeConstructsHasBeenSet = true;
  }
  return *this;
}

JsonValue MergeOperation::Jsonize() const {
  JsonValue payload;

  if (m_mergeConstructsHasBeenSet) {
    Aws::Utils::Array<JsonValue> mergeConstructsJsonList(m_mergeConstructs.size());
    for (unsigned mergeConstructsIndex = 0; mergeConstructsIndex < mergeConstructsJsonList.GetLength(); ++mergeConstructsIndex) {
      mergeConstructsJsonList[mergeConstructsIndex].AsObject(m_mergeConstructs[mergeConstructsIndex].Jsonize());
    }
    payload.WithArray("mergeConstructs", std::move(mergeConstructsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
