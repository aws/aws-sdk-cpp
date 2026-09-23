/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/ResourceScope.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

ResourceScope::ResourceScope(JsonView jsonValue) { *this = jsonValue; }

ResourceScope& ResourceScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("includeAll")) {
    m_includeAll = jsonValue.GetBool("includeAll");
    m_includeAllHasBeenSet = true;
  }
  if (jsonValue.ValueExists("include")) {
    m_include = jsonValue.GetObject("include");
    m_includeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exclude")) {
    m_exclude = jsonValue.GetObject("exclude");
    m_excludeHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceScope::Jsonize() const {
  JsonValue payload;

  if (m_includeAllHasBeenSet) {
    payload.WithBool("includeAll", m_includeAll);
  }

  if (m_includeHasBeenSet) {
    payload.WithObject("include", m_include.Jsonize());
  }

  if (m_excludeHasBeenSet) {
    payload.WithObject("exclude", m_exclude.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
