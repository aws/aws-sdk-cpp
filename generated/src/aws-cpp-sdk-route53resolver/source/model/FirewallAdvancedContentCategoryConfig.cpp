/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/FirewallAdvancedContentCategoryConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {

FirewallAdvancedContentCategoryConfig::FirewallAdvancedContentCategoryConfig(JsonView jsonValue) { *this = jsonValue; }

FirewallAdvancedContentCategoryConfig& FirewallAdvancedContentCategoryConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Category")) {
    m_category = jsonValue.GetString("Category");
    m_categoryHasBeenSet = true;
  }
  return *this;
}

JsonValue FirewallAdvancedContentCategoryConfig::Jsonize() const {
  JsonValue payload;

  if (m_categoryHasBeenSet) {
    payload.WithString("Category", m_category);
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
