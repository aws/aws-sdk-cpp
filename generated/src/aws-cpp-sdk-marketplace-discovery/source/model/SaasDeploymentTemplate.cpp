/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/SaasDeploymentTemplate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

SaasDeploymentTemplate::SaasDeploymentTemplate(JsonView jsonValue) { *this = jsonValue; }

SaasDeploymentTemplate& SaasDeploymentTemplate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cloudFormationDeploymentTemplate")) {
    m_cloudFormationDeploymentTemplate = jsonValue.GetObject("cloudFormationDeploymentTemplate");
    m_cloudFormationDeploymentTemplateHasBeenSet = true;
  }
  return *this;
}

JsonValue SaasDeploymentTemplate::Jsonize() const {
  JsonValue payload;

  if (m_cloudFormationDeploymentTemplateHasBeenSet) {
    payload.WithObject("cloudFormationDeploymentTemplate", m_cloudFormationDeploymentTemplate.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
