/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/OwnedResourceShareDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

OwnedResourceShareDetails::OwnedResourceShareDetails(JsonView jsonValue) { *this = jsonValue; }

OwnedResourceShareDetails& OwnedResourceShareDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("shareState")) {
    m_shareState = ResourceShareStateMapper::GetResourceShareStateForName(jsonValue.GetString("shareState"));
    m_shareStateHasBeenSet = true;
  }
  return *this;
}

JsonValue OwnedResourceShareDetails::Jsonize() const {
  JsonValue payload;

  if (m_shareStateHasBeenSet) {
    payload.WithString("shareState", ResourceShareStateMapper::GetNameForResourceShareState(m_shareState));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
