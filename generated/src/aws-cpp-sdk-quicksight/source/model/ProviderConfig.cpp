/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ProviderConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ProviderConfig::ProviderConfig(JsonView jsonValue) { *this = jsonValue; }

ProviderConfig& ProviderConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MicrosoftPurview")) {
    m_microsoftPurview = jsonValue.GetObject("MicrosoftPurview");
    m_microsoftPurviewHasBeenSet = true;
  }
  return *this;
}

JsonValue ProviderConfig::Jsonize() const {
  JsonValue payload;

  if (m_microsoftPurviewHasBeenSet) {
    payload.WithObject("MicrosoftPurview", m_microsoftPurview.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
