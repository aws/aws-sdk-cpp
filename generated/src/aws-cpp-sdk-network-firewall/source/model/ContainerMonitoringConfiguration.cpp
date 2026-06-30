/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/ContainerMonitoringConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

ContainerMonitoringConfiguration::ContainerMonitoringConfiguration(JsonView jsonValue) { *this = jsonValue; }

ContainerMonitoringConfiguration& ContainerMonitoringConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ClusterArn")) {
    m_clusterArn = jsonValue.GetString("ClusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttributeFilters")) {
    Aws::Utils::Array<JsonView> attributeFiltersJsonList = jsonValue.GetArray("AttributeFilters");
    for (unsigned attributeFiltersIndex = 0; attributeFiltersIndex < attributeFiltersJsonList.GetLength(); ++attributeFiltersIndex) {
      m_attributeFilters.push_back(attributeFiltersJsonList[attributeFiltersIndex].AsObject());
    }
    m_attributeFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue ContainerMonitoringConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_clusterArnHasBeenSet) {
    payload.WithString("ClusterArn", m_clusterArn);
  }

  if (m_attributeFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> attributeFiltersJsonList(m_attributeFilters.size());
    for (unsigned attributeFiltersIndex = 0; attributeFiltersIndex < attributeFiltersJsonList.GetLength(); ++attributeFiltersIndex) {
      attributeFiltersJsonList[attributeFiltersIndex].AsObject(m_attributeFilters[attributeFiltersIndex].Jsonize());
    }
    payload.WithArray("AttributeFilters", std::move(attributeFiltersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
