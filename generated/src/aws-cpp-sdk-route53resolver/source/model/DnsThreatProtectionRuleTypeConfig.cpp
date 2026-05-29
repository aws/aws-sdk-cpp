/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/DnsThreatProtectionRuleTypeConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {

DnsThreatProtectionRuleTypeConfig::DnsThreatProtectionRuleTypeConfig(JsonView jsonValue) { *this = jsonValue; }

DnsThreatProtectionRuleTypeConfig& DnsThreatProtectionRuleTypeConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConfidenceThreshold")) {
    m_confidenceThreshold = ConfidenceThresholdMapper::GetConfidenceThresholdForName(jsonValue.GetString("ConfidenceThreshold"));
    m_confidenceThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue DnsThreatProtectionRuleTypeConfig::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  if (m_confidenceThresholdHasBeenSet) {
    payload.WithString("ConfidenceThreshold", ConfidenceThresholdMapper::GetNameForConfidenceThreshold(m_confidenceThreshold));
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
