/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/QuickAuthenticationConfigInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

QuickAuthenticationConfigInput::QuickAuthenticationConfigInput(JsonView jsonValue) { *this = jsonValue; }

QuickAuthenticationConfigInput& QuickAuthenticationConfigInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QuickAuthenticationType")) {
    m_quickAuthenticationType =
        QuickAuthenticationTypeMapper::GetQuickAuthenticationTypeForName(jsonValue.GetString("QuickAuthenticationType"));
    m_quickAuthenticationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QuickAuthenticationConfigurationDetailInput")) {
    m_quickAuthenticationConfigurationDetailInput = jsonValue.GetObject("QuickAuthenticationConfigurationDetailInput");
    m_quickAuthenticationConfigurationDetailInputHasBeenSet = true;
  }
  return *this;
}

JsonValue QuickAuthenticationConfigInput::Jsonize() const {
  JsonValue payload;

  if (m_quickAuthenticationTypeHasBeenSet) {
    payload.WithString("QuickAuthenticationType",
                       QuickAuthenticationTypeMapper::GetNameForQuickAuthenticationType(m_quickAuthenticationType));
  }

  if (m_quickAuthenticationConfigurationDetailInputHasBeenSet) {
    payload.WithObject("QuickAuthenticationConfigurationDetailInput", m_quickAuthenticationConfigurationDetailInput.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
