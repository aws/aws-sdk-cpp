/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/ClientInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {

ClientInfo::ClientInfo(JsonView jsonValue) { *this = jsonValue; }

ClientInfo& ClientInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("compatibilityVersion")) {
    m_compatibilityVersion = jsonValue.GetInteger("compatibilityVersion");
    m_compatibilityVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sdkVersion")) {
    m_sdkVersion = jsonValue.GetString("sdkVersion");
    m_sdkVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientInfo::Jsonize() const {
  JsonValue payload;

  if (m_compatibilityVersionHasBeenSet) {
    payload.WithInteger("compatibilityVersion", m_compatibilityVersion);
  }

  if (m_sdkVersionHasBeenSet) {
    payload.WithString("sdkVersion", m_sdkVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
