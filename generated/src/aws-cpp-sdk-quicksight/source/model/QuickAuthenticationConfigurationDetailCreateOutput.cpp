/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/QuickAuthenticationConfigurationDetailCreateOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

QuickAuthenticationConfigurationDetailCreateOutput::QuickAuthenticationConfigurationDetailCreateOutput(JsonView jsonValue) {
  *this = jsonValue;
}

QuickAuthenticationConfigurationDetailCreateOutput& QuickAuthenticationConfigurationDetailCreateOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QuickManagedPublicAuthCode")) {
    m_quickManagedPublicAuthCode = jsonValue.GetObject("QuickManagedPublicAuthCode");
    m_quickManagedPublicAuthCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue QuickAuthenticationConfigurationDetailCreateOutput::Jsonize() const {
  JsonValue payload;

  if (m_quickManagedPublicAuthCodeHasBeenSet) {
    payload.WithObject("QuickManagedPublicAuthCode", m_quickManagedPublicAuthCode.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
