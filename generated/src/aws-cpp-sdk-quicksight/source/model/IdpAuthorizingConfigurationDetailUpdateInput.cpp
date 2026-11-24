/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/IdpAuthorizingConfigurationDetailUpdateInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

IdpAuthorizingConfigurationDetailUpdateInput::IdpAuthorizingConfigurationDetailUpdateInput(JsonView jsonValue) { *this = jsonValue; }

IdpAuthorizingConfigurationDetailUpdateInput& IdpAuthorizingConfigurationDetailUpdateInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ExternalIdpPublicAuthCode")) {
    m_externalIdpPublicAuthCode = jsonValue.GetObject("ExternalIdpPublicAuthCode");
    m_externalIdpPublicAuthCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExternalIdpConfidentialAuthCode")) {
    m_externalIdpConfidentialAuthCode = jsonValue.GetObject("ExternalIdpConfidentialAuthCode");
    m_externalIdpConfidentialAuthCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue IdpAuthorizingConfigurationDetailUpdateInput::Jsonize() const {
  JsonValue payload;

  if (m_externalIdpPublicAuthCodeHasBeenSet) {
    payload.WithObject("ExternalIdpPublicAuthCode", m_externalIdpPublicAuthCode.Jsonize());
  }

  if (m_externalIdpConfidentialAuthCodeHasBeenSet) {
    payload.WithObject("ExternalIdpConfidentialAuthCode", m_externalIdpConfidentialAuthCode.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
