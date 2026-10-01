/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/RemediationTrait.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

RemediationTrait::RemediationTrait(JsonView jsonValue) { *this = jsonValue; }

RemediationTrait& RemediationTrait::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Title")) {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationTrait::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", m_type);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("Title", m_title);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
