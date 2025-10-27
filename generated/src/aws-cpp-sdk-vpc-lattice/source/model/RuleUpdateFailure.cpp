/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/vpc-lattice/model/RuleUpdateFailure.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace VPCLattice {
namespace Model {

RuleUpdateFailure::RuleUpdateFailure(JsonView jsonValue) { *this = jsonValue; }

RuleUpdateFailure& RuleUpdateFailure::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ruleIdentifier")) {
    m_ruleIdentifier = jsonValue.GetString("ruleIdentifier");
    m_ruleIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureCode")) {
    m_failureCode = jsonValue.GetString("failureCode");
    m_failureCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureMessage")) {
    m_failureMessage = jsonValue.GetString("failureMessage");
    m_failureMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleUpdateFailure::Jsonize() const {
  JsonValue payload;

  if (m_ruleIdentifierHasBeenSet) {
    payload.WithString("ruleIdentifier", m_ruleIdentifier);
  }

  if (m_failureCodeHasBeenSet) {
    payload.WithString("failureCode", m_failureCode);
  }

  if (m_failureMessageHasBeenSet) {
    payload.WithString("failureMessage", m_failureMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
