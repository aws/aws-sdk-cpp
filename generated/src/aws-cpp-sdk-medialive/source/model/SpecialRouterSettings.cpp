/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/SpecialRouterSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

SpecialRouterSettings::SpecialRouterSettings(JsonView jsonValue) { *this = jsonValue; }

SpecialRouterSettings& SpecialRouterSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("routerArn")) {
    m_routerArn = jsonValue.GetString("routerArn");
    m_routerArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SpecialRouterSettings::Jsonize() const {
  JsonValue payload;

  if (m_routerArnHasBeenSet) {
    payload.WithString("routerArn", m_routerArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
