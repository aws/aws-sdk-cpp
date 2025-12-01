/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/BatchDeleteFirewallRuleResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

BatchDeleteFirewallRuleResult::BatchDeleteFirewallRuleResult(JsonView jsonValue) { *this = jsonValue; }

BatchDeleteFirewallRuleResult& BatchDeleteFirewallRuleResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("clientToken")) {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CRResourceStatusMapper::GetCRResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeleteFirewallRuleResult::Jsonize() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", CRResourceStatusMapper::GetNameForCRResourceStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
