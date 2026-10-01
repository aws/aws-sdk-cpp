/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/RemediationParameter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

RemediationParameter::RemediationParameter(JsonView jsonValue) { *this = jsonValue; }

RemediationParameter& RemediationParameter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Required")) {
    m_required = jsonValue.GetBool("Required");
    m_requiredHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationParameter::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", m_type);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_requiredHasBeenSet) {
    payload.WithBool("Required", m_required);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
