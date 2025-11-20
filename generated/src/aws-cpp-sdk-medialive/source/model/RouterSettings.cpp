/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/RouterSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

RouterSettings::RouterSettings(JsonView jsonValue) { *this = jsonValue; }

RouterSettings& RouterSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinations")) {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("destinations");
    for (unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex) {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionType")) {
    m_encryptionType = RouterEncryptionTypeMapper::GetRouterEncryptionTypeForName(jsonValue.GetString("encryptionType"));
    m_encryptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secretArn")) {
    m_secretArn = jsonValue.GetString("secretArn");
    m_secretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterSettings::Jsonize() const {
  JsonValue payload;

  if (m_destinationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
    for (unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex) {
      destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
    }
    payload.WithArray("destinations", std::move(destinationsJsonList));
  }

  if (m_encryptionTypeHasBeenSet) {
    payload.WithString("encryptionType", RouterEncryptionTypeMapper::GetNameForRouterEncryptionType(m_encryptionType));
  }

  if (m_secretArnHasBeenSet) {
    payload.WithString("secretArn", m_secretArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
