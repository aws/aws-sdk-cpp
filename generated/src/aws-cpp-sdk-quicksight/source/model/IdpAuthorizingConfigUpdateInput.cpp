/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/IdpAuthorizingConfigUpdateInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

IdpAuthorizingConfigUpdateInput::IdpAuthorizingConfigUpdateInput(JsonView jsonValue) { *this = jsonValue; }

IdpAuthorizingConfigUpdateInput& IdpAuthorizingConfigUpdateInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IdpAuthorizingType")) {
    m_idpAuthorizingType = IdpAuthorizingTypeMapper::GetIdpAuthorizingTypeForName(jsonValue.GetString("IdpAuthorizingType"));
    m_idpAuthorizingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdpAuthorizingConfigurationDetailInput")) {
    m_idpAuthorizingConfigurationDetailInput = jsonValue.GetObject("IdpAuthorizingConfigurationDetailInput");
    m_idpAuthorizingConfigurationDetailInputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdcTrustedTokenIssuerConfiguration")) {
    m_idcTrustedTokenIssuerConfiguration = jsonValue.GetObject("IdcTrustedTokenIssuerConfiguration");
    m_idcTrustedTokenIssuerConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue IdpAuthorizingConfigUpdateInput::Jsonize() const {
  JsonValue payload;

  if (m_idpAuthorizingTypeHasBeenSet) {
    payload.WithString("IdpAuthorizingType", IdpAuthorizingTypeMapper::GetNameForIdpAuthorizingType(m_idpAuthorizingType));
  }

  if (m_idpAuthorizingConfigurationDetailInputHasBeenSet) {
    payload.WithObject("IdpAuthorizingConfigurationDetailInput", m_idpAuthorizingConfigurationDetailInput.Jsonize());
  }

  if (m_idcTrustedTokenIssuerConfigurationHasBeenSet) {
    payload.WithObject("IdcTrustedTokenIssuerConfiguration", m_idcTrustedTokenIssuerConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
