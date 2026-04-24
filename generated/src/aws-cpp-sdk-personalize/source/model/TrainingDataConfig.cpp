/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/personalize/model/TrainingDataConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Personalize {
namespace Model {

TrainingDataConfig::TrainingDataConfig(JsonView jsonValue) { *this = jsonValue; }

TrainingDataConfig& TrainingDataConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("excludedDatasetColumns")) {
    Aws::Map<Aws::String, JsonView> excludedDatasetColumnsJsonMap = jsonValue.GetObject("excludedDatasetColumns").GetAllObjects();
    for (auto& excludedDatasetColumnsItem : excludedDatasetColumnsJsonMap) {
      Aws::Utils::Array<JsonView> columnNamesList2JsonList = excludedDatasetColumnsItem.second.AsArray();
      Aws::Vector<Aws::String> columnNamesList2List;
      columnNamesList2List.reserve((size_t)columnNamesList2JsonList.GetLength());
      for (unsigned columnNamesList2Index = 0; columnNamesList2Index < columnNamesList2JsonList.GetLength(); ++columnNamesList2Index) {
        columnNamesList2List.push_back(columnNamesList2JsonList[columnNamesList2Index].AsString());
      }
      m_excludedDatasetColumns[excludedDatasetColumnsItem.first] = std::move(columnNamesList2List);
    }
    m_excludedDatasetColumnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("includedDatasetColumns")) {
    Aws::Map<Aws::String, JsonView> includedDatasetColumnsJsonMap = jsonValue.GetObject("includedDatasetColumns").GetAllObjects();
    for (auto& includedDatasetColumnsItem : includedDatasetColumnsJsonMap) {
      Aws::Utils::Array<JsonView> columnNamesList2JsonList = includedDatasetColumnsItem.second.AsArray();
      Aws::Vector<Aws::String> columnNamesList2List;
      columnNamesList2List.reserve((size_t)columnNamesList2JsonList.GetLength());
      for (unsigned columnNamesList2Index = 0; columnNamesList2Index < columnNamesList2JsonList.GetLength(); ++columnNamesList2Index) {
        columnNamesList2List.push_back(columnNamesList2JsonList[columnNamesList2Index].AsString());
      }
      m_includedDatasetColumns[includedDatasetColumnsItem.first] = std::move(columnNamesList2List);
    }
    m_includedDatasetColumnsHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainingDataConfig::Jsonize() const {
  JsonValue payload;

  if (m_excludedDatasetColumnsHasBeenSet) {
    JsonValue excludedDatasetColumnsJsonMap;
    for (auto& excludedDatasetColumnsItem : m_excludedDatasetColumns) {
      Aws::Utils::Array<JsonValue> columnNamesListJsonList(excludedDatasetColumnsItem.second.size());
      for (unsigned columnNamesListIndex = 0; columnNamesListIndex < columnNamesListJsonList.GetLength(); ++columnNamesListIndex) {
        columnNamesListJsonList[columnNamesListIndex].AsString(excludedDatasetColumnsItem.second[columnNamesListIndex]);
      }
      excludedDatasetColumnsJsonMap.WithArray(excludedDatasetColumnsItem.first, std::move(columnNamesListJsonList));
    }
    payload.WithObject("excludedDatasetColumns", std::move(excludedDatasetColumnsJsonMap));
  }

  if (m_includedDatasetColumnsHasBeenSet) {
    JsonValue includedDatasetColumnsJsonMap;
    for (auto& includedDatasetColumnsItem : m_includedDatasetColumns) {
      Aws::Utils::Array<JsonValue> columnNamesListJsonList(includedDatasetColumnsItem.second.size());
      for (unsigned columnNamesListIndex = 0; columnNamesListIndex < columnNamesListJsonList.GetLength(); ++columnNamesListIndex) {
        columnNamesListJsonList[columnNamesListIndex].AsString(includedDatasetColumnsItem.second[columnNamesListIndex]);
      }
      includedDatasetColumnsJsonMap.WithArray(includedDatasetColumnsItem.first, std::move(columnNamesListJsonList));
    }
    payload.WithObject("includedDatasetColumns", std::move(includedDatasetColumnsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Personalize
}  // namespace Aws
