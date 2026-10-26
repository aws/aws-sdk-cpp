/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/SourceEndpointFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

SourceEndpointFilter::SourceEndpointFilter(JsonView jsonValue) { *this = jsonValue; }

SourceEndpointFilter& SourceEndpointFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("regionNames")) {
    Aws::Utils::Array<JsonView> regionNamesJsonList = jsonValue.GetArray("regionNames");
    for (unsigned regionNamesIndex = 0; regionNamesIndex < regionNamesJsonList.GetLength(); ++regionNamesIndex) {
      m_regionNames.push_back(regionNamesJsonList[regionNamesIndex].AsString());
    }
    m_regionNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceTypes")) {
    Aws::Utils::Array<JsonView> sourceTypesJsonList = jsonValue.GetArray("sourceTypes");
    for (unsigned sourceTypesIndex = 0; sourceTypesIndex < sourceTypesJsonList.GetLength(); ++sourceTypesIndex) {
      m_sourceTypes.push_back(SourceEndpointTypeMapper::GetSourceEndpointTypeForName(sourceTypesJsonList[sourceTypesIndex].AsString()));
    }
    m_sourceTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nameContains")) {
    Aws::Utils::Array<JsonView> nameContainsJsonList = jsonValue.GetArray("nameContains");
    for (unsigned nameContainsIndex = 0; nameContainsIndex < nameContainsJsonList.GetLength(); ++nameContainsIndex) {
      m_nameContains.push_back(nameContainsJsonList[nameContainsIndex].AsString());
    }
    m_nameContainsHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceEndpointFilter::Jsonize() const {
  JsonValue payload;

  if (m_regionNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionNamesJsonList(m_regionNames.size());
    for (unsigned regionNamesIndex = 0; regionNamesIndex < regionNamesJsonList.GetLength(); ++regionNamesIndex) {
      regionNamesJsonList[regionNamesIndex].AsString(m_regionNames[regionNamesIndex]);
    }
    payload.WithArray("regionNames", std::move(regionNamesJsonList));
  }

  if (m_sourceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceTypesJsonList(m_sourceTypes.size());
    for (unsigned sourceTypesIndex = 0; sourceTypesIndex < sourceTypesJsonList.GetLength(); ++sourceTypesIndex) {
      sourceTypesJsonList[sourceTypesIndex].AsString(
          SourceEndpointTypeMapper::GetNameForSourceEndpointType(m_sourceTypes[sourceTypesIndex]));
    }
    payload.WithArray("sourceTypes", std::move(sourceTypesJsonList));
  }

  if (m_nameContainsHasBeenSet) {
    Aws::Utils::Array<JsonValue> nameContainsJsonList(m_nameContains.size());
    for (unsigned nameContainsIndex = 0; nameContainsIndex < nameContainsJsonList.GetLength(); ++nameContainsIndex) {
      nameContainsJsonList[nameContainsIndex].AsString(m_nameContains[nameContainsIndex]);
    }
    payload.WithArray("nameContains", std::move(nameContainsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
