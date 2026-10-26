/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/DestinationEndpointFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

DestinationEndpointFilter::DestinationEndpointFilter(JsonView jsonValue) { *this = jsonValue; }

DestinationEndpointFilter& DestinationEndpointFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("regionNames")) {
    Aws::Utils::Array<JsonView> regionNamesJsonList = jsonValue.GetArray("regionNames");
    for (unsigned regionNamesIndex = 0; regionNamesIndex < regionNamesJsonList.GetLength(); ++regionNamesIndex) {
      m_regionNames.push_back(regionNamesJsonList[regionNamesIndex].AsString());
    }
    m_regionNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationTypes")) {
    Aws::Utils::Array<JsonView> destinationTypesJsonList = jsonValue.GetArray("destinationTypes");
    for (unsigned destinationTypesIndex = 0; destinationTypesIndex < destinationTypesJsonList.GetLength(); ++destinationTypesIndex) {
      m_destinationTypes.push_back(
          DestinationEndpointTypeMapper::GetDestinationEndpointTypeForName(destinationTypesJsonList[destinationTypesIndex].AsString()));
    }
    m_destinationTypesHasBeenSet = true;
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

JsonValue DestinationEndpointFilter::Jsonize() const {
  JsonValue payload;

  if (m_regionNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionNamesJsonList(m_regionNames.size());
    for (unsigned regionNamesIndex = 0; regionNamesIndex < regionNamesJsonList.GetLength(); ++regionNamesIndex) {
      regionNamesJsonList[regionNamesIndex].AsString(m_regionNames[regionNamesIndex]);
    }
    payload.WithArray("regionNames", std::move(regionNamesJsonList));
  }

  if (m_destinationTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> destinationTypesJsonList(m_destinationTypes.size());
    for (unsigned destinationTypesIndex = 0; destinationTypesIndex < destinationTypesJsonList.GetLength(); ++destinationTypesIndex) {
      destinationTypesJsonList[destinationTypesIndex].AsString(
          DestinationEndpointTypeMapper::GetNameForDestinationEndpointType(m_destinationTypes[destinationTypesIndex]));
    }
    payload.WithArray("destinationTypes", std::move(destinationTypesJsonList));
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
