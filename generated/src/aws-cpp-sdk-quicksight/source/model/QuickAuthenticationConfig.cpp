/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/QuickAuthenticationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

QuickAuthenticationConfig::QuickAuthenticationConfig(JsonView jsonValue) { *this = jsonValue; }

QuickAuthenticationConfig& QuickAuthenticationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QuickAuthenticationType")) {
    m_quickAuthenticationType =
        QuickAuthenticationTypeMapper::GetQuickAuthenticationTypeForName(jsonValue.GetString("QuickAuthenticationType"));
    m_quickAuthenticationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QuickAuthenticationConfigurationDetail")) {
    m_quickAuthenticationConfigurationDetail = jsonValue.GetObject("QuickAuthenticationConfigurationDetail");
    m_quickAuthenticationConfigurationDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue QuickAuthenticationConfig::Jsonize() const {
  JsonValue payload;

  if (m_quickAuthenticationTypeHasBeenSet) {
    payload.WithString("QuickAuthenticationType",
                       QuickAuthenticationTypeMapper::GetNameForQuickAuthenticationType(m_quickAuthenticationType));
  }

  if (m_quickAuthenticationConfigurationDetailHasBeenSet) {
    payload.WithObject("QuickAuthenticationConfigurationDetail", m_quickAuthenticationConfigurationDetail.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
