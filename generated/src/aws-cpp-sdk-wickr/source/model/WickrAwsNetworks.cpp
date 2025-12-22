/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/WickrAwsNetworks.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

WickrAwsNetworks::WickrAwsNetworks(JsonView jsonValue) { *this = jsonValue; }

WickrAwsNetworks& WickrAwsNetworks::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkId")) {
    m_networkId = jsonValue.GetString("networkId");
    m_networkIdHasBeenSet = true;
  }
  return *this;
}

JsonValue WickrAwsNetworks::Jsonize() const {
  JsonValue payload;

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_networkIdHasBeenSet) {
    payload.WithString("networkId", m_networkId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
