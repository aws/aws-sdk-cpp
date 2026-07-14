/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/ResourceInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

ResourceInfo::ResourceInfo(JsonView jsonValue) { *this = jsonValue; }

ResourceInfo& ResourceInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AIDetails")) {
    m_aIDetails = jsonValue.GetObject("AIDetails");
    m_aIDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceInfo::Jsonize() const {
  JsonValue payload;

  if (m_aIDetailsHasBeenSet) {
    payload.WithObject("AIDetails", m_aIDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
