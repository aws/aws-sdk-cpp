/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/IdcTrustedTokenIssuerConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

IdcTrustedTokenIssuerConfig::IdcTrustedTokenIssuerConfig(JsonView jsonValue) { *this = jsonValue; }

IdcTrustedTokenIssuerConfig& IdcTrustedTokenIssuerConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IdcTrustedTokenIssuerArn")) {
    m_idcTrustedTokenIssuerArn = jsonValue.GetString("IdcTrustedTokenIssuerArn");
    m_idcTrustedTokenIssuerArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IdcTrustedTokenIssuerConfig::Jsonize() const {
  JsonValue payload;

  if (m_idcTrustedTokenIssuerArnHasBeenSet) {
    payload.WithString("IdcTrustedTokenIssuerArn", m_idcTrustedTokenIssuerArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
