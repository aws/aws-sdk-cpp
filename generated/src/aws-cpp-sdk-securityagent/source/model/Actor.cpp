/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/Actor.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

Actor::Actor(JsonView jsonValue) { *this = jsonValue; }

Actor& Actor::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("uris")) {
    Aws::Utils::Array<JsonView> urisJsonList = jsonValue.GetArray("uris");
    for (unsigned urisIndex = 0; urisIndex < urisJsonList.GetLength(); ++urisIndex) {
      m_uris.push_back(urisJsonList[urisIndex].AsString());
    }
    m_urisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authentication")) {
    m_authentication = jsonValue.GetObject("authentication");
    m_authenticationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue Actor::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  if (m_urisHasBeenSet) {
    Aws::Utils::Array<JsonValue> urisJsonList(m_uris.size());
    for (unsigned urisIndex = 0; urisIndex < urisJsonList.GetLength(); ++urisIndex) {
      urisJsonList[urisIndex].AsString(m_uris[urisIndex]);
    }
    payload.WithArray("uris", std::move(urisJsonList));
  }

  if (m_authenticationHasBeenSet) {
    payload.WithObject("authentication", m_authentication.Jsonize());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
