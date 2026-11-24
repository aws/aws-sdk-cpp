/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/IdpClientSecretInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

IdpClientSecretInput::IdpClientSecretInput(JsonView jsonValue) { *this = jsonValue; }

IdpClientSecretInput& IdpClientSecretInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RegionalSecretManagerArns")) {
    Aws::Map<Aws::String, JsonView> regionalSecretManagerArnsJsonMap = jsonValue.GetObject("RegionalSecretManagerArns").GetAllObjects();
    for (auto& regionalSecretManagerArnsItem : regionalSecretManagerArnsJsonMap) {
      m_regionalSecretManagerArns[regionalSecretManagerArnsItem.first] = regionalSecretManagerArnsItem.second.AsString();
    }
    m_regionalSecretManagerArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue IdpClientSecretInput::Jsonize() const {
  JsonValue payload;

  if (m_regionalSecretManagerArnsHasBeenSet) {
    JsonValue regionalSecretManagerArnsJsonMap;
    for (auto& regionalSecretManagerArnsItem : m_regionalSecretManagerArns) {
      regionalSecretManagerArnsJsonMap.WithString(regionalSecretManagerArnsItem.first, regionalSecretManagerArnsItem.second);
    }
    payload.WithObject("RegionalSecretManagerArns", std::move(regionalSecretManagerArnsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
