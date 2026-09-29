/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/BeaconingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

BeaconingConfiguration::BeaconingConfiguration(JsonView jsonValue) { *this = jsonValue; }

BeaconingConfiguration& BeaconingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ClientSide")) {
    m_clientSide = jsonValue.GetObject("ClientSide");
    m_clientSideHasBeenSet = true;
  }
  return *this;
}

JsonValue BeaconingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_clientSideHasBeenSet) {
    payload.WithObject("ClientSide", m_clientSide.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
