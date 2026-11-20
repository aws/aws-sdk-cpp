/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/TrustCenterUpdateAttribute.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

TrustCenterUpdateAttribute::TrustCenterUpdateAttribute(JsonView jsonValue) { *this = jsonValue; }

TrustCenterUpdateAttribute& TrustCenterUpdateAttribute::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publishedTime")) {
    m_publishedTime = jsonValue.GetDouble("publishedTime");
    m_publishedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustCenterUpdateAttribute::Jsonize() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_publishedTimeHasBeenSet) {
    payload.WithDouble("publishedTime", m_publishedTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
