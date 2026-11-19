/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/EngagementSearchPredicate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

EngagementSearchPredicate::EngagementSearchPredicate(JsonView jsonValue) { *this = jsonValue; }

EngagementSearchPredicate& EngagementSearchPredicate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Key")) {
    m_key = EngagementSearchFilterNameMapper::GetEngagementSearchFilterNameForName(jsonValue.GetString("Key"));
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetObject("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue EngagementSearchPredicate::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("Key", EngagementSearchFilterNameMapper::GetNameForEngagementSearchFilterName(m_key));
  }

  if (m_valueHasBeenSet) {
    payload.WithObject("Value", m_value.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
