/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterOutputFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterOutputFilter::RouterOutputFilter(JsonView jsonValue) { *this = jsonValue; }

RouterOutputFilter& RouterOutputFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("regionNames")) {
    Aws::Utils::Array<JsonView> regionNamesJsonList = jsonValue.GetArray("regionNames");
    for (unsigned regionNamesIndex = 0; regionNamesIndex < regionNamesJsonList.GetLength(); ++regionNamesIndex) {
      m_regionNames.push_back(regionNamesJsonList[regionNamesIndex].AsString());
    }
    m_regionNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputTypes")) {
    Aws::Utils::Array<JsonView> outputTypesJsonList = jsonValue.GetArray("outputTypes");
    for (unsigned outputTypesIndex = 0; outputTypesIndex < outputTypesJsonList.GetLength(); ++outputTypesIndex) {
      m_outputTypes.push_back(RouterOutputTypeMapper::GetRouterOutputTypeForName(outputTypesJsonList[outputTypesIndex].AsString()));
    }
    m_outputTypesHasBeenSet = true;
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
  if (jsonValue.ValueExists("routedInputArns")) {
    Aws::Utils::Array<JsonView> routedInputArnsJsonList = jsonValue.GetArray("routedInputArns");
    for (unsigned routedInputArnsIndex = 0; routedInputArnsIndex < routedInputArnsJsonList.GetLength(); ++routedInputArnsIndex) {
      m_routedInputArns.push_back(routedInputArnsJsonList[routedInputArnsIndex].AsString());
    }
    m_routedInputArnsHasBeenSet = true;
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

JsonValue RouterOutputFilter::Jsonize() const {
  JsonValue payload;

  if (m_regionNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionNamesJsonList(m_regionNames.size());
    for (unsigned regionNamesIndex = 0; regionNamesIndex < regionNamesJsonList.GetLength(); ++regionNamesIndex) {
      regionNamesJsonList[regionNamesIndex].AsString(m_regionNames[regionNamesIndex]);
    }
    payload.WithArray("regionNames", std::move(regionNamesJsonList));
  }

  if (m_outputTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> outputTypesJsonList(m_outputTypes.size());
    for (unsigned outputTypesIndex = 0; outputTypesIndex < outputTypesJsonList.GetLength(); ++outputTypesIndex) {
      outputTypesJsonList[outputTypesIndex].AsString(RouterOutputTypeMapper::GetNameForRouterOutputType(m_outputTypes[outputTypesIndex]));
    }
    payload.WithArray("outputTypes", std::move(outputTypesJsonList));
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

  if (m_routedInputArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> routedInputArnsJsonList(m_routedInputArns.size());
    for (unsigned routedInputArnsIndex = 0; routedInputArnsIndex < routedInputArnsJsonList.GetLength(); ++routedInputArnsIndex) {
      routedInputArnsJsonList[routedInputArnsIndex].AsString(m_routedInputArns[routedInputArnsIndex]);
    }
    payload.WithArray("routedInputArns", std::move(routedInputArnsJsonList));
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
