/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/StepAliasMapping.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

StepAliasMapping::StepAliasMapping(JsonView jsonValue) { *this = jsonValue; }

StepAliasMapping& StepAliasMapping::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StepId")) {
    m_stepId = jsonValue.GetString("StepId");
    m_stepIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StepAlias")) {
    m_stepAlias = jsonValue.GetString("StepAlias");
    m_stepAliasHasBeenSet = true;
  }
  return *this;
}

JsonValue StepAliasMapping::Jsonize() const {
  JsonValue payload;

  if (m_stepIdHasBeenSet) {
    payload.WithString("StepId", m_stepId);
  }

  if (m_stepAliasHasBeenSet) {
    payload.WithString("StepAlias", m_stepAlias);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
