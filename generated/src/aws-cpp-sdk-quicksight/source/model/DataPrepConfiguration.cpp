/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DataPrepConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DataPrepConfiguration::DataPrepConfiguration(JsonView jsonValue) { *this = jsonValue; }

DataPrepConfiguration& DataPrepConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceTableMap")) {
    Aws::Map<Aws::String, JsonView> sourceTableMapJsonMap = jsonValue.GetObject("SourceTableMap").GetAllObjects();
    for (auto& sourceTableMapItem : sourceTableMapJsonMap) {
      m_sourceTableMap[sourceTableMapItem.first] = sourceTableMapItem.second.AsObject();
    }
    m_sourceTableMapHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TransformStepMap")) {
    Aws::Map<Aws::String, JsonView> transformStepMapJsonMap = jsonValue.GetObject("TransformStepMap").GetAllObjects();
    for (auto& transformStepMapItem : transformStepMapJsonMap) {
      m_transformStepMap[transformStepMapItem.first] = transformStepMapItem.second.AsObject();
    }
    m_transformStepMapHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DestinationTableMap")) {
    Aws::Map<Aws::String, JsonView> destinationTableMapJsonMap = jsonValue.GetObject("DestinationTableMap").GetAllObjects();
    for (auto& destinationTableMapItem : destinationTableMapJsonMap) {
      m_destinationTableMap[destinationTableMapItem.first] = destinationTableMapItem.second.AsObject();
    }
    m_destinationTableMapHasBeenSet = true;
  }
  return *this;
}

JsonValue DataPrepConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceTableMapHasBeenSet) {
    JsonValue sourceTableMapJsonMap;
    for (auto& sourceTableMapItem : m_sourceTableMap) {
      sourceTableMapJsonMap.WithObject(sourceTableMapItem.first, sourceTableMapItem.second.Jsonize());
    }
    payload.WithObject("SourceTableMap", std::move(sourceTableMapJsonMap));
  }

  if (m_transformStepMapHasBeenSet) {
    JsonValue transformStepMapJsonMap;
    for (auto& transformStepMapItem : m_transformStepMap) {
      transformStepMapJsonMap.WithObject(transformStepMapItem.first, transformStepMapItem.second.Jsonize());
    }
    payload.WithObject("TransformStepMap", std::move(transformStepMapJsonMap));
  }

  if (m_destinationTableMapHasBeenSet) {
    JsonValue destinationTableMapJsonMap;
    for (auto& destinationTableMapItem : m_destinationTableMap) {
      destinationTableMapJsonMap.WithObject(destinationTableMapItem.first, destinationTableMapItem.second.Jsonize());
    }
    payload.WithObject("DestinationTableMap", std::move(destinationTableMapJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
