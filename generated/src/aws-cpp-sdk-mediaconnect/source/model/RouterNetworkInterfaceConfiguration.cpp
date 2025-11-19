/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterNetworkInterfaceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterNetworkInterfaceConfiguration::RouterNetworkInterfaceConfiguration(JsonView jsonValue) { *this = jsonValue; }

RouterNetworkInterfaceConfiguration& RouterNetworkInterfaceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("public")) {
    m_public = jsonValue.GetObject("public");
    m_publicHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpc")) {
    m_vpc = jsonValue.GetObject("vpc");
    m_vpcHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterNetworkInterfaceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_publicHasBeenSet) {
    payload.WithObject("public", m_public.Jsonize());
  }

  if (m_vpcHasBeenSet) {
    payload.WithObject("vpc", m_vpc.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
