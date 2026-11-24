/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/QuickAuthenticationConfigCreateOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

QuickAuthenticationConfigCreateOutput::QuickAuthenticationConfigCreateOutput(JsonView jsonValue) { *this = jsonValue; }

QuickAuthenticationConfigCreateOutput& QuickAuthenticationConfigCreateOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QuickAuthenticationType")) {
    m_quickAuthenticationType =
        QuickAuthenticationTypeMapper::GetQuickAuthenticationTypeForName(jsonValue.GetString("QuickAuthenticationType"));
    m_quickAuthenticationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QuickAuthenticationConfigurationDetailCreateOutput")) {
    m_quickAuthenticationConfigurationDetailCreateOutput = jsonValue.GetObject("QuickAuthenticationConfigurationDetailCreateOutput");
    m_quickAuthenticationConfigurationDetailCreateOutputHasBeenSet = true;
  }
  return *this;
}

JsonValue QuickAuthenticationConfigCreateOutput::Jsonize() const {
  JsonValue payload;

  if (m_quickAuthenticationTypeHasBeenSet) {
    payload.WithString("QuickAuthenticationType",
                       QuickAuthenticationTypeMapper::GetNameForQuickAuthenticationType(m_quickAuthenticationType));
  }

  if (m_quickAuthenticationConfigurationDetailCreateOutputHasBeenSet) {
    payload.WithObject("QuickAuthenticationConfigurationDetailCreateOutput",
                       m_quickAuthenticationConfigurationDetailCreateOutput.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
