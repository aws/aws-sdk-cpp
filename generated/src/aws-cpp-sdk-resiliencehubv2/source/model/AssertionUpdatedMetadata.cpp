/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/AssertionUpdatedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

AssertionUpdatedMetadata::AssertionUpdatedMetadata(JsonView jsonValue) { *this = jsonValue; }

AssertionUpdatedMetadata& AssertionUpdatedMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("assertionId")) {
    m_assertionId = jsonValue.GetString("assertionId");
    m_assertionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assertionName")) {
    m_assertionName = jsonValue.GetString("assertionName");
    m_assertionNameHasBeenSet = true;
  }
  return *this;
}

JsonValue AssertionUpdatedMetadata::Jsonize() const {
  JsonValue payload;

  if (m_assertionIdHasBeenSet) {
    payload.WithString("assertionId", m_assertionId);
  }

  if (m_assertionNameHasBeenSet) {
    payload.WithString("assertionName", m_assertionName);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
