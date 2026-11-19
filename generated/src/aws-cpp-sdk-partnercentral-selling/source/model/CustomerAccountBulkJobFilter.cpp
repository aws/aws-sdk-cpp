/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/CustomerAccountBulkJobFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

CustomerAccountBulkJobFilter::CustomerAccountBulkJobFilter(JsonView jsonValue) { *this = jsonValue; }

CustomerAccountBulkJobFilter& CustomerAccountBulkJobFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Identifier")) {
    m_identifier = jsonValue.GetString("Identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = BulkJobStatusMapper::GetBulkJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerAccountBulkJobFilter::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("Identifier", m_identifier);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", BulkJobStatusMapper::GetNameForBulkJobStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
