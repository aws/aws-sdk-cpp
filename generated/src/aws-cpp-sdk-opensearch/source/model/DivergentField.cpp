/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/DivergentField.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

DivergentField::DivergentField(JsonView jsonValue) { *this = jsonValue; }

DivergentField& DivergentField::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Path")) {
    m_path = jsonValue.GetString("Path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceValue")) {
    m_sourceValue = jsonValue.GetString("SourceValue");
    m_sourceValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetValue")) {
    m_targetValue = jsonValue.GetString("TargetValue");
    m_targetValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Policy")) {
    m_policy = DiffFieldPolicyMapper::GetDiffFieldPolicyForName(jsonValue.GetString("Policy"));
    m_policyHasBeenSet = true;
  }
  return *this;
}

JsonValue DivergentField::Jsonize() const {
  JsonValue payload;

  if (m_pathHasBeenSet) {
    payload.WithString("Path", m_path);
  }

  if (m_sourceValueHasBeenSet) {
    payload.WithString("SourceValue", m_sourceValue);
  }

  if (m_targetValueHasBeenSet) {
    payload.WithString("TargetValue", m_targetValue);
  }

  if (m_policyHasBeenSet) {
    payload.WithString("Policy", DiffFieldPolicyMapper::GetNameForDiffFieldPolicy(m_policy));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
