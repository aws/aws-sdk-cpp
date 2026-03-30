/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/omics/model/RunConfigurationsResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {

RunConfigurationsResponse::RunConfigurationsResponse(JsonView jsonValue) { *this = jsonValue; }

RunConfigurationsResponse& RunConfigurationsResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("vpcConfig")) {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue RunConfigurationsResponse::Jsonize() const {
  JsonValue payload;

  if (m_vpcConfigHasBeenSet) {
    payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
