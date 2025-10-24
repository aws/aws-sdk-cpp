﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/supplychain/model/DataIntegrationFlowDatasetSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SupplyChain {
namespace Model {

DataIntegrationFlowDatasetSource::DataIntegrationFlowDatasetSource(JsonView jsonValue) { *this = jsonValue; }

DataIntegrationFlowDatasetSource& DataIntegrationFlowDatasetSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("datasetIdentifier")) {
    m_datasetIdentifier = jsonValue.GetString("datasetIdentifier");
    m_datasetIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationFlowDatasetSource::Jsonize() const {
  JsonValue payload;

  if (m_datasetIdentifierHasBeenSet) {
    payload.WithString("datasetIdentifier", m_datasetIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace SupplyChain
}  // namespace Aws
