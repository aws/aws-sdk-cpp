/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/IdpAuthorizingConfigSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

IdpAuthorizingConfigSummary::IdpAuthorizingConfigSummary(JsonView jsonValue) { *this = jsonValue; }

IdpAuthorizingConfigSummary& IdpAuthorizingConfigSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IdpAuthorizingType")) {
    m_idpAuthorizingType = IdpAuthorizingTypeMapper::GetIdpAuthorizingTypeForName(jsonValue.GetString("IdpAuthorizingType"));
    m_idpAuthorizingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdpAuthorizingConfigurationSummaryDetail")) {
    m_idpAuthorizingConfigurationSummaryDetail = jsonValue.GetObject("IdpAuthorizingConfigurationSummaryDetail");
    m_idpAuthorizingConfigurationSummaryDetailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdcTrustedTokenIssuerConfiguration")) {
    m_idcTrustedTokenIssuerConfiguration = jsonValue.GetObject("IdcTrustedTokenIssuerConfiguration");
    m_idcTrustedTokenIssuerConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue IdpAuthorizingConfigSummary::Jsonize() const {
  JsonValue payload;

  if (m_idpAuthorizingTypeHasBeenSet) {
    payload.WithString("IdpAuthorizingType", IdpAuthorizingTypeMapper::GetNameForIdpAuthorizingType(m_idpAuthorizingType));
  }

  if (m_idpAuthorizingConfigurationSummaryDetailHasBeenSet) {
    payload.WithObject("IdpAuthorizingConfigurationSummaryDetail", m_idpAuthorizingConfigurationSummaryDetail.Jsonize());
  }

  if (m_idcTrustedTokenIssuerConfigurationHasBeenSet) {
    payload.WithObject("IdcTrustedTokenIssuerConfiguration", m_idcTrustedTokenIssuerConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
