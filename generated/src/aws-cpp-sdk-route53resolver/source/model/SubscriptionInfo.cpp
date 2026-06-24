/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/SubscriptionInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {

SubscriptionInfo::SubscriptionInfo(JsonView jsonValue) { *this = jsonValue; }

SubscriptionInfo& SubscriptionInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VendorName")) {
    m_vendorName = jsonValue.GetString("VendorName");
    m_vendorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProductId")) {
    m_productId = jsonValue.GetString("ProductId");
    m_productIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SubscriptionInfo::Jsonize() const {
  JsonValue payload;

  if (m_vendorNameHasBeenSet) {
    payload.WithString("VendorName", m_vendorName);
  }

  if (m_productIdHasBeenSet) {
    payload.WithString("ProductId", m_productId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
