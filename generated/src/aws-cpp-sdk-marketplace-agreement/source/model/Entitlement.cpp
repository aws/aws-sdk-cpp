/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/Entitlement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

Entitlement::Entitlement(JsonView jsonValue) { *this = jsonValue; }

Entitlement& Entitlement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("licenseArn")) {
    m_licenseArn = jsonValue.GetString("licenseArn");
    m_licenseArnHasBeenSet = true;
  }
  return *this;
}

JsonValue Entitlement::Jsonize() const {
  JsonValue payload;

  if (m_licenseArnHasBeenSet) {
    payload.WithString("licenseArn", m_licenseArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
