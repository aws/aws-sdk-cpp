/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-deployment/model/DeploymentConfigurationDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDeployment {
namespace Model {

DeploymentConfigurationDetail::DeploymentConfigurationDetail(JsonView jsonValue) { *this = jsonValue; }

DeploymentConfigurationDetail& DeploymentConfigurationDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dataAsAService")) {
    m_dataAsAService = jsonValue.GetObject("dataAsAService");
    m_dataAsAServiceHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentConfigurationDetail::Jsonize() const {
  JsonValue payload;

  if (m_dataAsAServiceHasBeenSet) {
    payload.WithObject("dataAsAService", m_dataAsAService.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDeployment
}  // namespace Aws
