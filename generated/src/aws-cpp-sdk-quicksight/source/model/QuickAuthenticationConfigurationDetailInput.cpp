/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/QuickAuthenticationConfigurationDetailInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

QuickAuthenticationConfigurationDetailInput::QuickAuthenticationConfigurationDetailInput(JsonView jsonValue) { *this = jsonValue; }

QuickAuthenticationConfigurationDetailInput& QuickAuthenticationConfigurationDetailInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QuickManagedPublicAuthCode")) {
    m_quickManagedPublicAuthCode = jsonValue.GetObject("QuickManagedPublicAuthCode");
    m_quickManagedPublicAuthCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue QuickAuthenticationConfigurationDetailInput::Jsonize() const {
  JsonValue payload;

  if (m_quickManagedPublicAuthCodeHasBeenSet) {
    payload.WithObject("QuickManagedPublicAuthCode", m_quickManagedPublicAuthCode.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
