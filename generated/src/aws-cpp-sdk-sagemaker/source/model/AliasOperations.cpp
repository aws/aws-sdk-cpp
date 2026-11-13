/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AliasOperations.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AliasOperations::AliasOperations(JsonView jsonValue) { *this = jsonValue; }

AliasOperations& AliasOperations::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Add")) {
    Aws::Utils::Array<JsonView> addJsonList = jsonValue.GetArray("Add");
    for (unsigned addIndex = 0; addIndex < addJsonList.GetLength(); ++addIndex) {
      m_add.push_back(addJsonList[addIndex].AsString());
    }
    m_addHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Remove")) {
    Aws::Utils::Array<JsonView> removeJsonList = jsonValue.GetArray("Remove");
    for (unsigned removeIndex = 0; removeIndex < removeJsonList.GetLength(); ++removeIndex) {
      m_remove.push_back(removeJsonList[removeIndex].AsString());
    }
    m_removeHasBeenSet = true;
  }
  return *this;
}

JsonValue AliasOperations::Jsonize() const {
  JsonValue payload;

  if (m_addHasBeenSet) {
    Aws::Utils::Array<JsonValue> addJsonList(m_add.size());
    for (unsigned addIndex = 0; addIndex < addJsonList.GetLength(); ++addIndex) {
      addJsonList[addIndex].AsString(m_add[addIndex]);
    }
    payload.WithArray("Add", std::move(addJsonList));
  }

  if (m_removeHasBeenSet) {
    Aws::Utils::Array<JsonValue> removeJsonList(m_remove.size());
    for (unsigned removeIndex = 0; removeIndex < removeJsonList.GetLength(); ++removeIndex) {
      removeJsonList[removeIndex].AsString(m_remove[removeIndex]);
    }
    payload.WithArray("Remove", std::move(removeJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
