/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/GcpDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

GcpDetail::GcpDetail(JsonView jsonValue) { *this = jsonValue; }

GcpDetail& GcpDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AWSConfigConnectorArn")) {
    m_aWSConfigConnectorArn = jsonValue.GetString("AWSConfigConnectorArn");
    m_aWSConfigConnectorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScopeConfiguration")) {
    m_scopeConfiguration = jsonValue.GetObject("ScopeConfiguration");
    m_scopeConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GCPRegions")) {
    Aws::Utils::Array<JsonView> gCPRegionsJsonList = jsonValue.GetArray("GCPRegions");
    for (unsigned gCPRegionsIndex = 0; gCPRegionsIndex < gCPRegionsJsonList.GetLength(); ++gCPRegionsIndex) {
      m_gCPRegions.push_back(gCPRegionsJsonList[gCPRegionsIndex].AsString());
    }
    m_gCPRegionsHasBeenSet = true;
  }
  return *this;
}

JsonValue GcpDetail::Jsonize() const {
  JsonValue payload;

  if (m_aWSConfigConnectorArnHasBeenSet) {
    payload.WithString("AWSConfigConnectorArn", m_aWSConfigConnectorArn);
  }

  if (m_scopeConfigurationHasBeenSet) {
    payload.WithObject("ScopeConfiguration", m_scopeConfiguration.Jsonize());
  }

  if (m_gCPRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> gCPRegionsJsonList(m_gCPRegions.size());
    for (unsigned gCPRegionsIndex = 0; gCPRegionsIndex < gCPRegionsJsonList.GetLength(); ++gCPRegionsIndex) {
      gCPRegionsJsonList[gCPRegionsIndex].AsString(m_gCPRegions[gCPRegionsIndex]);
    }
    payload.WithArray("GCPRegions", std::move(gCPRegionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
