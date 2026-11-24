/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/IdpAuthorizingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

IdpAuthorizingConfig::IdpAuthorizingConfig(JsonView jsonValue) { *this = jsonValue; }

IdpAuthorizingConfig& IdpAuthorizingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IdpAuthorizingType")) {
    m_idpAuthorizingType = IdpAuthorizingTypeMapper::GetIdpAuthorizingTypeForName(jsonValue.GetString("IdpAuthorizingType"));
    m_idpAuthorizingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdpAuthorizingConfigurationDetail")) {
    m_idpAuthorizingConfigurationDetail = jsonValue.GetObject("IdpAuthorizingConfigurationDetail");
    m_idpAuthorizingConfigurationDetailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdcTrustedTokenIssuerConfiguration")) {
    m_idcTrustedTokenIssuerConfiguration = jsonValue.GetObject("IdcTrustedTokenIssuerConfiguration");
    m_idcTrustedTokenIssuerConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue IdpAuthorizingConfig::Jsonize() const {
  JsonValue payload;

  if (m_idpAuthorizingTypeHasBeenSet) {
    payload.WithString("IdpAuthorizingType", IdpAuthorizingTypeMapper::GetNameForIdpAuthorizingType(m_idpAuthorizingType));
  }

  if (m_idpAuthorizingConfigurationDetailHasBeenSet) {
    payload.WithObject("IdpAuthorizingConfigurationDetail", m_idpAuthorizingConfigurationDetail.Jsonize());
  }

  if (m_idcTrustedTokenIssuerConfigurationHasBeenSet) {
    payload.WithObject("IdcTrustedTokenIssuerConfiguration", m_idcTrustedTokenIssuerConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
