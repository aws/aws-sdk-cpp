/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-deployment/model/DataAsAServiceConfigurationDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDeployment {
namespace Model {

DataAsAServiceConfigurationDetail::DataAsAServiceConfigurationDetail(JsonView jsonValue) { *this = jsonValue; }

DataAsAServiceConfigurationDetail& DataAsAServiceConfigurationDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fulfillmentUrl")) {
    m_fulfillmentUrl = jsonValue.GetString("fulfillmentUrl");
    m_fulfillmentUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue DataAsAServiceConfigurationDetail::Jsonize() const {
  JsonValue payload;

  if (m_fulfillmentUrlHasBeenSet) {
    payload.WithString("fulfillmentUrl", m_fulfillmentUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDeployment
}  // namespace Aws
