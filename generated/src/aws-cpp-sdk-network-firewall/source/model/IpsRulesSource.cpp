/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/IpsRulesSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

IpsRulesSource::IpsRulesSource(JsonView jsonValue) { *this = jsonValue; }

IpsRulesSource& IpsRulesSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RulesString")) {
    m_rulesString = jsonValue.GetString("RulesString");
    m_rulesStringHasBeenSet = true;
  }
  return *this;
}

JsonValue IpsRulesSource::Jsonize() const {
  JsonValue payload;

  if (m_rulesStringHasBeenSet) {
    payload.WithString("RulesString", m_rulesString);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
