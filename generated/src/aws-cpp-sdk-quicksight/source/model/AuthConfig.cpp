/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/AuthConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

AuthConfig::AuthConfig(JsonView jsonValue) { *this = jsonValue; }

AuthConfig& AuthConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AuthenticationType")) {
    m_authenticationType = ConnectionAuthTypeMapper::GetConnectionAuthTypeForName(jsonValue.GetString("AuthenticationType"));
    m_authenticationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthenticationMetadata")) {
    m_authenticationMetadata = jsonValue.GetObject("AuthenticationMetadata");
    m_authenticationMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthConfig::Jsonize() const {
  JsonValue payload;

  if (m_authenticationTypeHasBeenSet) {
    payload.WithString("AuthenticationType", ConnectionAuthTypeMapper::GetNameForConnectionAuthType(m_authenticationType));
  }

  if (m_authenticationMetadataHasBeenSet) {
    payload.WithObject("AuthenticationMetadata", m_authenticationMetadata.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
