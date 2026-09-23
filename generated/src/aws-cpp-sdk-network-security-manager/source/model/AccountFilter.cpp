/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/AccountFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

AccountFilter::AccountFilter(JsonView jsonValue) { *this = jsonValue; }

AccountFilter& AccountFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("includeAll")) {
    m_includeAll = jsonValue.GetObject("includeAll");
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

JsonValue AccountFilter::Jsonize() const {
  JsonValue payload;

  if (m_includeAllHasBeenSet) {
    payload.WithObject("includeAll", m_includeAll.Jsonize());
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
