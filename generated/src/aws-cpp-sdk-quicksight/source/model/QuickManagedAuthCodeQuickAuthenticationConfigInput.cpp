/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/QuickManagedAuthCodeQuickAuthenticationConfigInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

QuickManagedAuthCodeQuickAuthenticationConfigInput::QuickManagedAuthCodeQuickAuthenticationConfigInput(JsonView jsonValue) {
  *this = jsonValue;
}

QuickManagedAuthCodeQuickAuthenticationConfigInput& QuickManagedAuthCodeQuickAuthenticationConfigInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RedirectUris")) {
    Aws::Utils::Array<JsonView> redirectUrisJsonList = jsonValue.GetArray("RedirectUris");
    for (unsigned redirectUrisIndex = 0; redirectUrisIndex < redirectUrisJsonList.GetLength(); ++redirectUrisIndex) {
      m_redirectUris.push_back(redirectUrisJsonList[redirectUrisIndex].AsString());
    }
    m_redirectUrisHasBeenSet = true;
  }
  return *this;
}

JsonValue QuickManagedAuthCodeQuickAuthenticationConfigInput::Jsonize() const {
  JsonValue payload;

  if (m_redirectUrisHasBeenSet) {
    Aws::Utils::Array<JsonValue> redirectUrisJsonList(m_redirectUris.size());
    for (unsigned redirectUrisIndex = 0; redirectUrisIndex < redirectUrisJsonList.GetLength(); ++redirectUrisIndex) {
      redirectUrisJsonList[redirectUrisIndex].AsString(m_redirectUris[redirectUrisIndex]);
    }
    payload.WithArray("RedirectUris", std::move(redirectUrisJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
