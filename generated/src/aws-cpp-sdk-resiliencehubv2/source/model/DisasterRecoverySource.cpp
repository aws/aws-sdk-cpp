/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/DisasterRecoverySource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

DisasterRecoverySource::DisasterRecoverySource(JsonView jsonValue) { *this = jsonValue; }

DisasterRecoverySource& DisasterRecoverySource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyName")) {
    m_policyName = jsonValue.GetString("policyName");
    m_policyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = PolicyValueSourceMapper::GetPolicyValueSourceForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue DisasterRecoverySource::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  if (m_policyNameHasBeenSet) {
    payload.WithString("policyName", m_policyName);
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("source", PolicyValueSourceMapper::GetNameForPolicyValueSource(m_source));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
