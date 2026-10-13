/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/IterationContext.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

IterationContext::IterationContext(JsonView jsonValue) { *this = jsonValue; }

IterationContext& IterationContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ParentStepName")) {
    m_parentStepName = jsonValue.GetString("ParentStepName");
    m_parentStepNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Index")) {
    m_index = jsonValue.GetInteger("Index");
    m_indexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Item")) {
    m_item = jsonValue.GetString("Item");
    m_itemHasBeenSet = true;
  }
  return *this;
}

JsonValue IterationContext::Jsonize() const {
  JsonValue payload;

  if (m_parentStepNameHasBeenSet) {
    payload.WithString("ParentStepName", m_parentStepName);
  }

  if (m_indexHasBeenSet) {
    payload.WithInteger("Index", m_index);
  }

  if (m_itemHasBeenSet) {
    payload.WithString("Item", m_item);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
