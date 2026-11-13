/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa/model/IdentityCenterConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MWAA {
namespace Model {

IdentityCenterConfiguration::IdentityCenterConfiguration(JsonView jsonValue) { *this = jsonValue; }

IdentityCenterConfiguration& IdentityCenterConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StartUrl")) {
    m_startUrl = jsonValue.GetString("StartUrl");
    m_startUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdentityStoreId")) {
    m_identityStoreId = jsonValue.GetString("IdentityStoreId");
    m_identityStoreIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityCenterConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_startUrlHasBeenSet) {
    payload.WithString("StartUrl", m_startUrl);
  }

  if (m_identityStoreIdHasBeenSet) {
    payload.WithString("IdentityStoreId", m_identityStoreId);
  }

  return payload;
}

}  // namespace Model
}  // namespace MWAA
}  // namespace Aws
