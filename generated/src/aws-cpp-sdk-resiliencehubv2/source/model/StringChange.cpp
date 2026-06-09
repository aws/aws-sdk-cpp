/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/StringChange.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

StringChange::StringChange(JsonView jsonValue) { *this = jsonValue; }

StringChange& StringChange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("oldValue")) {
    m_oldValue = jsonValue.GetString("oldValue");
    m_oldValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("newValue")) {
    m_newValue = jsonValue.GetString("newValue");
    m_newValueHasBeenSet = true;
  }
  return *this;
}

JsonValue StringChange::Jsonize() const {
  JsonValue payload;

  if (m_oldValueHasBeenSet) {
    payload.WithString("oldValue", m_oldValue);
  }

  if (m_newValueHasBeenSet) {
    payload.WithString("newValue", m_newValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
