/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/AzureDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

AzureDetail::AzureDetail(JsonView jsonValue) { *this = jsonValue; }

AzureDetail& AzureDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AWSConfigConnectorArn")) {
    m_aWSConfigConnectorArn = jsonValue.GetString("AWSConfigConnectorArn");
    m_aWSConfigConnectorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScopeConfiguration")) {
    m_scopeConfiguration = jsonValue.GetObject("ScopeConfiguration");
    m_scopeConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AzureRegions")) {
    Aws::Utils::Array<JsonView> azureRegionsJsonList = jsonValue.GetArray("AzureRegions");
    for (unsigned azureRegionsIndex = 0; azureRegionsIndex < azureRegionsJsonList.GetLength(); ++azureRegionsIndex) {
      m_azureRegions.push_back(azureRegionsJsonList[azureRegionsIndex].AsString());
    }
    m_azureRegionsHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureDetail::Jsonize() const {
  JsonValue payload;

  if (m_aWSConfigConnectorArnHasBeenSet) {
    payload.WithString("AWSConfigConnectorArn", m_aWSConfigConnectorArn);
  }

  if (m_scopeConfigurationHasBeenSet) {
    payload.WithObject("ScopeConfiguration", m_scopeConfiguration.Jsonize());
  }

  if (m_azureRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> azureRegionsJsonList(m_azureRegions.size());
    for (unsigned azureRegionsIndex = 0; azureRegionsIndex < azureRegionsJsonList.GetLength(); ++azureRegionsIndex) {
      azureRegionsJsonList[azureRegionsIndex].AsString(m_azureRegions[azureRegionsIndex]);
    }
    payload.WithArray("AzureRegions", std::move(azureRegionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
