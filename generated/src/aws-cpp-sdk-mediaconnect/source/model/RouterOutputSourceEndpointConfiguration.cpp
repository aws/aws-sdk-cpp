/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterOutputSourceEndpointConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterOutputSourceEndpointConfiguration::RouterOutputSourceEndpointConfiguration(JsonView jsonValue) { *this = jsonValue; }

RouterOutputSourceEndpointConfiguration& RouterOutputSourceEndpointConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("routerOutputArn")) {
    m_routerOutputArn = jsonValue.GetString("routerOutputArn");
    m_routerOutputArnHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterOutputSourceEndpointConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_routerOutputArnHasBeenSet) {
    payload.WithString("routerOutputArn", m_routerOutputArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
