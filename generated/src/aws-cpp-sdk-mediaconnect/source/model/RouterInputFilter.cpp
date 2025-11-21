/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterInputFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterInputFilter::RouterInputFilter(JsonView jsonValue) { *this = jsonValue; }

RouterInputFilter& RouterInputFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("regionNames")) {
    Aws::Utils::Array<JsonView> regionNamesJsonList = jsonValue.GetArray("regionNames");
    for (unsigned regionNamesIndex = 0; regionNamesIndex < regionNamesJsonList.GetLength(); ++regionNamesIndex) {
      m_regionNames.push_back(regionNamesJsonList[regionNamesIndex].AsString());
    }
    m_regionNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inputTypes")) {
    Aws::Utils::Array<JsonView> inputTypesJsonList = jsonValue.GetArray("inputTypes");
    for (unsigned inputTypesIndex = 0; inputTypesIndex < inputTypesJsonList.GetLength(); ++inputTypesIndex) {
      m_inputTypes.push_back(RouterInputTypeMapper::GetRouterInputTypeForName(inputTypesJsonList[inputTypesIndex].AsString()));
    }
    m_inputTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nameContains")) {
    Aws::Utils::Array<JsonView> nameContainsJsonList = jsonValue.GetArray("nameContains");
    for (unsigned nameContainsIndex = 0; nameContainsIndex < nameContainsJsonList.GetLength(); ++nameContainsIndex) {
      m_nameContains.push_back(nameContainsJsonList[nameContainsIndex].AsString());
    }
    m_nameContainsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkInterfaceArns")) {
    Aws::Utils::Array<JsonView> networkInterfaceArnsJsonList = jsonValue.GetArray("networkInterfaceArns");
    for (unsigned networkInterfaceArnsIndex = 0; networkInterfaceArnsIndex < networkInterfaceArnsJsonList.GetLength();
         ++networkInterfaceArnsIndex) {
      m_networkInterfaceArns.push_back(networkInterfaceArnsJsonList[networkInterfaceArnsIndex].AsString());
    }
    m_networkInterfaceArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routingScopes")) {
    Aws::Utils::Array<JsonView> routingScopesJsonList = jsonValue.GetArray("routingScopes");
    for (unsigned routingScopesIndex = 0; routingScopesIndex < routingScopesJsonList.GetLength(); ++routingScopesIndex) {
      m_routingScopes.push_back(RoutingScopeMapper::GetRoutingScopeForName(routingScopesJsonList[routingScopesIndex].AsString()));
    }
    m_routingScopesHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterInputFilter::Jsonize() const {
  JsonValue payload;

  if (m_regionNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionNamesJsonList(m_regionNames.size());
    for (unsigned regionNamesIndex = 0; regionNamesIndex < regionNamesJsonList.GetLength(); ++regionNamesIndex) {
      regionNamesJsonList[regionNamesIndex].AsString(m_regionNames[regionNamesIndex]);
    }
    payload.WithArray("regionNames", std::move(regionNamesJsonList));
  }

  if (m_inputTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> inputTypesJsonList(m_inputTypes.size());
    for (unsigned inputTypesIndex = 0; inputTypesIndex < inputTypesJsonList.GetLength(); ++inputTypesIndex) {
      inputTypesJsonList[inputTypesIndex].AsString(RouterInputTypeMapper::GetNameForRouterInputType(m_inputTypes[inputTypesIndex]));
    }
    payload.WithArray("inputTypes", std::move(inputTypesJsonList));
  }

  if (m_nameContainsHasBeenSet) {
    Aws::Utils::Array<JsonValue> nameContainsJsonList(m_nameContains.size());
    for (unsigned nameContainsIndex = 0; nameContainsIndex < nameContainsJsonList.GetLength(); ++nameContainsIndex) {
      nameContainsJsonList[nameContainsIndex].AsString(m_nameContains[nameContainsIndex]);
    }
    payload.WithArray("nameContains", std::move(nameContainsJsonList));
  }

  if (m_networkInterfaceArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> networkInterfaceArnsJsonList(m_networkInterfaceArns.size());
    for (unsigned networkInterfaceArnsIndex = 0; networkInterfaceArnsIndex < networkInterfaceArnsJsonList.GetLength();
         ++networkInterfaceArnsIndex) {
      networkInterfaceArnsJsonList[networkInterfaceArnsIndex].AsString(m_networkInterfaceArns[networkInterfaceArnsIndex]);
    }
    payload.WithArray("networkInterfaceArns", std::move(networkInterfaceArnsJsonList));
  }

  if (m_routingScopesHasBeenSet) {
    Aws::Utils::Array<JsonValue> routingScopesJsonList(m_routingScopes.size());
    for (unsigned routingScopesIndex = 0; routingScopesIndex < routingScopesJsonList.GetLength(); ++routingScopesIndex) {
      routingScopesJsonList[routingScopesIndex].AsString(RoutingScopeMapper::GetNameForRoutingScope(m_routingScopes[routingScopesIndex]));
    }
    payload.WithArray("routingScopes", std::move(routingScopesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
