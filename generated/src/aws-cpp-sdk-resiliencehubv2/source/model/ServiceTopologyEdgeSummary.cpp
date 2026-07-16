/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServiceTopologyEdgeSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServiceTopologyEdgeSummary::ServiceTopologyEdgeSummary(JsonView jsonValue) { *this = jsonValue; }

ServiceTopologyEdgeSummary& ServiceTopologyEdgeSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceResourceIdentifier")) {
    m_sourceResourceIdentifier = jsonValue.GetString("sourceResourceIdentifier");
    m_sourceResourceIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationResourceIdentifier")) {
    m_destinationResourceIdentifier = jsonValue.GetString("destinationResourceIdentifier");
    m_destinationResourceIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceRegion")) {
    m_sourceRegion = jsonValue.GetString("sourceRegion");
    m_sourceRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationRegion")) {
    m_destinationRegion = jsonValue.GetString("destinationRegion");
    m_destinationRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceAccount")) {
    m_sourceAccount = jsonValue.GetString("sourceAccount");
    m_sourceAccountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationAccount")) {
    m_destinationAccount = jsonValue.GetString("destinationAccount");
    m_destinationAccountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("properties")) {
    Aws::Utils::Array<JsonView> propertiesJsonList = jsonValue.GetArray("properties");
    for (unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex) {
      m_properties.push_back(propertiesJsonList[propertiesIndex].AsObject());
    }
    m_propertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceTopologyEdgeSummary::Jsonize() const {
  JsonValue payload;

  if (m_sourceResourceIdentifierHasBeenSet) {
    payload.WithString("sourceResourceIdentifier", m_sourceResourceIdentifier);
  }

  if (m_destinationResourceIdentifierHasBeenSet) {
    payload.WithString("destinationResourceIdentifier", m_destinationResourceIdentifier);
  }

  if (m_sourceRegionHasBeenSet) {
    payload.WithString("sourceRegion", m_sourceRegion);
  }

  if (m_destinationRegionHasBeenSet) {
    payload.WithString("destinationRegion", m_destinationRegion);
  }

  if (m_sourceAccountHasBeenSet) {
    payload.WithString("sourceAccount", m_sourceAccount);
  }

  if (m_destinationAccountHasBeenSet) {
    payload.WithString("destinationAccount", m_destinationAccount);
  }

  if (m_propertiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> propertiesJsonList(m_properties.size());
    for (unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex) {
      propertiesJsonList[propertiesIndex].AsObject(m_properties[propertiesIndex].Jsonize());
    }
    payload.WithArray("properties", std::move(propertiesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
