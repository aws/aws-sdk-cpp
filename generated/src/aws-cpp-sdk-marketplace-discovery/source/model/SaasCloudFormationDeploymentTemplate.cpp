/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/SaasCloudFormationDeploymentTemplate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

SaasCloudFormationDeploymentTemplate::SaasCloudFormationDeploymentTemplate(JsonView jsonValue) { *this = jsonValue; }

SaasCloudFormationDeploymentTemplate& SaasCloudFormationDeploymentTemplate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("templateName")) {
    m_templateName = jsonValue.GetString("templateName");
    m_templateNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultStackName")) {
    m_defaultStackName = jsonValue.GetString("defaultStackName");
    m_defaultStackNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("templateUrl")) {
    m_templateUrl = jsonValue.GetString("templateUrl");
    m_templateUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iamPolicy")) {
    m_iamPolicy = jsonValue.GetString("iamPolicy");
    m_iamPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue SaasCloudFormationDeploymentTemplate::Jsonize() const {
  JsonValue payload;

  if (m_templateNameHasBeenSet) {
    payload.WithString("templateName", m_templateName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_defaultStackNameHasBeenSet) {
    payload.WithString("defaultStackName", m_defaultStackName);
  }

  if (m_templateUrlHasBeenSet) {
    payload.WithString("templateUrl", m_templateUrl);
  }

  if (m_iamPolicyHasBeenSet) {
    payload.WithString("iamPolicy", m_iamPolicy);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
