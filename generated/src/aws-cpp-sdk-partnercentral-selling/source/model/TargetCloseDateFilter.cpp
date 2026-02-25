/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/TargetCloseDateFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

TargetCloseDateFilter::TargetCloseDateFilter(JsonView jsonValue) { *this = jsonValue; }

TargetCloseDateFilter& TargetCloseDateFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AfterTargetCloseDate")) {
    m_afterTargetCloseDate = jsonValue.GetString("AfterTargetCloseDate");
    m_afterTargetCloseDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BeforeTargetCloseDate")) {
    m_beforeTargetCloseDate = jsonValue.GetString("BeforeTargetCloseDate");
    m_beforeTargetCloseDateHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetCloseDateFilter::Jsonize() const {
  JsonValue payload;

  if (m_afterTargetCloseDateHasBeenSet) {
    payload.WithString("AfterTargetCloseDate", m_afterTargetCloseDate);
  }

  if (m_beforeTargetCloseDateHasBeenSet) {
    payload.WithString("BeforeTargetCloseDate", m_beforeTargetCloseDate);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
