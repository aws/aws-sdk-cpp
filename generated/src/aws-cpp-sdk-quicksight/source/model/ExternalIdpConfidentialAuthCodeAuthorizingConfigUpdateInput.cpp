/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ExternalIdpConfidentialAuthCodeAuthorizingConfigUpdateInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ExternalIdpConfidentialAuthCodeAuthorizingConfigUpdateInput::ExternalIdpConfidentialAuthCodeAuthorizingConfigUpdateInput(
    JsonView jsonValue) {
  *this = jsonValue;
}

ExternalIdpConfidentialAuthCodeAuthorizingConfigUpdateInput& ExternalIdpConfidentialAuthCodeAuthorizingConfigUpdateInput::operator=(
    JsonView jsonValue) {
  if (jsonValue.ValueExists("ClientId")) {
    m_clientId = jsonValue.GetString("ClientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IssuerUrl")) {
    m_issuerUrl = jsonValue.GetString("IssuerUrl");
    m_issuerUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue ExternalIdpConfidentialAuthCodeAuthorizingConfigUpdateInput::Jsonize() const {
  JsonValue payload;

  if (m_clientIdHasBeenSet) {
    payload.WithString("ClientId", m_clientId);
  }

  if (m_issuerUrlHasBeenSet) {
    payload.WithString("IssuerUrl", m_issuerUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
