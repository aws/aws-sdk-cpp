/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterInputDestinationEndpointConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterInputDestinationEndpointConfiguration::RouterInputDestinationEndpointConfiguration(JsonView jsonValue) { *this = jsonValue; }

RouterInputDestinationEndpointConfiguration& RouterInputDestinationEndpointConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("routerInputArn")) {
    m_routerInputArn = jsonValue.GetString("routerInputArn");
    m_routerInputArnHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterInputDestinationEndpointConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_routerInputArnHasBeenSet) {
    payload.WithString("routerInputArn", m_routerInputArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
