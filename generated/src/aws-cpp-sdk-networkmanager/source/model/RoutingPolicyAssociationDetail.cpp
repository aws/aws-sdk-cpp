/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/RoutingPolicyAssociationDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {

RoutingPolicyAssociationDetail::RoutingPolicyAssociationDetail(JsonView jsonValue) { *this = jsonValue; }

RoutingPolicyAssociationDetail& RoutingPolicyAssociationDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RoutingPolicyNames")) {
    Aws::Utils::Array<JsonView> routingPolicyNamesJsonList = jsonValue.GetArray("RoutingPolicyNames");
    for (unsigned routingPolicyNamesIndex = 0; routingPolicyNamesIndex < routingPolicyNamesJsonList.GetLength();
         ++routingPolicyNamesIndex) {
      m_routingPolicyNames.push_back(routingPolicyNamesJsonList[routingPolicyNamesIndex].AsString());
    }
    m_routingPolicyNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SharedSegments")) {
    Aws::Utils::Array<JsonView> sharedSegmentsJsonList = jsonValue.GetArray("SharedSegments");
    for (unsigned sharedSegmentsIndex = 0; sharedSegmentsIndex < sharedSegmentsJsonList.GetLength(); ++sharedSegmentsIndex) {
      m_sharedSegments.push_back(sharedSegmentsJsonList[sharedSegmentsIndex].AsString());
    }
    m_sharedSegmentsHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingPolicyAssociationDetail::Jsonize() const {
  JsonValue payload;

  if (m_routingPolicyNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> routingPolicyNamesJsonList(m_routingPolicyNames.size());
    for (unsigned routingPolicyNamesIndex = 0; routingPolicyNamesIndex < routingPolicyNamesJsonList.GetLength();
         ++routingPolicyNamesIndex) {
      routingPolicyNamesJsonList[routingPolicyNamesIndex].AsString(m_routingPolicyNames[routingPolicyNamesIndex]);
    }
    payload.WithArray("RoutingPolicyNames", std::move(routingPolicyNamesJsonList));
  }

  if (m_sharedSegmentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sharedSegmentsJsonList(m_sharedSegments.size());
    for (unsigned sharedSegmentsIndex = 0; sharedSegmentsIndex < sharedSegmentsJsonList.GetLength(); ++sharedSegmentsIndex) {
      sharedSegmentsJsonList[sharedSegmentsIndex].AsString(m_sharedSegments[sharedSegmentsIndex]);
    }
    payload.WithArray("SharedSegments", std::move(sharedSegmentsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
