/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ForEachSelectorResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ForEachSelectorResult::ForEachSelectorResult(JsonView jsonValue) { *this = jsonValue; }

ForEachSelectorResult& ForEachSelectorResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StepName")) {
    m_stepName = jsonValue.GetString("StepName");
    m_stepNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Index")) {
    m_index = jsonValue.GetInteger("Index");
    m_indexHasBeenSet = true;
  }
  return *this;
}

JsonValue ForEachSelectorResult::Jsonize() const {
  JsonValue payload;

  if (m_stepNameHasBeenSet) {
    payload.WithString("StepName", m_stepName);
  }

  if (m_indexHasBeenSet) {
    payload.WithInteger("Index", m_index);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
