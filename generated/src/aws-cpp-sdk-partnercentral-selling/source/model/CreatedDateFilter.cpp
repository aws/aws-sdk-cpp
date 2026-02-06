/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/CreatedDateFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

CreatedDateFilter::CreatedDateFilter(JsonView jsonValue) { *this = jsonValue; }

CreatedDateFilter& CreatedDateFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AfterCreatedDate")) {
    m_afterCreatedDate = jsonValue.GetString("AfterCreatedDate");
    m_afterCreatedDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BeforeCreatedDate")) {
    m_beforeCreatedDate = jsonValue.GetString("BeforeCreatedDate");
    m_beforeCreatedDateHasBeenSet = true;
  }
  return *this;
}

JsonValue CreatedDateFilter::Jsonize() const {
  JsonValue payload;

  if (m_afterCreatedDateHasBeenSet) {
    payload.WithString("AfterCreatedDate", m_afterCreatedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_beforeCreatedDateHasBeenSet) {
    payload.WithString("BeforeCreatedDate", m_beforeCreatedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
