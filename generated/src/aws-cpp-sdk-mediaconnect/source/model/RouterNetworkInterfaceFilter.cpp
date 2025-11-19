/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterNetworkInterfaceFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterNetworkInterfaceFilter::RouterNetworkInterfaceFilter(JsonView jsonValue) { *this = jsonValue; }

RouterNetworkInterfaceFilter& RouterNetworkInterfaceFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("regionNames")) {
    Aws::Utils::Array<JsonView> regionNamesJsonList = jsonValue.GetArray("regionNames");
    for (unsigned regionNamesIndex = 0; regionNamesIndex < regionNamesJsonList.GetLength(); ++regionNamesIndex) {
      m_regionNames.push_back(regionNamesJsonList[regionNamesIndex].AsString());
    }
    m_regionNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkInterfaceTypes")) {
    Aws::Utils::Array<JsonView> networkInterfaceTypesJsonList = jsonValue.GetArray("networkInterfaceTypes");
    for (unsigned networkInterfaceTypesIndex = 0; networkInterfaceTypesIndex < networkInterfaceTypesJsonList.GetLength();
         ++networkInterfaceTypesIndex) {
      m_networkInterfaceTypes.push_back(RouterNetworkInterfaceTypeMapper::GetRouterNetworkInterfaceTypeForName(
          networkInterfaceTypesJsonList[networkInterfaceTypesIndex].AsString()));
    }
    m_networkInterfaceTypesHasBeenSet = true;
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

JsonValue RouterNetworkInterfaceFilter::Jsonize() const {
  JsonValue payload;

  if (m_regionNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionNamesJsonList(m_regionNames.size());
    for (unsigned regionNamesIndex = 0; regionNamesIndex < regionNamesJsonList.GetLength(); ++regionNamesIndex) {
      regionNamesJsonList[regionNamesIndex].AsString(m_regionNames[regionNamesIndex]);
    }
    payload.WithArray("regionNames", std::move(regionNamesJsonList));
  }

  if (m_networkInterfaceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> networkInterfaceTypesJsonList(m_networkInterfaceTypes.size());
    for (unsigned networkInterfaceTypesIndex = 0; networkInterfaceTypesIndex < networkInterfaceTypesJsonList.GetLength();
         ++networkInterfaceTypesIndex) {
      networkInterfaceTypesJsonList[networkInterfaceTypesIndex].AsString(
          RouterNetworkInterfaceTypeMapper::GetNameForRouterNetworkInterfaceType(m_networkInterfaceTypes[networkInterfaceTypesIndex]));
    }
    payload.WithArray("networkInterfaceTypes", std::move(networkInterfaceTypesJsonList));
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
